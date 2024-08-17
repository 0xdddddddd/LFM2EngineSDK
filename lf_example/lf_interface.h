#ifndef __LF_INTERFACE_H__
#define __LF_INTERFACE_H__

#include "lf_platform.h"
#include "lf_struct.h"

#include <thread>
#include <mutex>
#include <shared_mutex>

namespace LF
{
	class M2Engine;
	class LFEngine
	{
	public:
		explicit LFEngine(struct TAppFuncDef* m2object);
		virtual ~LFEngine();
	public:
		static void Instance(struct TAppFuncDef* m2object);
		// �����ʼ
		static BOOL CALLBACK Init(struct TAppFuncDef* AppFunc, i32 AppFuncCrc, i32 ExtParam, char* Desc, i32 DescLen);
		// ���ж��
		static void CALLBACK UnInit();
	public:
		void lf_engine_init();
	private:
		struct TAppFuncDef* lf_m2object;
	private:
		std::unique_ptr<M2Engine> lf_m2engine;
	private:
		static std::once_flag flag;
		static std::shared_mutex mutex;
		static std::unique_ptr<LFEngine> lf_engine;
	private:
		LFEngine(LFEngine&) = delete;
		LFEngine& operator=(const LFEngine&) = delete;
	};
}

#endif // __LF_INTERFACE_H__