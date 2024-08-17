#include "lf_play_object.h"

namespace LF
{
	PlayObject::PlayObject(struct TPlayObjectFunc* self)
		: self(self)
		, object(nullptr)
	{
	}

	PlayObject::~PlayObject()
	{

	}

	bool PlayObject::GetUserID(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetUserID == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetUserID, object, dest, destLen);
	}

	bool PlayObject::GetIPAddr(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetIPAddr == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIPAddr, object, dest, destLen);
	}

	bool PlayObject::GetIPLocal(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetIPLocal == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIPLocal, object, dest, destLen);
	}

	bool PlayObject::GetMachineID(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMachineID == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMachineID, object, dest, destLen);
	}

	bool PlayObject::GetIsReadyRun(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsReadyRun == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsReadyRun, object);
	}

	bool PlayObject::GetLogonTime(struct TPlayObject* object, PSYSTEMTIME logonTime)
	{
		if (self == nullptr || self->GetLogonTime == nullptr || logonTime == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetLogonTime, object, logonTime);
	}

	i32 PlayObject::GetSoftVerDate(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetSoftVerDate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetSoftVerDate, object);
	}

	i32 PlayObject::GetClientType(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetClientType == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetClientType, object);
	}

	bool PlayObject::IsOldClient(struct TPlayObject* object)
	{
		if (self == nullptr || self->IsOldClient == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOldClient, object);
	}

	i16 PlayObject::GetScreenWidth(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetScreenWidth == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetScreenWidth, object);
	}

	i16 PlayObject::GetScreenHeight(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetScreenHeight == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetScreenHeight, object);
	}

	i16 PlayObject::GetClientViewRange(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetClientViewRange == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetClientViewRange, object);
	}

	u8 PlayObject::GetRelevel(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetRelevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetRelevel, object);
	}

	void PlayObject::SetRelevel(struct TPlayObject* object, u8 value)
	{
		if (self == nullptr || self->SetRelevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetRelevel, object, value);
	}

	i32 PlayObject::GetBonusPoint(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetBonusPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBonusPoint, object);
	}

	void PlayObject::SetBonusPoint(struct TPlayObject* object, i32 value)
	{
		if (self == nullptr || self->SetBonusPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetBonusPoint, object, value);
	}

	void PlayObject::SendAdjustBonus(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendAdjustBonus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAdjustBonus, object);
	}

	bool PlayObject::GetHeroName(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetHeroName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetHeroName, object, dest, destLen);
	}

	bool PlayObject::GetDeputyHeroName(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetDeputyHeroName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDeputyHeroName, object, dest, destLen);
	}

	u8 PlayObject::GetDeputyHeroJob(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetDeputyHeroJob == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetDeputyHeroJob, object);
	}

	struct THeroObject* PlayObject::GetMyHero(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetMyHero == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct THeroObject*>(self->GetMyHero, object);
	}

	bool PlayObject::GetFixedHero(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetFixedHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFixedHero, object);
	}

	void PlayObject::ClientHeroLogOn(struct TPlayObject* object, bool isDeputyHero)
	{
		if (self == nullptr || self->ClientHeroLogOn == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ClientHeroLogOn, object, isDeputyHero);
	}

	bool PlayObject::GetStorageHero(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetStorageHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStorageHero, object);
	}

	bool PlayObject::GetStorageDeputyHero(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetStorageDeputyHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStorageDeputyHero, object);
	}

	bool PlayObject::GetIsStorageOpen(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetIsStorageOpen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsStorageOpen, object, index);
	}

	void PlayObject::SetIsStorageOpen(struct TPlayObject* object, i32 index, bool value)
	{
		if (self == nullptr || self->SetIsStorageOpen == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsStorageOpen, object, index, value);
	}

	u64 PlayObject::GetGold(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGold == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGold, object);
	}

	void PlayObject::SetGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGold, object, value);
	}

	u64 PlayObject::GetGoldMax(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGoldMax == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGoldMax, object);
	}

	bool PlayObject::IncGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGold == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IncGold, object, value);
	}

	bool PlayObject::DecGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGold == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DecGold, object, value);
	}

	void PlayObject::GoldChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->GoldChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GoldChanged, object);
	}

	u64 PlayObject::GetGameGold(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGameGold == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGameGold, object);
	}

	void PlayObject::SetGameGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGold, object, value);
	}

	void PlayObject::IncGameGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGold, object, value);
	}

	void PlayObject::DecGameGold(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGold, object, value);
	}

	void PlayObject::GameGoldChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->GameGoldChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GameGoldChanged, object);
	}

	u64 PlayObject::GetGamePoint(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGamePoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGamePoint, object);
	}

	void PlayObject::SetGamePoint(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGamePoint, object, value);
	}

	void PlayObject::IncGamePoint(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGamePoint, object, value);
	}

	void PlayObject::DecGamePoint(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGamePoint, object, value);
	}

	u64 PlayObject::GetGameDiamond(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGameDiamond == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGameDiamond, object);
	}

	void PlayObject::SetGameDiamond(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameDiamond, object, value);
	}

	void PlayObject::IncGameDiamond(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameDiamond, object, value);
	}

	void PlayObject::DecGameDiamond(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameDiamond, object, value);
	}

	void PlayObject::NewGamePointChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->NewGamePointChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->NewGamePointChanged, object);
	}

	u64 PlayObject::GetGameGird(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGameGird == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGameGird, object);
	}

	void PlayObject::SetGameGird(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGird, object, value);
	}

	void PlayObject::IncGameGird(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGird, object, value);
	}

	void PlayObject::DecGameGird(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGird, object, value);
	}

	u64 PlayObject::GetGameGoldEx(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGameGoldEx == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGameGoldEx, object);
	}

	void PlayObject::SetGameGoldEx(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGameGoldEx == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGoldEx, object, value);
	}

	u64 PlayObject::GetGameGlory(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGameGlory == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetGameGlory, object);
	}

	void PlayObject::SetGameGlory(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGlory, object, value);
	}

	void PlayObject::IncGameGlory(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->IncGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGlory, object, value);
	}

	void PlayObject::DecGameGlory(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->DecGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGlory, object, value);
	}

	void PlayObject::GameGloryChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->GameGloryChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GameGloryChanged, object);
	}

	u64 PlayObject::GetPayMentPoint(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetPayMentPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetPayMentPoint, object);
	}

	void PlayObject::SetPayMentPoint(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetPayMentPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPayMentPoint, object, value);
	}

	u64 PlayObject::GetMemberType(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetMemberType == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetMemberType, object);
	}

	void PlayObject::SetMemberType(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetMemberType == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMemberType, object, value);
	}

	u64 PlayObject::GetMemberLevel(struct TPlayObject* player)
	{
		if (self == nullptr || self->GetMemberLevel == nullptr) {
			return 0;
		}

		if (player == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetMemberLevel, player);
	}

	void PlayObject::SetMemberLevel(struct TPlayObject* object, u64 value)
	{
		if (self == nullptr || self->SetMemberLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMemberLevel, object, value);
	}

	i16 PlayObject::GetContribution(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetContribution == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetContribution, object);
	}

	void PlayObject::SetContribution(struct TPlayObject* object, i16 value)
	{
		if (self == nullptr || self->SetContribution == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetContribution, object, value);
	}

	void PlayObject::IncExp(struct TPlayObject* object, u32 value)
	{
		if (self == nullptr || self->IncExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExp, object, value);
	}

	void PlayObject::SendExpChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendExpChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendExpChanged, object);
	}

	void PlayObject::IncExpNG(struct TPlayObject* object, u32 value)
	{
		if (self == nullptr || self->IncExpNG == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExpNG, object, value);
	}

	void PlayObject::SendExpNGChanged(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendExpNGChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendExpNGChanged, object);
	}

	void PlayObject::IncBeadExp(struct TPlayObject* object, u32 value, bool isFromNPC)
	{
		if (self == nullptr || self->IncBeadExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncBeadExp, object, value, isFromNPC);
	}

	i32 PlayObject::GetVarP(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetVarP == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarP, object, index);
	}

	void PlayObject::SetVarP(struct TPlayObject* object, i32 index, i32 value)
	{
		if (self == nullptr || self->SetVarP == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarP, object, index, value);
	}

	i32 PlayObject::GetVarM(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetVarM == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarM, object, index);
	}

	void PlayObject::SetVarM(struct TPlayObject* object, i32 index, i32 value)
	{
		if (self == nullptr || self->SetVarM == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarM, object, index, value);
	}

	i32 PlayObject::GetVarD(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetVarD == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarD, object, index);
	}

	void PlayObject::SetVarD(struct TPlayObject* object, i32 index, i32 value)
	{
		if (self == nullptr || self->SetVarD == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarD, object, index, value);
	}

	u64 PlayObject::GetVarU(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetVarU == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetVarU, object, index);
	}

	void PlayObject::SetVarU(struct TPlayObject* object, i32 index, u64 value)
	{
		if (self == nullptr || self->SetVarU == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarU, object, index, value);
	}

	bool PlayObject::GetVarT(struct TPlayObject* object, i32 index, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetVarT == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVarT, object, index, dest, destLen);
	}

	void PlayObject::SetVarT(struct TPlayObject* object, i32 index, const char* value)
	{
		if (self == nullptr || self->SetVarT == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarT, object, index, value);
	}

	u64 PlayObject::GetVarN(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->GetVarN == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u64>(self->GetVarN, object, index);
	}

	void PlayObject::SetVarN(struct TPlayObject* object, i32 index, u64 value)
	{
		if (self == nullptr || self->SetVarN == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarN, object, index, value);
	}

	bool PlayObject::GetVarS(struct TPlayObject* object, i32 index, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetVarS == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVarS, object, index, dest, destLen);
	}

	void PlayObject::SetVarS(struct TPlayObject* object, i32 index, const char* value)
	{
		if (self == nullptr || self->SetVarS == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarS, object, index, value);
	}

	struct TList* PlayObject::GetDynamicVarList(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetDynamicVarList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetDynamicVarList, object);
	}

	i32 PlayObject::GetQuestFlagStatus(struct TPlayObject* object, i32 nFlag)
	{
		if (self == nullptr || self->GetQuestFlagStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetQuestFlagStatus, object, nFlag);
	}

	void PlayObject::SetQuestFlagStatus(struct TPlayObject* object, i32 nFlag, i32 value)
	{
		if (self == nullptr || self->SetQuestFlagStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetQuestFlagStatus, object, nFlag, value);
	}

	bool PlayObject::IsOffLine(struct TPlayObject* object)
	{
		if (self == nullptr || self->IsOffLine == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOffLine, object);
	}

	bool PlayObject::IsMaster(struct TPlayObject* object)
	{
		if (self == nullptr || self->IsMaster == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMaster, object);
	}

	bool PlayObject::GetMasterName(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMasterName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMasterName, object, dest, destLen);
	}

	struct TPlayObject* PlayObject::GetMasterHuman(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetMasterHuman == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetMasterHuman, object);
	}

	i32 PlayObject::GetApprenticeNO(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetApprenticeNO == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetApprenticeNO, object);
	}

	struct TList* PlayObject::GetOnlineApprenticeList(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetOnlineApprenticeList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetOnlineApprenticeList, object);
	}

	struct TList* PlayObject::GetAllApprenticeList(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetAllApprenticeList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetAllApprenticeList, object);
	}

	bool PlayObject::GetDearName(struct TPlayObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetDearName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDearName, object, dest, destLen);
	}

	struct TPlayObject* PlayObject::GetDearHuman(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetDearHuman == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetDearHuman, object);
	}

	u8 PlayObject::GetMarryCount(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetMarryCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetMarryCount, object);
	}

	struct TPlayObject* PlayObject::GetGroupOwner(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGroupOwner == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetGroupOwner, object);
	}

	struct TStringList* PlayObject::GetGroupMembers(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetGroupMembers == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TStringList*>(self->GetGroupMembers, object);
	}

	bool PlayObject::GetIsLockLogin(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsLockLogin == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsLockLogin, object);
	}

	void PlayObject::SetIsLockLogin(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsLockLogin == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsLockLogin, object, value);
	}

	bool PlayObject::GetIsAllowGroup(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsAllowGroup == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGroup, object);
	}

	void PlayObject::SetIsAllowGroup(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAllowGroup == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGroup, object, value);
	}

	bool PlayObject::GetIsAllowGroupReCall(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsAllowGroupReCall == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGroupReCall, object);
	}

	void PlayObject::SetIsAllowGroupReCall(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAllowGroupReCall == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGroupReCall, object, value);
	}

	bool PlayObject::GetIsAllowGuildReCall(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsAllowGuildReCall == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGuildReCall, object);
	}

	void PlayObject::SetIsAllowGuildReCall(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAllowGuildReCall == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGuildReCall, object, value);
	}

	bool PlayObject::GetIsAllowTrading(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsAllowTrading == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowTrading, object);
	}

	void PlayObject::SetIsAllowTrading(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAllowTrading == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowTrading, object, value);
	}

	bool PlayObject::GetIsDisableInviteHorseRiding(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsDisableInviteHorseRiding == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsDisableInviteHorseRiding, object);
	}

	void PlayObject::SetIsDisableInviteHorseRiding(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsDisableInviteHorseRiding == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDisableInviteHorseRiding, object, value);
	}

	bool PlayObject::GetIsGameGoldTrading(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsGameGoldTrading == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsGameGoldTrading, object);
	}

	void PlayObject::SetIsGameGoldTrading(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsGameGoldTrading == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsGameGoldTrading, object, value);
	}

	bool PlayObject::GetIsNewServer(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsNewServer == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNewServer, object);
	}

	bool PlayObject::GetIsFilterGlobalDropItemMsg(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsFilterGlobalDropItemMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGlobalDropItemMsg, object);
	}

	void PlayObject::SetIsFilterGlobalDropItemMsg(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFilterGlobalDropItemMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGlobalDropItemMsg, object, value);
	}

	bool PlayObject::GetIsFilterGlobalCenterMsg(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsFilterGlobalCenterMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGlobalCenterMsg, object);
	}

	void PlayObject::SetIsFilterGlobalCenterMsg(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFilterGlobalCenterMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGlobalCenterMsg, object, value);
	}

	bool PlayObject::GetIsFilterGolbalSendMsg(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsFilterGolbalSendMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGolbalSendMsg, object);
	}

	void PlayObject::SetIsFilterGolbalSendMsg(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFilterGolbalSendMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGolbalSendMsg, object, value);
	}

	bool PlayObject::GetIsPleaseDrink(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsPleaseDrink == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPleaseDrink, object);
	}

	i32 PlayObject::GetIsDrinkWineQuality(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsDrinkWineQuality == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetIsDrinkWineQuality, object);
	}

	void PlayObject::SetIsDrinkWineQuality(struct TPlayObject* object, i32 value)
	{
		if (self == nullptr || self->SetIsDrinkWineQuality == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineQuality, object, value);
	}

	i32 PlayObject::GetIsDrinkWineAlcohol(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsDrinkWineAlcohol == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetIsDrinkWineAlcohol, object);
	}

	void PlayObject::SetIsDrinkWineAlcohol(struct TPlayObject* object, i32 value)
	{
		if (self == nullptr || self->SetIsDrinkWineAlcohol == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineAlcohol, object, value);
	}

	bool PlayObject::GetIsDrinkWineDrunk(struct TPlayObject* object)
	{
		if (self == nullptr || self->GetIsDrinkWineDrunk == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsDrinkWineDrunk, object);
	}

	void PlayObject::SetIsDrinkWineDrunk(struct TPlayObject* object, bool value)
	{
		if (self == nullptr || self->SetIsDrinkWineDrunk == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineDrunk, object, value);
	}

	void PlayObject::MoveToHome(struct TPlayObject* object)
	{
		if (self == nullptr || self->MoveToHome == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MoveToHome, object);
	}

	void PlayObject::MoveRandomToHome(struct TPlayObject* object)
	{
		if (self == nullptr || self->MoveRandomToHome == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MoveRandomToHome, object);
	}

	void PlayObject::SendSocket(struct TPlayObject* object, struct TDefaultMessage* defMsg, const char* sMsg)
	{
		if (self == nullptr || self->SendSocket == nullptr || defMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSocket, object, defMsg, sMsg);
	}

	void PlayObject::SendDefMessage(struct TPlayObject* object, i16 wIdent, i64 nRecog, i16 nParam, i16 nTag, i16 nSeries, const char* sMsg)
	{
		if (self == nullptr || self->SendDefMessage == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDefMessage, object, wIdent, nRecog, nParam, nTag, nSeries, sMsg);
	}

	void PlayObject::SendMoveMsg(struct TPlayObject* object, const char* sMsg, u8 btFColor, u8 btBColor, i16 nY, i32 nMoveCount, i32 nFontSize, i32 nMarqueeTime)
	{
		if (self == nullptr || self->SendMoveMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendMoveMsg, object, sMsg, btFColor, btBColor, nY, nMoveCount, nFontSize, nMarqueeTime);
	}

	void PlayObject::SendCenterMsg(struct TPlayObject* object, const char* sMsg, u8 btFColor, u8 btBColor, i32 nTime)
	{
		if (self == nullptr || self->SendCenterMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCenterMsg, object, sMsg, btFColor, btBColor, nTime);
	}

	bool PlayObject::SendTopBroadCastMsg(struct TPlayObject* object, const char* sMsg, u8 btFColor, u8 btBColor, i32 nTime, i32 msgType)
	{
		if (self == nullptr || self->SendTopBroadCastMsg == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SendTopBroadCastMsg, object, sMsg, btFColor, btBColor, nTime, msgType);
	}

	bool PlayObject::CheckTakeOnItems(struct TPlayObject* object, i32 where, struct TStdItem* stdItem)
	{
		if (self == nullptr || self->CheckTakeOnItems == nullptr || stdItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckTakeOnItems, object, where, stdItem);
	}

	void PlayObject::ProcessUseItemSkill(struct TPlayObject* object, i32 where, struct TStdItem* stdItem, bool isTakeOn)
	{
		if (self == nullptr || self->ProcessUseItemSkill == nullptr || stdItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ProcessUseItemSkill, object, where, stdItem, isTakeOn);
	}

	void PlayObject::SendUseItems(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendUseItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseItems, object);
	}

	void PlayObject::SendAddItem(struct TPlayObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendAddItem == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddItem, object, userItem);
	}

	void PlayObject::SendDelItemList(struct TPlayObject* object, const char* items, i32 itemsCount)
	{
		if (self == nullptr || self->SendDelItemList == nullptr || items == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelItemList, object, items, itemsCount);
	}

	void PlayObject::SendDelItem(struct TPlayObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendDelItem == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelItem, object, userItem);
	}

	void PlayObject::SendUpdateItem(struct TPlayObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendUpdateItem == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUpdateItem, object, userItem);
	}

	void PlayObject::SendItemDuraChange(struct TPlayObject* object, i32 itemWhere, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendItemDuraChange == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendItemDuraChange, object, itemWhere, userItem);
	}

	void PlayObject::SendBagItems(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendBagItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendBagItems, object);
	}

	void PlayObject::SendJewelryBoxItems(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendJewelryBoxItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendJewelryBoxItems, object);
	}

	void PlayObject::SendGodBlessItems(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendGodBlessItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendGodBlessItems, object);
	}

	void PlayObject::SendOpenGodBlessItem(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->SendOpenGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendOpenGodBlessItem, object, index);
	}

	void PlayObject::SendCloseGodBlessItem(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->SendCloseGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCloseGodBlessItem, object, index);
	}

	void PlayObject::SendUseMagics(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendUseMagics == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseMagics, object);
	}

	void PlayObject::SendAddMagic(struct TPlayObject* object, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->SendAddMagic == nullptr || userMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddMagic, object, userMagic);
	}

	void PlayObject::SendDelMagic(struct TPlayObject* object, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->SendDelMagic == nullptr || userMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelMagic, object, userMagic);
	}

	void PlayObject::SendFengHaoItems(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendFengHaoItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendFengHaoItems, object);
	}

	void PlayObject::SendAddFengHaoItem(struct TPlayObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendAddFengHaoItem == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddFengHaoItem, object, userItem);
	}

	void PlayObject::SendDelFengHaoItem(struct TPlayObject* object, i32 index)
	{
		if (self == nullptr || self->SendDelFengHaoItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelFengHaoItem, object, index);
	}

	void PlayObject::SendSocketStatusFail(struct TPlayObject* object)
	{
		if (self == nullptr || self->SendSocketStatusFail == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSocketStatusFail, object);
	}

	void PlayObject::PlayEffect(struct TPlayObject* object, i32 nFileIndex, i32 nImageOffset, i32 nImageCount, i32 nLoopCount, i32 nSpeedTime, u8 btDrawOrder, i32 nOffsetX, i32 nOffsetY)
	{
		if (self == nullptr || self->PlayEffect == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->PlayEffect, object, nFileIndex, nImageOffset, nImageCount, nLoopCount, nSpeedTime, btDrawOrder, nOffsetX, nOffsetY);
	}

	bool PlayObject::IsAutoPlayGame(struct TPlayObject* object)
	{
		if (self == nullptr || self->IsAutoPlayGame == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAutoPlayGame, object);
	}

	bool PlayObject::StartAutoPlayGame(struct TPlayObject* object)
	{
		if (self == nullptr || self->StartAutoPlayGame == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->StartAutoPlayGame, object);
	}

	bool PlayObject::StopAutoPlayGame(struct TPlayObject* object)
	{
		if (self == nullptr || self->StopAutoPlayGame == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->StopAutoPlayGame, object);
	}
}