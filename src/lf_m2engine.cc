#include "lf_m2engine.h"

namespace LF
{
	M2Engine::M2Engine(struct TM2EngineFunc* self)
		: self(self)
	{
	}

	M2Engine::~M2Engine()
	{
	}

	bool M2Engine::GetVersion(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetVersion == nullptr || dest == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVersion, dest, destLen);
	}

	i32 M2Engine::GetVersionInt()
	{
		if (self == nullptr || self->GetVersionInt == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVersionInt);
	}

	void* M2Engine::GetMainFormHandle()
	{
		if (self == nullptr || self->GetMainFormHandle == nullptr) {
			return nullptr;
		}

		return wrap_call<void*>(self->GetMainFormHandle);
	}

	void M2Engine::SetMainFormCaption(const char* caption)
	{
		if (self == nullptr || self->SetMainFormCaption == nullptr || caption == nullptr) {
			return;
		}

		wrap_call(self->SetMainFormCaption, caption);
	}

	bool M2Engine::GetAppDir(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetAppDir == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAppDir, dest, destLen);
	}

	struct TIniFile* M2Engine::GetGlobalIniFile(i32 m2IniType)
	{
		if (self == nullptr || self->GetGlobalIniFile == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TIniFile*>(self->GetGlobalIniFile, m2IniType);
	}

	bool M2Engine::GetOtherFileDir(i32 m2FileType, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetOtherFileDir == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetOtherFileDir, m2FileType, dest, destLen);
	}

	void M2Engine::MainOutMessage(const char* msg, bool isAddTime)
	{
		if (self == nullptr || self->MainOutMessage == nullptr || msg == nullptr) {
			return;
		}

		wrap_call(self->MainOutMessage, msg, isAddTime);
	}

	i32 M2Engine::GetGlobalVarI(i32 index)
	{
		if (self == nullptr || self->GetGlobalVarI == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGlobalVarI, index);
	}

	bool M2Engine::SetGlobalVarI(i32 index, i32 value)
	{
		if (self == nullptr || self->SetGlobalVarI == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetGlobalVarI, index, value);
	}

	i32 M2Engine::GetGlobalVarG(i32 index)
	{
		if (self == nullptr || self->GetGlobalVarG == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGlobalVarG, index);
	}

	bool M2Engine::SetGlobalVarG(i32 index, i32 value)
	{
		if (self == nullptr || self->SetGlobalVarG == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetGlobalVarG, index, value);
	}

	bool M2Engine::GetGlobalVarA(i32 index, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetGlobalVarA == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGlobalVarA, index, dest, destLen);
	}

	bool M2Engine::SetGlobalVarA(i32 index, const char* value)
	{
		if (self == nullptr || self->SetGlobalVarA == nullptr || value == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetGlobalVarA, index, value);
	}

	bool M2Engine::EncodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->EncodeBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->EncodeBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::DecodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->DecodeBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DecodeBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::ZLibEncodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->ZLibEncodeBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ZLibEncodeBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::ZLibDecodeBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->ZLibDecodeBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ZLibDecodeBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::EncryptBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->EncryptBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->EncryptBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::DecryptBuffer(const char* src, u32 srcLen, char* dest, u32* destLen)
	{
		if (self == nullptr || self->DecryptBuffer == nullptr || src == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DecryptBuffer, src, srcLen, dest, destLen);
	}

	bool M2Engine::EncryptPassword(const char* inData, char* outData, u32* outSize)
	{
		if (self == nullptr || self->EncryptPassword == nullptr || inData == nullptr || outData == nullptr || outSize == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->EncryptPassword, inData, outData, outSize);
	}

	bool M2Engine::DecryptPassword(const char* inData, char* outData, u32* outSize)
	{
		if (self == nullptr || self->DecryptPassword == nullptr || inData == nullptr || outData == nullptr || outSize == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DecryptPassword, inData, outData, outSize);
	}

	i32 M2Engine::GetTakeOnPosition(i32 stdMode)
	{
		if (self == nullptr || self->GetTakeOnPosition == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetTakeOnPosition, stdMode);
	}

	bool M2Engine::CheckBindType(void* bindValue, void* bindType)
	{
		if (self == nullptr || self->CheckBindType == nullptr || bindValue == nullptr || bindType == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckBindType, bindValue, bindType);
	}

	void M2Engine::SetBindValue(void* bindValue, void* bindType, bool value)
	{
		if (self == nullptr || self->SetBindValue == nullptr || bindValue == nullptr || bindType == nullptr) {
			return;
		}

		wrap_call(self->SetBindValue, bindValue, bindType, value);
	}

	u32 M2Engine::GetRGB(void* color)
	{
		if (self == nullptr || self->GetRGB == nullptr || color == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetRGB, color);
	}
}