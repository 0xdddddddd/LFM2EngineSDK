#include "lf_interface.h"
#include "lf_m2engine.h"

#include <atomic>
#include <memory>

namespace LF
{
	std::once_flag LFEngine::flag;
	std::shared_mutex LFEngine::mutex;
	std::unique_ptr<LFEngine> LFEngine::lf_engine;

	LFEngine::LFEngine(struct TAppFuncDef* m2object)
		: lf_m2object(new struct TAppFuncDef)
		, lf_m2engine(nullptr)
	{
		memcpy(lf_m2object, m2object, sizeof(struct TAppFuncDef));
		lf_m2engine = std::make_unique<M2Engine>(&lf_m2object->M2Engine);
	}

	LFEngine::~LFEngine()
	{

	}

	void LFEngine::Instance(struct TAppFuncDef* m2object)
	{
		std::unique_lock lock(LFEngine::mutex);
		{
			std::call_once(LFEngine::flag, [&] {
				LFEngine::lf_engine = std::make_unique<LFEngine>(m2object);
			});
		}
	}

	BOOL CALLBACK LFEngine::Init(struct TAppFuncDef* AppFunc, i32 AppFuncCrc, i32 ExtParam, char* Desc, i32 DescLen)
	{
		DebugMsg("AppFunc:%p AppFuncCrc:%08X ExtParam:%d Desc:%s DescLen:%d\n", AppFunc,
				 AppFuncCrc,
				 ExtParam,
				 Desc,
				 DescLen);

		LFEngine::Instance(AppFunc);
		{
			if (lf_engine != nullptr) {
				lf_engine->lf_engine_init();
			}
		}

		return TRUE;
	}

	void CALLBACK LFEngine::UnInit()
	{

	}

	void LFEngine::lf_engine_init()
	{
		if (lf_m2engine == nullptr) {
			return;
		}

		lf_m2engine->MainOutMessage("hello world\n", true);
		lf_m2engine->MainOutMessage("风总牛逼\n", true);

		char buf[260] = { 0 };

		u32 buf_len = sizeof(buf);

		lf_m2engine->GetVersion(buf, &buf_len);

		DebugMsg("M2版本:%s 字符串长度:%d\n", buf, buf_len);
	}
}