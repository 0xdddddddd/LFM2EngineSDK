#include "lf_norm_npc.h"

namespace LF
{
	NormNpc::NormNpc(struct TNormNpcFunc* self, struct TNormNpc* object)
		: self(self), object(object)
	{
	}

	NormNpc::~NormNpc(){}

	struct TNormNpc* NormNpc::Create(const char* charName, const char* sMapName, const char* sScript, i32 x, i32 y, i16 wAppr, bool boIsHide)
	{
		if (self == nullptr || self->Create == nullptr || charName == nullptr || sMapName == nullptr || sScript == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->Create, charName, sMapName, sScript, x, y, wAppr, boIsHide);
	}

	void NormNpc::LoadNpcScript()
	{
		if (self == nullptr || self->LoadNpcScript == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->LoadNpcScript, object);
	}

	void NormNpc::ClearScript()
	{
		if (self == nullptr || self->ClearScript == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ClearScript, object);
	}

	bool NormNpc::GetFilePath(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetFilePath == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFilePath, object, dest, destLen);
	}

	void NormNpc::SetFilePath(const char* value)
	{
		if (self == nullptr || self->SetFilePath == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetFilePath, object, value);
	}

	bool NormNpc::GetPath(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetPath == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetPath, object, dest, destLen);
	}

	void NormNpc::SetPath(const char* value)
	{
		if (self == nullptr || self->SetPath == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPath, object, value);
	}

	bool NormNpc::GetIsHide()
	{
		if (self == nullptr || self->GetIsHide == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsHide, object);
	}

	void NormNpc::SetIsHide(bool value)
	{
		if (self == nullptr || self->SetIsHide == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsHide, object, value);
	}

	bool NormNpc::GetIsQuest()
	{
		if (self == nullptr || self->GetIsQuest == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsQuest, object);
	}

	bool NormNpc::GetLineVariableText(struct TPlayObject* player, const char* sMsg, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetLineVariableText == nullptr || player == nullptr || sMsg == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetLineVariableText, object, player, sMsg, dest, destLen);
	}

	void NormNpc::GotoLable(struct TPlayObject* player, const char* sLabel, bool boExtJmp)
	{
		if (self == nullptr || self->GotoLable == nullptr || player == nullptr || sLabel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GotoLable, object, player, sLabel, boExtJmp);
	}

	void NormNpc::SendMsgToUser(struct TPlayObject* player, const char* sMsg)
	{
		if (self == nullptr || self->SendMsgToUser == nullptr || player == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendMsgToUser, object, player, sMsg);
	}

	void NormNpc::MessageBox(struct TPlayObject* player, const char* sMsg)
	{
		if (self == nullptr || self->MessageBox == nullptr || player == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MessageBox, object, player, sMsg);
	}

	bool NormNpc::GetVarValue(struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, i32* nValue)
	{
		if (self == nullptr || self->GetVarValue == nullptr || player == nullptr || sVarName == nullptr || sValue == nullptr || sValueSize == nullptr || nValue == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVarValue, object, player, sVarName, sValue, sValueSize, nValue);
	}

	bool NormNpc::SetVarValue(struct TPlayObject* player, const char* sVarName, const char* sValue, i32 nValue)
	{
		if (self == nullptr || self->SetVarValue == nullptr || player == nullptr || sVarName == nullptr || sValue == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetVarValue, object, player, sVarName, sValue, nValue);
	}

	bool NormNpc::GetDynamicVarValue(struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, i32* nValue)
	{
		if (self == nullptr || self->GetDynamicVarValue == nullptr || player == nullptr || sVarName == nullptr || sValue == nullptr || sValueSize == nullptr || nValue == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDynamicVarValue, object, player, sVarName, sValue, sValueSize, nValue);
	}

	bool NormNpc::SetDynamicVarValue(struct TPlayObject* player, const char* sVarName, const char* sValue, i32 nValue)
	{
		if (self == nullptr || self->SetDynamicVarValue == nullptr || player == nullptr || sVarName == nullptr || sValue == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetDynamicVarValue, object, player, sVarName, sValue, nValue);
	}
}