#ifndef __LF_UTILS_H__
#define __LF_UTILS_H__

#include <functional>
#include <type_traits>
#include <utility>
#include <tchar.h>

#define DebugMsg(...) do { char debugMsg[MAX_PATH]; snprintf(debugMsg, sizeof(debugMsg), __VA_ARGS__); OutputDebugStringA(debugMsg); } while(0)

#define DebugScriptMsg(ScriptParam, n) do { \
    char debugMsg[MAX_PATH]; \
    _snprintf_s(debugMsg, sizeof(debugMsg), _TRUNCATE, \
        "sRawParam%02d: %s\nsParam%02d: %s\nnParam%02d: %d\n", \
        n, ScriptParam->sRawParam##n, \
        n, ScriptParam->sParam##n, \
        n, ScriptParam->nParam##n); \
    OutputDebugStringA(debugMsg); \
} while(0)

namespace LF
{
	namespace detail
	{
		template<typename Ret, typename... Args>
		struct function_traits
		{
			using return_type = Ret;
			using args_tuple = std::tuple<Args...>;
		};

		template<typename Ret, typename... Args>
		function_traits<Ret, Args...> get_function_traits(Ret(CALLBACK*)(Args...)) {}

		template<typename F, typename Tuple, std::size_t... I>
		decltype(auto) apply_impl(F&& f, Tuple&& t, std::index_sequence<I...>)
		{
			return std::invoke(std::forward<F>(f), std::get<I>(std::forward<Tuple>(t))...);
		}

		template<typename F, typename Tuple>
		decltype(auto) apply(F&& f, Tuple&& t)
		{
			return apply_impl(std::forward<F>(f), std::forward<Tuple>(t),
							  std::make_index_sequence<std::tuple_size_v<std::remove_reference_t<Tuple>>>{});
		}

		template<typename T>
		struct is_function_pointer : std::false_type {};

		template<typename Ret, typename... Args>
		struct is_function_pointer<Ret(*)(Args...)> : std::true_type {};
	}

	template<typename FuncPtr, typename... Args>
	decltype(auto) wrap_call(FuncPtr func_ptr, Args&&... args)
	{
		if constexpr (detail::is_function_pointer<FuncPtr>::value) {
			return detail::apply(func_ptr, std::forward_as_tuple(std::forward<Args>(args)...));
		} else {
			static_assert(detail::is_function_pointer<FuncPtr>::value, "First argument must be a function pointer");
		}
	}

	template<typename Ret = void, typename... Args>
	decltype(auto) wrap_call(void* func_ptr, Args... args)
	{
		if constexpr (std::is_void_v<Ret>) {
			using FuncTraits = decltype(detail::get_function_traits(
				reinterpret_cast<decltype(detail::get_function_traits(
				std::declval<void(CALLBACK*)(Args...)>()
				))::return_type(CALLBACK*)(Args...)>(func_ptr)
				));
			return detail::apply(reinterpret_cast<typename FuncTraits::return_type(CALLBACK*)(Args...)>(func_ptr), std::forward_as_tuple(std::forward<Args>(args)...));
		}

		return detail::apply(reinterpret_cast<Ret(CALLBACK*)(Args...)>(func_ptr), std::forward_as_tuple(std::forward<Args>(args)...));
	}
}

#endif // __LF_UTILS_H__