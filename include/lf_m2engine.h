#ifndef __LF_M2ENGINE_H__
#define __LF_M2ENGINE_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class M2Engine
	{
	public:
		explicit M2Engine(struct TM2EngineFunc* self);
		virtual ~M2Engine();
	public:
		bool GetVersion(char* dest, u32* destLen);
		i32 GetVersionInt();
		void* GetMainFormHandle();
		void SetMainFormCaption(const char* caption);
		bool GetAppDir(char* dest, u32* destLen);
		struct TIniFile* GetGlobalIniFile(i32 m2IniType);
		bool GetOtherFileDir(i32 m2FileType, char* dest, u32* destLen);
		void MainOutMessage(const char* msg, bool isAddTime);
		i32 GetGlobalVarI(i32 index);
		bool SetGlobalVarI(i32 index, i32 value);
		i32 GetGlobalVarG(i32 index);
		bool SetGlobalVarG(i32 index, i32 value);
		bool GetGlobalVarA(i32 index, char* dest, u32* destLen);
		bool SetGlobalVarA(i32 index, const char* value);
		bool EncodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool DecodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool ZLibEncodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool ZLibDecodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool EncryptBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool DecryptBuffer(const char* src, u32 srcLen, char* dest, u32* destLen);
		bool EncryptPassword(const char* inData, char* outData, u32* outSize);
		bool DecryptPassword(const char* inData, char* outData, u32* outSize);
		i32 GetTakeOnPosition(i32 stdMode);
		bool CheckBindType(void* bindValue, void* bindType);
		void SetBindValue(void* bindValue, void* bindType, bool value);
		u32 GetRGB(void* color);
	private:
		struct TM2EngineFunc* self;
	};
}

#endif // __LF_M2ENGINE_H__