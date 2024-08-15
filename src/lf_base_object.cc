#include "lf_base_object.h"

namespace LF
{
	BaseObject::BaseObject(struct TBaseObjectFunc* self, struct TBaseObject* object)
		: self(self)
		, object(object)
	{
	}

	BaseObject::~BaseObject()
	{
	}
	bool BaseObject::GetChrName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetChrName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetChrName, object, dest, destLen);
	}

	bool BaseObject::SetChrName(const char* newName)
	{
		if (self == nullptr || self->SetChrName == nullptr || newName == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SetChrName, object, newName);
	}

	void BaseObject::RefShowName()
	{
		if (self == nullptr || self->RefShowName == nullptr) {
			return;
		}
		wrap_call(self->RefShowName, object);
	}

	void BaseObject::RefNameColor()
	{
		if (self == nullptr || self->RefNameColor == nullptr) {
			return;
		}
		wrap_call(self->RefNameColor, object);
	}

	void* BaseObject::GetGender()
	{
		if (self == nullptr || self->GetGender == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetGender, object);
	}

	bool BaseObject::SetGender(void* gender)
	{
		if (self == nullptr || self->SetGender == nullptr || gender == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SetGender, object, gender);
	}

	void* BaseObject::GetJob()
	{
		if (self == nullptr || self->GetJob == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetJob, object);
	}

	bool BaseObject::SetJob(void* job)
	{
		if (self == nullptr || self->SetJob == nullptr || job == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SetJob, object, job);
	}

	void* BaseObject::GetHair()
	{
		if (self == nullptr || self->GetHair == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetHair, object);
	}

	void BaseObject::SetHair(void* hair)
	{
		if (self == nullptr || self->SetHair == nullptr || hair == nullptr) {
			return;
		}
		wrap_call(self->SetHair, object, hair);
	}

	struct TEnvirnoment* BaseObject::GetEnvir()
	{
		if (self == nullptr || self->GetEnvir == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TEnvirnoment*>(self->GetEnvir, object);
	}

	bool BaseObject::GetMapName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetMapName, object, dest, destLen);
	}

	i32 BaseObject::GetCurrX()
	{
		if (self == nullptr || self->GetCurrX == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetCurrX, object);
	}

	i32 BaseObject::GetCurrY()
	{
		if (self == nullptr || self->GetCurrY == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetCurrY, object);
	}

	void* BaseObject::GetDirection()
	{
		if (self == nullptr || self->GetDirection == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetDirection, object);
	}

	bool BaseObject::GetHomeMap(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetHomeMap == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetHomeMap, object, dest, destLen);
	}

	i32 BaseObject::GetHomeX()
	{
		if (self == nullptr || self->GetHomeX == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetHomeX, object);
	}

	i32 BaseObject::GetHomeY()
	{
		if (self == nullptr || self->GetHomeY == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetHomeY, object);
	}

	void* BaseObject::GetPermission()
	{
		if (self == nullptr || self->GetPermission == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetPermission, object);
	}

	void BaseObject::SetPermission(void* value)
	{
		if (self == nullptr || self->SetPermission == nullptr || value == nullptr) {
			return;
		}
		wrap_call(self->SetPermission, object, value);
	}

	bool BaseObject::GetDeath()
	{
		if (self == nullptr || self->GetDeath == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetDeath, object);
	}

	u32 BaseObject::GetDeathTick()
	{
		if (self == nullptr || self->GetDeathTick == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetDeathTick, object);
	}

	bool BaseObject::GetGhost()
	{
		if (self == nullptr || self->GetGhost == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetGhost, object);
	}

	u32 BaseObject::GetGhostTick()
	{
		if (self == nullptr || self->GetGhostTick == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetGhostTick, object);
	}

	void BaseObject::MakeGhost()
	{
		if (self == nullptr || self->MakeGhost == nullptr) {
			return;
		}
		wrap_call(self->MakeGhost, object);
	}

	void BaseObject::ReAlive()
	{
		if (self == nullptr || self->ReAlive == nullptr) {
			return;
		}
		wrap_call(self->ReAlive, object);
	}

	void* BaseObject::GetRaceServer()
	{
		if (self == nullptr || self->GetRaceServer == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetRaceServer, object);
	}

	u16 BaseObject::GetAppr()
	{
		if (self == nullptr || self->GetAppr == nullptr) {
			return 0;
		}
		return wrap_call<u16>(self->GetAppr, object);
	}

	void* BaseObject::GetRaceImg()
	{
		if (self == nullptr || self->GetRaceImg == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetRaceImg, object);
	}

	i32 BaseObject::GetCharStatus()
	{
		if (self == nullptr || self->GetCharStatus == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetCharStatus, object);
	}

	void BaseObject::SetCharStatus(i32 value)
	{
		if (self == nullptr || self->SetCharStatus == nullptr) {
			return;
		}
		wrap_call(self->SetCharStatus, object, value);
	}

	void BaseObject::StatusChanged()
	{
		if (self == nullptr || self->StatusChanged == nullptr) {
			return;
		}
		wrap_call(self->StatusChanged, object);
	}

	i32 BaseObject::GetHungerPoint()
	{
		if (self == nullptr || self->GetHungerPoint == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetHungerPoint, object);
	}

	void BaseObject::SetHungerPoint(i32 value)
	{
		if (self == nullptr || self->SetHungerPoint == nullptr) {
			return;
		}
		wrap_call(self->SetHungerPoint, object, value);
	}

	bool BaseObject::IsNGMonster()
	{
		if (self == nullptr || self->IsNGMonster == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsNGMonster, object);
	}

	bool BaseObject::IsDummyObject()
	{
		if (self == nullptr || self->IsDummyObject == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsDummyObject, object);
	}

	i32 BaseObject::GetViewRange()
	{
		if (self == nullptr || self->GetViewRange == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetViewRange, object);
	}

	void BaseObject::SetViewRange(i32 value)
	{
		if (self == nullptr || self->SetViewRange == nullptr) {
			return;
		}
		wrap_call(self->SetViewRange, object, value);
	}

	bool BaseObject::GetAbility(struct TAbility* dest)
	{
		if (self == nullptr || self->GetAbility == nullptr || dest == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetAbility, object, dest);
	}

	bool BaseObject::GetWAbility(struct TAbility* dest)
	{
		if (self == nullptr || self->GetWAbility == nullptr || dest == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetWAbility, object, dest);
	}

	void BaseObject::SetWAbility(struct TAbility* value)
	{
		if (self == nullptr || self->SetWAbility == nullptr || value == nullptr) {
			return;
		}
		wrap_call(self->SetWAbility, object, value);
	}

	struct TList* BaseObject::GetSlaveList()
	{
		if (self == nullptr || self->GetSlaveList == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TList*>(self->GetSlaveList, object);
	}

	struct TBaseObject* BaseObject::GetMaster()
	{
		if (self == nullptr || self->GetMaster == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetMaster, object);
	}

	struct TBaseObject* BaseObject::GetMasterEx()
	{
		if (self == nullptr || self->GetMasterEx == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetMasterEx, object);
	}

	bool BaseObject::GetSuperManMode()
	{
		if (self == nullptr || self->GetSuperManMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetSuperManMode, object);
	}

	void BaseObject::SetSuperManMode(bool value)
	{
		if (self == nullptr || self->SetSuperManMode == nullptr) {
			return;
		}
		wrap_call(self->SetSuperManMode, object, value);
	}

	bool BaseObject::GetAdminMode()
	{
		if (self == nullptr || self->GetAdminMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetAdminMode, object);
	}

	void BaseObject::SetAdminMode(bool value)
	{
		if (self == nullptr || self->SetAdminMode == nullptr) {
			return;
		}
		wrap_call(self->SetAdminMode, object, value);
	}

	bool BaseObject::GetTransparent()
	{
		if (self == nullptr || self->GetTransparent == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetTransparent, object);
	}

	void BaseObject::SetTransparent(bool value)
	{
		if (self == nullptr || self->SetTransparent == nullptr) {
			return;
		}
		wrap_call(self->SetTransparent, object, value);
	}

	bool BaseObject::GetObMode()
	{
		if (self == nullptr || self->GetObMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetObMode, object);
	}

	void BaseObject::SetObMode(bool value)
	{
		if (self == nullptr || self->SetObMode == nullptr) {
			return;
		}
		wrap_call(self->SetObMode, object, value);
	}

	bool BaseObject::GetStoneMode()
	{
		if (self == nullptr || self->GetStoneMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetStoneMode, object);
	}

	void BaseObject::SetStoneMode(bool value)
	{
		if (self == nullptr || self->SetStoneMode == nullptr) {
			return;
		}
		wrap_call(self->SetStoneMode, object, value);
	}

	bool BaseObject::GetStickMode()
	{
		if (self == nullptr || self->GetStickMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetStickMode, object);
	}

	void BaseObject::SetStickMode(bool value)
	{
		if (self == nullptr || self->SetStickMode == nullptr) {
			return;
		}
		wrap_call(self->SetStickMode, object, value);
	}

	bool BaseObject::GetIsAnimal()
	{
		if (self == nullptr || self->GetIsAnimal == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsAnimal, object);
	}

	void BaseObject::SetIsAnimal(bool value)
	{
		if (self == nullptr || self->SetIsAnimal == nullptr) {
			return;
		}
		wrap_call(self->SetIsAnimal, object, value);
	}

	bool BaseObject::GetIsNoItem()
	{
		if (self == nullptr || self->GetIsNoItem == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsNoItem, object);
	}

	void BaseObject::SetIsNoItem(bool value)
	{
		if (self == nullptr || self->SetIsNoItem == nullptr) {
			return;
		}
		wrap_call(self->SetIsNoItem, object, value);
	}

	bool BaseObject::GetCoolEye()
	{
		if (self == nullptr || self->GetCoolEye == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetCoolEye, object);
	}

	void BaseObject::SetCoolEye(bool value)
	{
		if (self == nullptr || self->SetCoolEye == nullptr) {
			return;
		}
		wrap_call(self->SetCoolEye, object, value);
	}

	u16 BaseObject::GetHitPoint()
	{
		if (self == nullptr || self->GetHitPoint == nullptr) {
			return 0;
		}
		return wrap_call<u16>(self->GetHitPoint, object);
	}

	void BaseObject::SetHitPoint(u16 value)
	{
		if (self == nullptr || self->SetHitPoint == nullptr) {
			return;
		}
		wrap_call(self->SetHitPoint, object, value);
	}

	u16 BaseObject::GetSpeedPoint()
	{
		if (self == nullptr || self->GetSpeedPoint == nullptr) {
			return 0;
		}
		return wrap_call<u16>(self->GetSpeedPoint, object);
	}

	void BaseObject::SetSpeedPoint(u16 value)
	{
		if (self == nullptr || self->SetSpeedPoint == nullptr) {
			return;
		}
		wrap_call(self->SetSpeedPoint, object, value);
	}

	i8 BaseObject::GetHitSpeed()
	{
		if (self == nullptr || self->GetHitSpeed == nullptr) {
			return 0;
		}
		return wrap_call<i8>(self->GetHitSpeed, object);
	}

	void BaseObject::SetHitSpeed(i8 value)
	{
		if (self == nullptr || self->SetHitSpeed == nullptr) {
			return;
		}
		wrap_call(self->SetHitSpeed, object, value);
	}

	i32 BaseObject::GetWalkSpeed()
	{
		if (self == nullptr || self->GetWalkSpeed == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetWalkSpeed, object);
	}

	void BaseObject::SetWalkSpeed(i32 value)
	{
		if (self == nullptr || self->SetWalkSpeed == nullptr) {
			return;
		}
		wrap_call(self->SetWalkSpeed, object, value);
	}

	i8 BaseObject::GetHPRecover()
	{
		if (self == nullptr || self->GetHPRecover == nullptr) {
			return 0;
		}
		return wrap_call<i8>(self->GetHPRecover, object);
	}

	void BaseObject::SetHPRecover(i8 value)
	{
		if (self == nullptr || self->SetHPRecover == nullptr) {
			return;
		}
		wrap_call(self->SetHPRecover, object, value);
	}

	i8 BaseObject::GetMPRecover()
	{
		if (self == nullptr || self->GetMPRecover == nullptr) {
			return 0;
		}
		return wrap_call<i8>(self->GetMPRecover, object);
	}

	void BaseObject::SetMPRecover(i8 value)
	{
		if (self == nullptr || self->SetMPRecover == nullptr) {
			return;
		}
		wrap_call(self->SetMPRecover, object, value);
	}

	i8 BaseObject::GetPoisonRecover()
	{
		if (self == nullptr || self->GetPoisonRecover == nullptr) {
			return 0;
		}
		return wrap_call<i8>(self->GetPoisonRecover, object);
	}

	void BaseObject::SetPoisonRecover(i8 value)
	{
		if (self == nullptr || self->SetPoisonRecover == nullptr) {
			return;
		}
		wrap_call(self->SetPoisonRecover, object, value);
	}

	void* BaseObject::GetAntiPoison()
	{
		if (self == nullptr || self->GetAntiPoison == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetAntiPoison, object);
	}

	void BaseObject::SetAntiPoison(void* value)
	{
		if (self == nullptr || self->SetAntiPoison == nullptr || value == nullptr) {
			return;
		}
		wrap_call(self->SetAntiPoison, object, value);
	}

	i8 BaseObject::GetAntiMagic()
	{
		if (self == nullptr || self->GetAntiMagic == nullptr) {
			return 0;
		}
		return wrap_call<i8>(self->GetAntiMagic, object);
	}

	void BaseObject::SetAntiMagic(i8 value)
	{
		if (self == nullptr || self->SetAntiMagic == nullptr) {
			return;
		}
		wrap_call(self->SetAntiMagic, object, value);
	}

	i32 BaseObject::GetLuck()
	{
		if (self == nullptr || self->GetLuck == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetLuck, object);
	}

	void BaseObject::SetLuck(i32 value)
	{
		if (self == nullptr || self->SetLuck == nullptr) {
			return;
		}
		wrap_call(self->SetLuck, object, value);
	}

	void* BaseObject::GetAttatckMode()
	{
		if (self == nullptr || self->GetAttatckMode == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetAttatckMode, object);
	}

	void BaseObject::SetAttatckMode(void* value)
	{
		if (self == nullptr || self->SetAttatckMode == nullptr || value == nullptr) {
			return;
		}
		wrap_call(self->SetAttatckMode, object, value);
	}

	void* BaseObject::GetNation()
	{
		if (self == nullptr || self->GetNation == nullptr) {
			return nullptr;
		}
		return wrap_call<void*>(self->GetNation, object);
	}

	bool BaseObject::SetNation(void* nation)
	{
		if (self == nullptr || self->SetNation == nullptr || nation == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SetNation, object, nation);
	}

	bool BaseObject::GetNationaName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetNationaName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetNationaName, object, dest, destLen);
	}

	struct TGuild* BaseObject::GetGuild()
	{
		if (self == nullptr || self->GetGuild == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TGuild*>(self->GetGuild, object);
	}

	i32 BaseObject::GetGuildRankNo()
	{
		if (self == nullptr || self->GetGuildRankNo == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetGuildRankNo, object);
	}

	bool BaseObject::GetGuildRankName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetGuildRankName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetGuildRankName, object, dest, destLen);
	}

	bool BaseObject::IsGuildMaster()
	{
		if (self == nullptr || self->IsGuildMaster == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsGuildMaster, object);
	}

	bool BaseObject::GetHideMode()
	{
		if (self == nullptr || self->GetHideMode == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetHideMode, object);
	}

	void BaseObject::SetHideMode(bool value)
	{
		if (self == nullptr || self->SetHideMode == nullptr) {
			return;
		}
		wrap_call(self->SetHideMode, object, value);
	}

	bool BaseObject::GetIsParalysis()
	{
		if (self == nullptr || self->GetIsParalysis == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsParalysis, object);
	}

	void BaseObject::SetIsParalysis(bool value)
	{
		if (self == nullptr || self->SetIsParalysis == nullptr) {
			return;
		}
		wrap_call(self->SetIsParalysis, object, value);
	}

	u32 BaseObject::GetParalysisRate()
	{
		if (self == nullptr || self->GetParalysisRate == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetParalysisRate, object);
	}

	void BaseObject::SetParalysisRate(u32 value)
	{
		if (self == nullptr || self->SetParalysisRate == nullptr) {
			return;
		}
		wrap_call(self->SetParalysisRate, object, value);
	}

	bool BaseObject::GetIsMDParalysis()
	{
		if (self == nullptr || self->GetIsMDParalysis == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsMDParalysis, object);
	}

	void BaseObject::SetIsMDParalysis(bool value)
	{
		if (self == nullptr || self->SetIsMDParalysis == nullptr) {
			return;
		}
		wrap_call(self->SetIsMDParalysis, object, value);
	}

	u32 BaseObject::GetMDParalysisRate()
	{
		if (self == nullptr || self->GetMDParalysisRate == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetMDParalysisRate, object);
	}

	void BaseObject::SetMDParalysisRate(u32 value)
	{
		if (self == nullptr || self->SetMDParalysisRate == nullptr) {
			return;
		}
		wrap_call(self->SetMDParalysisRate, object, value);
	}

	bool BaseObject::GetIsFrozen()
	{
		if (self == nullptr || self->GetIsFrozen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsFrozen, object);
	}

	void BaseObject::SetIsFrozen(bool value)
	{
		if (self == nullptr || self->SetIsFrozen == nullptr) {
			return;
		}
		wrap_call(self->SetIsFrozen, object, value);
	}

	u32 BaseObject::GetFrozenRate()
	{
		if (self == nullptr || self->GetFrozenRate == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetFrozenRate, object);
	}

	void BaseObject::SetFrozenRate(u32 value)
	{
		if (self == nullptr || self->SetFrozenRate == nullptr) {
			return;
		}
		wrap_call(self->SetFrozenRate, object, value);
	}

	bool BaseObject::GetIsCobwebWinding()
	{
		if (self == nullptr || self->GetIsCobwebWinding == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsCobwebWinding, object);
	}

	void BaseObject::SetIsCobwebWinding(bool value)
	{
		if (self == nullptr || self->SetIsCobwebWinding == nullptr) {
			return;
		}
		wrap_call(self->SetIsCobwebWinding, object, value);
	}

	u32 BaseObject::GetCobwebWindingRate()
	{
		if (self == nullptr || self->GetCobwebWindingRate == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetCobwebWindingRate, object);
	}

	void BaseObject::SetCobwebWindingRate(u32 value)
	{
		if (self == nullptr || self->SetCobwebWindingRate == nullptr) {
			return;
		}
		wrap_call(self->SetCobwebWindingRate, object, value);
	}

	u32 BaseObject::GetUnParalysisValue()
	{
		if (self == nullptr || self->GetUnParalysisValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnParalysisValue, object);
	}

	void BaseObject::SetUnParalysisValue(u32 value)
	{
		if (self == nullptr || self->SetUnParalysisValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnParalysisValue, object, value);
	}

	bool BaseObject::GetIsUnParalysis()
	{
		if (self == nullptr || self->GetIsUnParalysis == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnParalysis, object);
	}

	u32 BaseObject::GetUnMagicShieldValue()
	{
		if (self == nullptr || self->GetUnMagicShieldValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnMagicShieldValue, object);
	}

	void BaseObject::SetUnMagicShieldValue(u32 value)
	{
		if (self == nullptr || self->SetUnMagicShieldValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnMagicShieldValue, object, value);
	}

	bool BaseObject::GetIsUnMagicShield()
	{
		if (self == nullptr || self->GetIsUnMagicShield == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnMagicShield, object);
	}

	u32 BaseObject::GetUnRevivalValue()
	{
		if (self == nullptr || self->GetUnRevivalValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnRevivalValue, object);
	}

	void BaseObject::SetUnRevivalValue(u32 value)
	{
		if (self == nullptr || self->SetUnRevivalValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnRevivalValue, object, value);
	}

	bool BaseObject::GetIsUnRevival()
	{
		if (self == nullptr || self->GetIsUnRevival == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnRevival, object);
	}

	u32 BaseObject::GetUnPosionValue()
	{
		if (self == nullptr || self->GetUnPosionValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnPosionValue, object);
	}

	void BaseObject::SetUnPosionValue(u32 value)
	{
		if (self == nullptr || self->SetUnPosionValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnPosionValue, object, value);
	}

	bool BaseObject::GetIsUnPosion()
	{
		if (self == nullptr || self->GetIsUnPosion == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnPosion, object);
	}

	u32 BaseObject::GetUnTammingValue()
	{
		if (self == nullptr || self->GetUnTammingValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnTammingValue, object);
	}

	void BaseObject::SetUnTammingValue(u32 value)
	{
		if (self == nullptr || self->SetUnTammingValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnTammingValue, object, value);
	}

	bool BaseObject::GetIsUnTamming()
	{
		if (self == nullptr || self->GetIsUnTamming == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnTamming, object);
	}

	u32 BaseObject::GetUnFireCrossValue()
	{
		if (self == nullptr || self->GetUnFireCrossValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnFireCrossValue, object);
	}

	void BaseObject::SetUnFireCrossValue(u32 value)
	{
		if (self == nullptr || self->SetUnFireCrossValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnFireCrossValue, object, value);
	}

	bool BaseObject::GetIsUnFireCross()
	{
		if (self == nullptr || self->GetIsUnFireCross == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnFireCross, object);
	}

	u32 BaseObject::GetUnFrozenValue()
	{
		if (self == nullptr || self->GetUnFrozenValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnFrozenValue, object);
	}

	void BaseObject::SetUnFrozenValue(u32 value)
	{
		if (self == nullptr || self->SetUnFrozenValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnFrozenValue, object, value);
	}

	bool BaseObject::GetIsUnFrozen()
	{
		if (self == nullptr || self->GetIsUnFrozen == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnFrozen, object);
	}

	u32 BaseObject::GetUnCobwebWindingValue()
	{
		if (self == nullptr || self->GetUnCobwebWindingValue == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetUnCobwebWindingValue, object);
	}

	void BaseObject::SetUnCobwebWindingValue(u32 value)
	{
		if (self == nullptr || self->SetUnCobwebWindingValue == nullptr) {
			return;
		}
		wrap_call(self->SetUnCobwebWindingValue, object, value);
	}

	bool BaseObject::GetIsUnCobwebWinding()
	{
		if (self == nullptr || self->GetIsUnCobwebWinding == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetIsUnCobwebWinding, object);
	}

	struct TBaseObject* BaseObject::GetTargetCret()
	{
		if (self == nullptr || self->GetTargetCret == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetTargetCret, object);
	}

	void BaseObject::SetTargetCret(struct TBaseObject* targetCret)
	{
		if (self == nullptr || self->SetTargetCret == nullptr) {
			return;
		}
		wrap_call(self->SetTargetCret, object, targetCret);
	}

	void BaseObject::DelTargetCreat()
	{
		if (self == nullptr || self->DelTargetCreat == nullptr) {
			return;
		}
		wrap_call(self->DelTargetCreat, object);
	}

	struct TBaseObject* BaseObject::GetLastHiter()
	{
		if (self == nullptr || self->GetLastHiter == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetLastHiter, object);
	}

	struct TBaseObject* BaseObject::GetExpHitter()
	{
		if (self == nullptr || self->GetExpHitter == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetExpHitter, object);
	}

	struct TBaseObject* BaseObject::GetPoisonHitter()
	{
		if (self == nullptr || self->GetPoisonHitter == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetPoisonHitter, object);
	}

	struct TBaseObject* BaseObject::GetPoseCreate()
	{
		if (self == nullptr || self->GetPoseCreate == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TBaseObject*>(self->GetPoseCreate, object);
	}

	bool BaseObject::IsProperTarget(struct TBaseObject* target)
	{
		if (self == nullptr || self->IsProperTarget == nullptr || target == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsProperTarget, object, target);
	}

	bool BaseObject::IsProperFriend(struct TBaseObject* target)
	{
		if (self == nullptr || self->IsProperFriend == nullptr || target == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsProperFriend, object, target);
	}

	bool BaseObject::TargetInRange(struct TBaseObject* target, i32 nX, i32 nY, i32 nRange)
	{
		if (self == nullptr || self->TargetInRange == nullptr || target == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->TargetInRange, object, target, nX, nY, nRange);
	}

	void BaseObject::SendMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg)
	{
		if (self == nullptr || self->SendMsg == nullptr || target == nullptr || sMsg == nullptr) {
			return;
		}
		wrap_call(self->SendMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg);
	}

	void BaseObject::SendDelayMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg, u32 dwDelay)
	{
		if (self == nullptr || self->SendDelayMsg == nullptr || target == nullptr || sMsg == nullptr) {
			return;
		}
		wrap_call(self->SendDelayMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg, dwDelay);
	}

	void BaseObject::SendRefMsg(i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg, u32 dwDelay)
	{
		if (self == nullptr || self->SendRefMsg == nullptr || sMsg == nullptr) {
			return;
		}
		wrap_call(self->SendRefMsg, object, wIdent, wParam, nParam1, nParam2, nParam3, sMsg, dwDelay);
	}

	void BaseObject::SendUpdateMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg)
	{
		if (self == nullptr || self->SendUpdateMsg == nullptr || target == nullptr || sMsg == nullptr) {
			return;
		}
		wrap_call(self->SendUpdateMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg);
	}

	bool BaseObject::SysMsg(const char* sMsg, void* fColor, void* bColor, i32 msgType)
	{
		if (self == nullptr || self->SysMsg == nullptr || sMsg == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SysMsg, object, sMsg, fColor, bColor, msgType);
	}

	struct TList* BaseObject::GetBagItemList()
	{
		if (self == nullptr || self->GetBagItemList == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TList*>(self->GetBagItemList, object);
	}

	bool BaseObject::IsEnoughBag()
	{
		if (self == nullptr || self->IsEnoughBag == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsEnoughBag, object);
	}

	bool BaseObject::IsEnoughBagEx(i32 addCount)
	{
		if (self == nullptr || self->IsEnoughBagEx == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsEnoughBagEx, object, addCount);
	}

	bool BaseObject::AddItemToBag(struct TUserItem* userItem)
	{
		if (self == nullptr || self->AddItemToBag == nullptr || userItem == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->AddItemToBag, object, userItem);
	}

	bool BaseObject::DelBagItemByIndex(i32 index)
	{
		if (self == nullptr || self->DelBagItemByIndex == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->DelBagItemByIndex, object, index);
	}

	bool BaseObject::DelBagItemByMakeIdx(i32 makeIndex, const char* itemName)
	{
		if (self == nullptr || self->DelBagItemByMakeIdx == nullptr || itemName == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->DelBagItemByMakeIdx, object, makeIndex, itemName);
	}

	bool BaseObject::DelBagItemByUserItem(struct TUserItem* userItem)
	{
		if (self == nullptr || self->DelBagItemByUserItem == nullptr || userItem == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->DelBagItemByUserItem, object, userItem);
	}

	bool BaseObject::IsInSafeZone()
	{
		if (self == nullptr || self->IsInSafeZone == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsInSafeZone, object);
	}

	bool BaseObject::IsPtInSafeZone(struct TEnvirnoment* envir, i32 nX, i32 nY)
	{
		if (self == nullptr || self->IsPtInSafeZone == nullptr || envir == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->IsPtInSafeZone, object, envir, nX, nY);
	}

	void BaseObject::RecalcLevelAbil(bool isSysDef)
	{
		if (self == nullptr || self->RecalcLevelAbil == nullptr) {
			return;
		}
		wrap_call(self->RecalcLevelAbil, object, isSysDef);
	}

	void BaseObject::RecalcAbil()
	{
		if (self == nullptr || self->RecalcAbil == nullptr) {
			return;
		}
		wrap_call(self->RecalcAbil, object);
	}

	i32 BaseObject::RecalcBagWeight()
	{
		if (self == nullptr || self->RecalcBagWeight == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->RecalcBagWeight, object);
	}

	u32 BaseObject::GetLevelExp(i32 nLevel)
	{
		if (self == nullptr || self->GetLevelExp == nullptr) {
			return 0;
		}
		return wrap_call<u32>(self->GetLevelExp, object, nLevel);
	}

	void BaseObject::HasLevelUp(i32 nLevel)
	{
		if (self == nullptr || self->HasLevelUp == nullptr) {
			return;
		}
		wrap_call(self->HasLevelUp, object, nLevel);
	}

	bool BaseObject::TrainSkill(struct TUserMagic* userMagic, i32 nTranPoint, bool isDoCheck)
	{
		if (self == nullptr || self->TrainSkill == nullptr || userMagic == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->TrainSkill, object, userMagic, nTranPoint, isDoCheck);
	}

	bool BaseObject::CheckMagicLevelup(struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->CheckMagicLevelup == nullptr || userMagic == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->CheckMagicLevelup, object, userMagic);
	}

	void BaseObject::MagicTranPointChanged(struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->MagicTranPointChanged == nullptr || userMagic == nullptr) {
			return;
		}
		wrap_call(self->MagicTranPointChanged, object, userMagic);
	}

	void BaseObject::DamageHealth(i32 nDamage, struct TBaseObject* struckFrom)
	{
		if (self == nullptr || self->DamageHealth == nullptr) {
			return;
		}
		wrap_call(self->DamageHealth, object, nDamage, struckFrom);
	}

	void BaseObject::DamageSpell(i32 nSpellPoint)
	{
		if (self == nullptr || self->DamageSpell == nullptr) {
			return;
		}
		wrap_call(self->DamageSpell, object, nSpellPoint);
	}

	void BaseObject::IncHealthSpell(i32 nHP, i32 nMP, bool sendChangedToClient)
	{
		if (self == nullptr || self->IncHealthSpell == nullptr) {
			return;
		}
		wrap_call(self->IncHealthSpell, object, nHP, nMP, sendChangedToClient);
	}

	void BaseObject::HealthSpellChanged(u32 dwDelay)
	{
		if (self == nullptr || self->HealthSpellChanged == nullptr) {
			return;
		}
		wrap_call(self->HealthSpellChanged, object, dwDelay);
	}

	void BaseObject::FeatureChanged()
	{
		if (self == nullptr || self->FeatureChanged == nullptr) {
			return;
		}
		wrap_call(self->FeatureChanged, object);
	}

	void BaseObject::WeightChanged()
	{
		if (self == nullptr || self->WeightChanged == nullptr) {
			return;
		}
		wrap_call(self->WeightChanged, object);
	}

	i32 BaseObject::GetHitStruckDamage(struct TBaseObject* target, i32 nDamage, struct MagicACInfo* magicACInfo, i32 nType)
	{
		if (self == nullptr || self->GetHitStruckDamage == nullptr || target == nullptr || magicACInfo == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetHitStruckDamage, object, target, nDamage, magicACInfo, nType);
	}

	i32 BaseObject::GetMagStruckDamage(struct TBaseObject* target, i32 nDamage)
	{
		if (self == nullptr || self->GetMagStruckDamage == nullptr || target == nullptr) {
			return 0;
		}
		return wrap_call<i32>(self->GetMagStruckDamage, object, target, nDamage);
	}

	bool BaseObject::GetActorIcon(i32 index, struct TActorIcon* actorIcon)
	{
		if (self == nullptr || self->GetActorIcon == nullptr || actorIcon == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->GetActorIcon, object, index, actorIcon);
	}

	bool BaseObject::SetActorIcon(i32 index, struct TActorIcon* actorIcon)
	{
		if (self == nullptr || self->SetActorIcon == nullptr || actorIcon == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->SetActorIcon, object, index, actorIcon);
	}

	void BaseObject::RefUseIcons()
	{
		if (self == nullptr || self->RefUseIcons == nullptr) {
			return;
		}
		wrap_call(self->RefUseIcons, object);
	}

	void BaseObject::RefUseEffects()
	{
		if (self == nullptr || self->RefUseEffects == nullptr) {
			return;
		}
		wrap_call(self->RefUseEffects, object);
	}

	void BaseObject::SpaceMove(const char* sMapName, i32 nX, i32 nY, i32 nInt)
	{
		if (self == nullptr || self->SpaceMove == nullptr || sMapName == nullptr) {
			return;
		}
		wrap_call(self->SpaceMove, object, sMapName, nX, nY, nInt);
	}

	void BaseObject::MapRandomMove(const char* sMapName, i32 nInt)
	{
		if (self == nullptr || self->MapRandomMove == nullptr || sMapName == nullptr) {
			return;
		}
		wrap_call(self->MapRandomMove, object, sMapName, nInt);
	}

	bool BaseObject::CanMove()
	{
		if (self == nullptr || self->CanMove == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->CanMove, object);
	}

	bool BaseObject::CanRun(i32 nCurrX, i32 nCurrY, i32 nX, i32 nY)
	{
		if (self == nullptr || self->CanRun == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->CanRun, object, nCurrX, nCurrY, nX, nY);
	}

	void BaseObject::TurnTo(void* btDir)
	{
		if (self == nullptr || self->TurnTo == nullptr || btDir == nullptr) {
			return;
		}
		wrap_call(self->TurnTo, object, btDir);
	}

	bool BaseObject::WalkTo(void* btDir, bool boFlag)
	{
		if (self == nullptr || self->WalkTo == nullptr || btDir == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->WalkTo, object, btDir, boFlag);
	}

	bool BaseObject::RunTo(void* btDir, bool boFlag)
	{
		if (self == nullptr || self->RunTo == nullptr || btDir == nullptr) {
			return false;
		}
		return wrap_call<bool>(self->RunTo, object, btDir, boFlag);
	}

	struct TList* BaseObject::PluginList()
	{
		if (self == nullptr || self->PluginList == nullptr) {
			return nullptr;
		}
		return wrap_call<struct TList*>(self->PluginList, object);
	}
}