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

	bool PlayObject::GetUserID(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetUserID == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetUserID, object, Dest, DestLen);
	}

	bool PlayObject::GetIPAddr(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetIPAddr == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIPAddr, object, Dest, DestLen);
	}

	bool PlayObject::GetIPLocal(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetIPLocal == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIPLocal, object, Dest, DestLen);
	}

	bool PlayObject::GetMachineID(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetMachineID == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMachineID, object, Dest, DestLen);
	}

	bool PlayObject::GetIsReadyRun()
	{
		if (self == nullptr || self->GetIsReadyRun == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsReadyRun, object);
	}

	bool PlayObject::GetLogonTime(SYSTEMTIME* LogonTime)
	{
		if (self == nullptr || self->GetLogonTime == nullptr || LogonTime == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetLogonTime, object, LogonTime);
	}

	i32 PlayObject::GetSoftVerDate()
	{
		if (self == nullptr || self->GetSoftVerDate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetSoftVerDate, object);
	}

	i32 PlayObject::GetClientType()
	{
		if (self == nullptr || self->GetClientType == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetClientType, object);
	}

	bool PlayObject::IsOldClient()
	{
		if (self == nullptr || self->IsOldClient == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOldClient, object);
	}

	u16 PlayObject::GetScreenWidth()
	{
		if (self == nullptr || self->GetScreenWidth == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u16>(self->GetScreenWidth, object);
	}

	u16 PlayObject::GetScreenHeight()
	{
		if (self == nullptr || self->GetScreenHeight == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u16>(self->GetScreenHeight, object);
	}

	u16 PlayObject::GetClientViewRange()
	{
		if (self == nullptr || self->GetClientViewRange == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u16>(self->GetClientViewRange, object);
	}

	u8 PlayObject::GetRelevel()
	{
		if (self == nullptr || self->GetRelevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetRelevel, object);
	}

	void PlayObject::SetRelevel(u8 Value)
	{
		if (self == nullptr || self->SetRelevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetRelevel, object, Value);
	}

	i32 PlayObject::GetBonusPoint()
	{
		if (self == nullptr || self->GetBonusPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBonusPoint, object);
	}

	void PlayObject::SetBonusPoint(i32 Value)
	{
		if (self == nullptr || self->SetBonusPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetBonusPoint, object, Value);
	}

	void PlayObject::SendAdjustBonus()
	{
		if (self == nullptr || self->SendAdjustBonus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAdjustBonus, object);
	}

	bool PlayObject::GetHeroName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetHeroName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetHeroName, object, Dest, DestLen);
	}

	bool PlayObject::GetDeputyHeroName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetDeputyHeroName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDeputyHeroName, object, Dest, DestLen);
	}

	u8 PlayObject::GetDeputyHeroJob()
	{
		if (self == nullptr || self->GetDeputyHeroJob == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetDeputyHeroJob, object);
	}

	struct THeroObject* PlayObject::GetMyHero()
	{
		if (self == nullptr || self->GetMyHero == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct THeroObject*>(self->GetMyHero, object);
	}

	bool PlayObject::GetFixedHero()
	{
		if (self == nullptr || self->GetFixedHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFixedHero, object);
	}

	void PlayObject::ClientHeroLogOn(bool IsDeputyHero)
	{
		if (self == nullptr || self->ClientHeroLogOn == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ClientHeroLogOn, object, static_cast<BOOL>(IsDeputyHero));
	}

	bool PlayObject::GetStorageHero()
	{
		if (self == nullptr || self->GetStorageHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStorageHero, object);
	}

	bool PlayObject::GetStorageDeputyHero()
	{
		if (self == nullptr || self->GetStorageDeputyHero == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStorageDeputyHero, object);
	}

	bool PlayObject::GetIsStorageOpen(i32 Index)
	{
		if (self == nullptr || self->GetIsStorageOpen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsStorageOpen, object, Index);
	}

	void PlayObject::SetIsStorageOpen(i32 Index, bool Value)
	{
		if (self == nullptr || self->SetIsStorageOpen == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsStorageOpen, object, Index, static_cast<BOOL>(Value));
	}

	u32 PlayObject::GetGold()
	{
		if (self == nullptr || self->GetGold == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGold, object);
	}

	void PlayObject::SetGold(u32 Value)
	{
		if (self == nullptr || self->SetGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGold, object, Value);
	}

	u32 PlayObject::GetGoldMax()
	{
		if (self == nullptr || self->GetGoldMax == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGoldMax, object);
	}

	bool PlayObject::IncGold(u32 Value)
	{
		if (self == nullptr || self->IncGold == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IncGold, object, Value);
	}

	bool PlayObject::DecGold(u32 Value)
	{
		if (self == nullptr || self->DecGold == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DecGold, object, Value);
	}

	void PlayObject::GoldChanged()
	{
		if (self == nullptr || self->GoldChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GoldChanged, object);
	}

	u32 PlayObject::GetGameGold()
	{
		if (self == nullptr || self->GetGameGold == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGameGold, object);
	}

	void PlayObject::SetGameGold(u32 Value)
	{
		if (self == nullptr || self->SetGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGold, object, Value);
	}

	void PlayObject::IncGameGold(u32 Value)
	{
		if (self == nullptr || self->IncGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGold, object, Value);
	}

	void PlayObject::DecGameGold(u32 Value)
	{
		if (self == nullptr || self->DecGameGold == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGold, object, Value);
	}

	void PlayObject::GameGoldChanged()
	{
		if (self == nullptr || self->GameGoldChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GameGoldChanged, object);
	}

	u32 PlayObject::GetGamePoint()
	{
		if (self == nullptr || self->GetGamePoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGamePoint, object);
	}

	void PlayObject::SetGamePoint(u32 Value)
	{
		if (self == nullptr || self->SetGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGamePoint, object, Value);
	}

	void PlayObject::IncGamePoint(u32 Value)
	{
		if (self == nullptr || self->IncGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGamePoint, object, Value);
	}

	void PlayObject::DecGamePoint(u32 Value)
	{
		if (self == nullptr || self->DecGamePoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGamePoint, object, Value);
	}

	u32 PlayObject::GetGameDiamond()
	{
		if (self == nullptr || self->GetGameDiamond == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGameDiamond, object);
	}

	void PlayObject::SetGameDiamond(u32 Value)
	{
		if (self == nullptr || self->SetGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameDiamond, object, Value);
	}

	void PlayObject::IncGameDiamond(u32 Value)
	{
		if (self == nullptr || self->IncGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameDiamond, object, Value);
	}

	void PlayObject::DecGameDiamond(u32 Value)
	{
		if (self == nullptr || self->DecGameDiamond == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameDiamond, object, Value);
	}

	void PlayObject::NewGamePointChanged()
	{
		if (self == nullptr || self->NewGamePointChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->NewGamePointChanged, object);
	}

	u32 PlayObject::GetGameGird()
	{
		if (self == nullptr || self->GetGameGird == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGameGird, object);
	}

	void PlayObject::SetGameGird(u32 Value)
	{
		if (self == nullptr || self->SetGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGird, object, Value);
	}

	void PlayObject::IncGameGird(u32 Value)
	{
		if (self == nullptr || self->IncGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGird, object, Value);
	}

	void PlayObject::DecGameGird(u32 Value)
	{
		if (self == nullptr || self->DecGameGird == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGird, object, Value);
	}

	i32 PlayObject::GetGameGoldEx()
	{
		if (self == nullptr || self->GetGameGoldEx == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGameGoldEx, object);
	}

	void PlayObject::SetGameGoldEx(i32 Value)
	{
		if (self == nullptr || self->SetGameGoldEx == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGoldEx, object, Value);
	}

	i32 PlayObject::GetGameGlory()
	{
		if (self == nullptr || self->GetGameGlory == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGameGlory, object);
	}

	void PlayObject::SetGameGlory(i32 Value)
	{
		if (self == nullptr || self->SetGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGameGlory, object, Value);
	}

	void PlayObject::IncGameGlory(i32 Value)
	{
		if (self == nullptr || self->IncGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncGameGlory, object, Value);
	}

	void PlayObject::DecGameGlory(i32 Value)
	{
		if (self == nullptr || self->DecGameGlory == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecGameGlory, object, Value);
	}

	void PlayObject::GameGloryChanged()
	{
		if (self == nullptr || self->GameGloryChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GameGloryChanged, object);
	}

	i32 PlayObject::GetPayMentPoint()
	{
		if (self == nullptr || self->GetPayMentPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPayMentPoint, object);
	}

	void PlayObject::SetPayMentPoint(i32 Value)
	{
		if (self == nullptr || self->SetPayMentPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPayMentPoint, object, Value);
	}

	i32 PlayObject::GetMemberType()
	{
		if (self == nullptr || self->GetMemberType == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMemberType, object);
	}

	void PlayObject::SetMemberType(i32 Value)
	{
		if (self == nullptr || self->SetMemberType == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMemberType, object, Value);
	}

	i32 PlayObject::GetMemberLevel()
	{
		if (self == nullptr || self->GetMemberLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMemberLevel, object);
	}

	void PlayObject::SetMemberLevel(i32 Value)
	{
		if (self == nullptr || self->SetMemberLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMemberLevel, object, Value);
	}

	u16 PlayObject::GetContribution()
	{
		if (self == nullptr || self->GetContribution == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u16>(self->GetContribution, object);
	}

	void PlayObject::SetContribution(u16 Value)
	{
		if (self == nullptr || self->SetContribution == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetContribution, object, Value);
	}

	void PlayObject::IncExp(u32 Value)
	{
		if (self == nullptr || self->IncExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExp, object, Value);
	}

	void PlayObject::SendExpChanged()
	{
		if (self == nullptr || self->SendExpChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendExpChanged, object);
	}

	void PlayObject::IncExpNG(u32 Value)
	{
		if (self == nullptr || self->IncExpNG == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExpNG, object, Value);
	}

	void PlayObject::SendExpNGChanged()
	{
		if (self == nullptr || self->SendExpNGChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendExpNGChanged, object);
	}

	void PlayObject::IncBeadExp(u32 Value, bool IsFromNPC)
	{
		if (self == nullptr || self->IncBeadExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncBeadExp, object, Value, static_cast<BOOL>(IsFromNPC));
	}

	i32 PlayObject::GetVarP(i32 Index)
	{
		if (self == nullptr || self->GetVarP == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarP, object, Index);
	}

	void PlayObject::SetVarP(i32 Index, i32 Value)
	{
		if (self == nullptr || self->SetVarP == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarP, object, Index, Value);
	}

	i32 PlayObject::GetVarM(i32 Index)
	{
		if (self == nullptr || self->GetVarM == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarM, object, Index);
	}

	void PlayObject::SetVarM(i32 Index, i32 Value)
	{
		if (self == nullptr || self->SetVarM == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarM, object, Index, Value);
	}

	i32 PlayObject::GetVarD(i32 Index)
	{
		if (self == nullptr || self->GetVarD == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarD, object, Index);
	}

	void PlayObject::SetVarD(i32 Index, i32 Value)
	{
		if (self == nullptr || self->SetVarD == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarD, object, Index, Value);
	}

	i32 PlayObject::GetVarU(i32 Index)
	{
		if (self == nullptr || self->GetVarU == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarU, object, Index);
	}

	void PlayObject::SetVarU(i32 Index, i32 Value)
	{
		if (self == nullptr || self->SetVarU == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarU, object, Index, Value);
	}

	bool PlayObject::GetVarT(i32 Index, char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetVarT == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVarT, object, Index, Dest, DestLen);
	}

	void PlayObject::SetVarT(i32 Index, const char* Value)
	{
		if (self == nullptr || self->SetVarT == nullptr || Value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarT, object, Index, Value);
	}

	i32 PlayObject::GetVarN(i32 Index)
	{
		if (self == nullptr || self->GetVarN == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetVarN, object, Index);
	}

	void PlayObject::SetVarN(i32 Index, i32 Value)
	{
		if (self == nullptr || self->SetVarN == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarN, object, Index, Value);
	}

	bool PlayObject::GetVarS(i32 Index, char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetVarS == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVarS, object, Index, Dest, DestLen);
	}

	void PlayObject::SetVarS(i32 Index, const char* Value)
	{
		if (self == nullptr || self->SetVarS == nullptr || Value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVarS, object, Index, Value);
	}

	struct TList* PlayObject::GetDynamicVarList()
	{
		if (self == nullptr || self->GetDynamicVarList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetDynamicVarList, object);
	}

	i32 PlayObject::GetQuestFlagStatus(i32 nFlag)
	{
		if (self == nullptr || self->GetQuestFlagStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetQuestFlagStatus, object, nFlag);
	}

	void PlayObject::SetQuestFlagStatus(i32 nFlag, i32 Value)
	{
		if (self == nullptr || self->SetQuestFlagStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetQuestFlagStatus, object, nFlag, Value);
	}

	bool PlayObject::IsOffLine()
	{
		if (self == nullptr || self->IsOffLine == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOffLine, object);
	}

	bool PlayObject::IsMaster()
	{
		if (self == nullptr || self->IsMaster == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMaster, object);
	}

	bool PlayObject::GetMasterName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetMasterName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMasterName, object, Dest, DestLen);
	}

	struct TPlayObject* PlayObject::GetMasterHuman()
	{
		if (self == nullptr || self->GetMasterHuman == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetMasterHuman, object);
	}

	i32 PlayObject::GetApprenticeNO()
	{
		if (self == nullptr || self->GetApprenticeNO == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetApprenticeNO, object);
	}

	struct TList* PlayObject::GetOnlineApprenticeList()
	{
		if (self == nullptr || self->GetOnlineApprenticeList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetOnlineApprenticeList, object);
	}

	struct TList* PlayObject::GetAllApprenticeList()
	{
		if (self == nullptr || self->GetAllApprenticeList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetAllApprenticeList, object);
	}

	bool PlayObject::GetDearName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetDearName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDearName, object, Dest, DestLen);
	}

	struct TPlayObject* PlayObject::GetDearHuman()
	{
		if (self == nullptr || self->GetDearHuman == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetDearHuman, object);
	}

	u8 PlayObject::GetMarryCount()
	{
		if (self == nullptr || self->GetMarryCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetMarryCount, object);
	}

	struct TPlayObject* PlayObject::GetGroupOwner()
	{
		if (self == nullptr || self->GetGroupOwner == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetGroupOwner, object);
	}

	struct TStringList* PlayObject::GetGroupMembers()
	{
		if (self == nullptr || self->GetGroupMembers == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TStringList*>(self->GetGroupMembers, object);
	}

	bool PlayObject::GetIsLockLogin()
	{
		if (self == nullptr || self->GetIsLockLogin == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsLockLogin, object);
	}

	void PlayObject::SetIsLockLogin(bool Value)
	{
		if (self == nullptr || self->SetIsLockLogin == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsLockLogin, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsAllowGroup()
	{
		if (self == nullptr || self->GetIsAllowGroup == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGroup, object);
	}

	void PlayObject::SetIsAllowGroup(bool Value)
	{
		if (self == nullptr || self->SetIsAllowGroup == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGroup, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsAllowGroupReCall()
	{
		if (self == nullptr || self->GetIsAllowGroupReCall == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGroupReCall, object);
	}

	void PlayObject::SetIsAllowGroupReCall(bool Value)
	{
		if (self == nullptr || self->SetIsAllowGroupReCall == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGroupReCall, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsAllowGuildReCall()
	{
		if (self == nullptr || self->GetIsAllowGuildReCall == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowGuildReCall, object);
	}

	void PlayObject::SetIsAllowGuildReCall(bool Value)
	{
		if (self == nullptr || self->SetIsAllowGuildReCall == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowGuildReCall, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsAllowTrading()
	{
		if (self == nullptr || self->GetIsAllowTrading == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAllowTrading, object);
	}

	void PlayObject::SetIsAllowTrading(bool Value)
	{
		if (self == nullptr || self->SetIsAllowTrading == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAllowTrading, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsDisableInviteHorseRiding()
	{
		if (self == nullptr || self->GetIsDisableInviteHorseRiding == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsDisableInviteHorseRiding, object);
	}

	void PlayObject::SetIsDisableInviteHorseRiding(bool Value)
	{
		if (self == nullptr || self->SetIsDisableInviteHorseRiding == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDisableInviteHorseRiding, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsGameGoldTrading()
	{
		if (self == nullptr || self->GetIsGameGoldTrading == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsGameGoldTrading, object);
	}

	void PlayObject::SetIsGameGoldTrading(bool Value)
	{
		if (self == nullptr || self->SetIsGameGoldTrading == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsGameGoldTrading, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsNewServer()
	{
		if (self == nullptr || self->GetIsNewServer == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNewServer, object);
	}

	bool PlayObject::GetIsFilterGlobalDropItemMsg()
	{
		if (self == nullptr || self->GetIsFilterGlobalDropItemMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGlobalDropItemMsg, object);
	}

	void PlayObject::SetIsFilterGlobalDropItemMsg(bool Value)
	{
		if (self == nullptr || self->SetIsFilterGlobalDropItemMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGlobalDropItemMsg, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsFilterGlobalCenterMsg()
	{
		if (self == nullptr || self->GetIsFilterGlobalCenterMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGlobalCenterMsg, object);
	}

	void PlayObject::SetIsFilterGlobalCenterMsg(bool Value)
	{
		if (self == nullptr || self->SetIsFilterGlobalCenterMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGlobalCenterMsg, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsFilterGolbalSendMsg()
	{
		if (self == nullptr || self->GetIsFilterGolbalSendMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFilterGolbalSendMsg, object);
	}

	void PlayObject::SetIsFilterGolbalSendMsg(bool Value)
	{
		if (self == nullptr || self->SetIsFilterGolbalSendMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFilterGolbalSendMsg, object, static_cast<BOOL>(Value));
	}

	bool PlayObject::GetIsPleaseDrink()
	{
		if (self == nullptr || self->GetIsPleaseDrink == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPleaseDrink, object);
	}

	i32 PlayObject::GetIsDrinkWineQuality()
	{
		if (self == nullptr || self->GetIsDrinkWineQuality == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetIsDrinkWineQuality, object);
	}

	void PlayObject::SetIsDrinkWineQuality(i32 Value)
	{
		if (self == nullptr || self->SetIsDrinkWineQuality == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineQuality, object, Value);
	}

	i32 PlayObject::GetIsDrinkWineAlcohol()
	{
		if (self == nullptr || self->GetIsDrinkWineAlcohol == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetIsDrinkWineAlcohol, object);
	}

	void PlayObject::SetIsDrinkWineAlcohol(i32 Value)
	{
		if (self == nullptr || self->SetIsDrinkWineAlcohol == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineAlcohol, object, Value);
	}

	bool PlayObject::GetIsDrinkWineDrunk()
	{
		if (self == nullptr || self->GetIsDrinkWineDrunk == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsDrinkWineDrunk, object);
	}

	void PlayObject::SetIsDrinkWineDrunk(bool Value)
	{
		if (self == nullptr || self->SetIsDrinkWineDrunk == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsDrinkWineDrunk, object, static_cast<BOOL>(Value));
	}

	void PlayObject::MoveToHome()
	{
		if (self == nullptr || self->MoveToHome == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MoveToHome, object);
	}

	void PlayObject::MoveRandomToHome()
	{
		if (self == nullptr || self->MoveRandomToHome == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MoveRandomToHome, object);
	}

	void PlayObject::SendSocket(struct TDefaultMessage* DefMsg, const char* sMsg)
	{
		if (self == nullptr || self->SendSocket == nullptr || DefMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSocket, object, DefMsg, sMsg);
	}

	void PlayObject::SendDefMessage(u16 wIdent, i64 nRecog, u16 nParam, u16 nTag, u16 nSeries, const char* sMsg)
	{
		if (self == nullptr || self->SendDefMessage == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDefMessage, object, wIdent, nRecog, nParam, nTag, nSeries, sMsg);
	}

	void PlayObject::SendMoveMsg(const char* sMsg, u8 btFColor, u8 btBColor, u16 nY, i32 nMoveCount, i32 nFontSize, i32 nMarqueeTime)
	{
		if (self == nullptr || self->SendMoveMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendMoveMsg, object, sMsg, btFColor, btBColor, nY, nMoveCount, nFontSize, nMarqueeTime);
	}

	void PlayObject::SendCenterMsg(const char* sMsg, u8 btFColor, u8 btBColor, i32 nTime)
	{
		if (self == nullptr || self->SendCenterMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCenterMsg, object, sMsg, btFColor, btBColor, nTime);
	}

	bool PlayObject::SendTopBroadCastMsg(const char* sMsg, u8 btFColor, u8 btBColor, i32 nTime, i32 MsgType)
	{
		if (self == nullptr || self->SendTopBroadCastMsg == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SendTopBroadCastMsg, object, sMsg, btFColor, btBColor, nTime, MsgType);
	}


	bool PlayObject::CheckTakeOnItems(i32 Where, struct TStdItem* StdItem)
	{
		if (self == nullptr || self->CheckTakeOnItems == nullptr || StdItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckTakeOnItems, object, Where, StdItem);
	}

	void PlayObject::ProcessUseItemSkill(i32 Where, struct TStdItem* StdItem, bool IsTakeOn)
	{
		if (self == nullptr || self->ProcessUseItemSkill == nullptr || StdItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ProcessUseItemSkill, object, Where, StdItem, static_cast<BOOL>(IsTakeOn));
	}

	void PlayObject::SendUseItems()
	{
		if (self == nullptr || self->SendUseItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseItems, object);
	}

	void PlayObject::SendAddItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendAddItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddItem, object, UserItem);
	}

	void PlayObject::SendDelItemList(const char* Items, i32 ItemsCount)
	{
		if (self == nullptr || self->SendDelItemList == nullptr || Items == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelItemList, object, Items, ItemsCount);
	}

	void PlayObject::SendDelItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendDelItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelItem, object, UserItem);
	}

	void PlayObject::SendUpdateItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendUpdateItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUpdateItem, object, UserItem);
	}

	void PlayObject::SendItemDuraChange(i32 ItemWhere, struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendItemDuraChange == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendItemDuraChange, object, ItemWhere, UserItem);
	}

	void PlayObject::SendBagItems()
	{
		if (self == nullptr || self->SendBagItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendBagItems, object);
	}

	void PlayObject::SendJewelryBoxItems()
	{
		if (self == nullptr || self->SendJewelryBoxItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendJewelryBoxItems, object);
	}

	void PlayObject::SendGodBlessItems()
	{
		if (self == nullptr || self->SendGodBlessItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendGodBlessItems, object);
	}

	void PlayObject::SendOpenGodBlessItem(i32 Index)
	{
		if (self == nullptr || self->SendOpenGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendOpenGodBlessItem, object, Index);
	}

	void PlayObject::SendCloseGodBlessItem(i32 Index)
	{
		if (self == nullptr || self->SendCloseGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCloseGodBlessItem, object, Index);
	}

	void PlayObject::SendUseMagics()
	{
		if (self == nullptr || self->SendUseMagics == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseMagics, object);
	}

	void PlayObject::SendAddMagic(struct TUserMagic* UserMagic)
	{
		if (self == nullptr || self->SendAddMagic == nullptr || UserMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddMagic, object, UserMagic);
	}

	void PlayObject::SendDelMagic(struct TUserMagic* UserMagic)
	{
		if (self == nullptr || self->SendDelMagic == nullptr || UserMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelMagic, object, UserMagic);
	}

	void PlayObject::SendFengHaoItems()
	{
		if (self == nullptr || self->SendFengHaoItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendFengHaoItems, object);
	}

	void PlayObject::SendAddFengHaoItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendAddFengHaoItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddFengHaoItem, object, UserItem);
	}

	void PlayObject::SendDelFengHaoItem(i32 Index)
	{
		if (self == nullptr || self->SendDelFengHaoItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelFengHaoItem, object, Index);
	}

	void PlayObject::SendSocketStatusFail()
	{
		if (self == nullptr || self->SendSocketStatusFail == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSocketStatusFail, object);
	}

	void PlayObject::PlayEffect(i32 nFileIndex, i32 nImageOffset, i32 nImageCount, i32 nLoopCount, i32 nSpeedTime, u8 btDrawOrder, i32 nOffsetX, i32 nOffsetY)
	{
		if (self == nullptr || self->PlayEffect == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->PlayEffect, object, nFileIndex, nImageOffset, nImageCount, nLoopCount, nSpeedTime, btDrawOrder, nOffsetX, nOffsetY);
	}

	bool PlayObject::IsAutoPlayGame()
	{
		if (self == nullptr || self->IsAutoPlayGame == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAutoPlayGame, object);
	}

	bool PlayObject::StartAutoPlayGame()
	{
		if (self == nullptr || self->StartAutoPlayGame == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->StartAutoPlayGame, object);
	}

	bool PlayObject::StopAutoPlayGame()
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