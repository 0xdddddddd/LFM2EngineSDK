#include "lf_norm_npc.h"

namespace LF
{
	NormNpc::NormNpc(struct TNormNpcFunc* self)
		: self(self)
	{
	}

	NormNpc::~NormNpc() {}

	struct TNormNpc* NormNpc::Create(const char* charName, const char* sMapName, const char* sScript, i32 x, i32 y, u16 wAppr, bool boIsHide)
	{
		if (self == nullptr || self->Create == nullptr || charName == nullptr || sMapName == nullptr || sScript == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->Create, charName, sMapName, sScript, x, y, wAppr, boIsHide);
	}

	void NormNpc::LoadNpcScript(struct TNormNpc* normNpc)
	{
		if (self == nullptr || self->LoadNpcScript == nullptr) {
			return;
		}

		if (normNpc == nullptr) {
			return;
		}

		wrap_call(self->LoadNpcScript, normNpc);
	}

	void NormNpc::ClearScript(struct TNormNpc* normNpc)
	{
		if (self == nullptr || self->ClearScript == nullptr) {
			return;
		}

		if (normNpc == nullptr) {
			return;
		}

		wrap_call(self->ClearScript, normNpc);
	}

	bool NormNpc::GetFilePath(struct TNormNpc* normNpc, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetFilePath == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (normNpc == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFilePath, normNpc, dest, destLen);
	}

	void NormNpc::SetFilePath(struct TNormNpc* normNpc, const char* value)
	{
		if (self == nullptr || self->SetFilePath == nullptr || value == nullptr) {
			return;
		}

		if (normNpc == nullptr) {
			return;
		}

		wrap_call(self->SetFilePath, normNpc, value);
	}

	bool NormNpc::GetPath(struct TNormNpc* normNpc, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetPath == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (normNpc == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetPath, normNpc, dest, destLen);
	}

	void NormNpc::SetPath(struct TNormNpc* normNpc, const char* value)
	{
		if (self == nullptr || self->SetPath == nullptr || value == nullptr) {
			return;
		}

		if (normNpc == nullptr) {
			return;
		}

		wrap_call(self->SetPath, normNpc, value);
	}

	bool NormNpc::GetIsHide(struct TNormNpc* normNpc)
	{
		if (self == nullptr || self->GetIsHide == nullptr) {
			return false;
		}

		if (normNpc == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsHide, normNpc);
	}

	void NormNpc::SetIsHide(struct TNormNpc* normNpc, bool value)
	{
		if (self == nullptr || self->SetIsHide == nullptr) {
			return;
		}

		if (normNpc == nullptr) {
			return;
		}

		wrap_call(self->SetIsHide, normNpc, value);
	}

	bool NormNpc::GetIsQuest(struct TNormNpc* normNpc)
	{
		if (self == nullptr || self->GetIsQuest == nullptr) {
			return false;
		}

		if (normNpc == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsQuest, normNpc);
	}

	bool NormNpc::GetLineVariableText(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetLineVariableText == nullptr || sMsg == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (normNpc == nullptr || player == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetLineVariableText, normNpc, player, sMsg, dest, destLen);
	}

	void NormNpc::GotoLable(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sLabel, bool boExtJmp)
	{
		if (self == nullptr || self->GotoLable == nullptr || sLabel == nullptr) {
			return;
		}

		if (normNpc == nullptr || player == nullptr) {
			return;
		}

		wrap_call(self->GotoLable, normNpc, player, sLabel, boExtJmp);
	}

	void NormNpc::SendMsgToUser(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg)
	{
		if (self == nullptr || self->SendMsgToUser == nullptr || sMsg == nullptr) {
			return;
		}

		if (normNpc == nullptr || player == nullptr) {
			return;
		}

		wrap_call(self->SendMsgToUser, normNpc, player, sMsg);
	}

	void NormNpc::MessageBox(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg)
	{
		if (self == nullptr || self->MessageBox == nullptr || sMsg == nullptr) {
			return;
		}

		if (normNpc == nullptr || player == nullptr) {
			return;
		}

		wrap_call(self->MessageBox, normNpc, player, sMsg);
	}

	bool NormNpc::GetVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, u32* nValue)
	{
		if (self == nullptr || self->GetVarValue == nullptr || sVarName == nullptr || sValue == nullptr || sValueSize == nullptr || nValue == nullptr) {
			return false;
		}

		if (normNpc == nullptr || player == nullptr) {
			return false;
		}

		DebugMsg("self->GetVarValue: %p normNpc: %p", self->GetVarValue, normNpc);

		return wrap_call<bool>(self->GetVarValue, normNpc, player, sVarName, sValue, sValueSize, nValue);
	}

	bool NormNpc::SetVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, const char* sValue, u64 nValue)
	{
		if (self == nullptr || self->SetVarValue == nullptr || sVarName == nullptr || sValue == nullptr) {
			return false;
		}

		if (normNpc == nullptr || player == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetVarValue, normNpc, player, sVarName, sValue, nValue);
	}

	bool NormNpc::GetDynamicVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, u32* nValue)
	{
		if (self == nullptr || self->GetDynamicVarValue == nullptr || sVarName == nullptr || sValue == nullptr || sValueSize == nullptr || nValue == nullptr) {
			return false;
		}

		if (normNpc == nullptr || player == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDynamicVarValue, normNpc, player, sVarName, sValue, sValueSize, nValue);
	}

	bool NormNpc::SetDynamicVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, const char* sValue, u64 nValue)
	{
		if (self == nullptr || self->SetDynamicVarValue == nullptr || sVarName == nullptr || sValue == nullptr) {
			return false;
		}

		if (normNpc == nullptr || player == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetDynamicVarValue, normNpc, player, sVarName, sValue, nValue);
	}
}