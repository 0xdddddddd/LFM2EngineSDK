#include "lf_base_object.h"

namespace LF
{
	BaseObject::BaseObject(struct TBaseObjectFunc* self)
		: self(self)
	{
	}

	BaseObject::~BaseObject()
	{
	}

	bool BaseObject::GetChrName(struct TBaseObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetChrName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetChrName, object, dest, destLen);
	}

	bool BaseObject::SetChrName(struct TBaseObject* object, const char* newName)
	{
		if (self == nullptr || self->SetChrName == nullptr || newName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetChrName, object, newName);
	}

	void BaseObject::RefShowName(struct TBaseObject* object)
	{
		if (self == nullptr || self->RefShowName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefShowName, object);
	}

	void BaseObject::RefNameColor(struct TBaseObject* object)
	{
		if (self == nullptr || self->RefNameColor == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefNameColor, object);
	}

	u8 BaseObject::GetGender(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetGender == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetGender, object);
	}

	bool BaseObject::SetGender(struct TBaseObject* object, u8 gender)
	{
		if (self == nullptr || self->SetGender == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetGender, object, gender);
	}

	u8 BaseObject::GetJob(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetJob == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetJob, object);
	}

	bool BaseObject::SetJob(struct TBaseObject* object, u8 job)
	{
		if (self == nullptr || self->SetJob == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetJob, object, job);
	}

	u8 BaseObject::GetHair(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHair == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetHair, object);
	}

	void BaseObject::SetHair(struct TBaseObject* object, u8 hair)
	{
		if (self == nullptr || self->SetHair == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHair, object, hair);
	}

	struct TEnvirnoment* BaseObject::GetEnvir(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetEnvir == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TEnvirnoment*>(self->GetEnvir, object);
	}

	bool BaseObject::GetMapName(struct TBaseObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapName, object, dest, destLen);
	}

	i32 BaseObject::GetCurrX(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetCurrX == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetCurrX, object);
	}

	i32 BaseObject::GetCurrY(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetCurrY == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetCurrY, object);
	}

	u8 BaseObject::GetDirection(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetDirection == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetDirection, object);
	}

	bool BaseObject::GetHomeMap(struct TBaseObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetHomeMap == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetHomeMap, object, dest, destLen);
	}

	i32 BaseObject::GetHomeX(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHomeX == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHomeX, object);
	}

	i32 BaseObject::GetHomeY(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHomeY == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHomeY, object);
	}

	u8 BaseObject::GetPermission(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetPermission == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetPermission, object);
	}

	void BaseObject::SetPermission(struct TBaseObject* object, u8 value)
	{
		if (self == nullptr || self->SetPermission == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPermission, object, value);
	}

	bool BaseObject::GetDeath(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetDeath == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDeath, object);
	}

	u32 BaseObject::GetDeathTick(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetDeathTick == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetDeathTick, object);
	}

	bool BaseObject::GetGhost(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetGhost == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGhost, object);
	}

	u32 BaseObject::GetGhostTick(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetGhostTick == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetGhostTick, object);
	}

	void BaseObject::MakeGhost(struct TBaseObject* object)
	{
		if (self == nullptr || self->MakeGhost == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MakeGhost, object);
	}

	void BaseObject::ReAlive(struct TBaseObject* object)
	{
		if (self == nullptr || self->ReAlive == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ReAlive, object);
	}

	u8 BaseObject::GetRaceServer(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetRaceServer == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetRaceServer, object);
	}

	i16 BaseObject::GetAppr(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetAppr == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetAppr, object);
	}

	u8 BaseObject::GetRaceImg(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetRaceImg == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetRaceImg, object);
	}

	i32 BaseObject::GetCharStatus(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetCharStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetCharStatus, object);
	}

	void BaseObject::SetCharStatus(struct TBaseObject* object, i32 value)
	{
		if (self == nullptr || self->SetCharStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetCharStatus, object, value);
	}

	void BaseObject::StatusChanged(struct TBaseObject* object)
	{
		if (self == nullptr || self->StatusChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->StatusChanged, object);
	}

	i32 BaseObject::GetHungerPoint(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHungerPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHungerPoint, object);
	}

	void BaseObject::SetHungerPoint(struct TBaseObject* object, i32 value)
	{
		if (self == nullptr || self->SetHungerPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHungerPoint, object, value);
	}

	bool BaseObject::IsNGMonster(struct TBaseObject* object)
	{
		if (self == nullptr || self->IsNGMonster == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsNGMonster, object);
	}

	bool BaseObject::IsDummyObject(struct TBaseObject* object)
	{
		if (self == nullptr || self->IsDummyObject == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsDummyObject, object);
	}

	i32 BaseObject::GetViewRange(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetViewRange == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetViewRange, object);
	}

	void BaseObject::SetViewRange(struct TBaseObject* object, i32 value)
	{
		if (self == nullptr || self->SetViewRange == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetViewRange, object, value);
	}

	bool BaseObject::GetAbility(struct TBaseObject* object, struct TAbility* dest)
	{
		if (self == nullptr || self->GetAbility == nullptr || dest == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAbility, object, dest);
	}

	bool BaseObject::GetWAbility(struct TBaseObject* object, struct TAbility* dest)
	{
		if (self == nullptr || self->GetWAbility == nullptr || dest == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetWAbility, object, dest);
	}

	void BaseObject::SetWAbility(struct TBaseObject* object, struct TAbility* value)
	{
		if (self == nullptr || self->SetWAbility == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetWAbility, object, value);
	}

	struct TList* BaseObject::GetSlaveList(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetSlaveList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetSlaveList, object);
	}

	struct TBaseObject* BaseObject::GetMaster(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetMaster == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetMaster, object);
	}

	struct TBaseObject* BaseObject::GetMasterEx(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetMasterEx == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetMasterEx, object);
	}

	bool BaseObject::GetSuperManMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetSuperManMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetSuperManMode, object);
	}

	void BaseObject::SetSuperManMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetSuperManMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSuperManMode, object, value);
	}

	bool BaseObject::GetAdminMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetAdminMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAdminMode, object);
	}

	void BaseObject::SetAdminMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetAdminMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAdminMode, object, value);
	}

	bool BaseObject::GetTransparent(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetTransparent == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetTransparent, object);
	}

	void BaseObject::SetTransparent(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetTransparent == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetTransparent, object, value);
	}

	bool BaseObject::GetObMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetObMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetObMode, object);
	}

	void BaseObject::SetObMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetObMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetObMode, object, value);
	}

	bool BaseObject::GetStoneMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetStoneMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStoneMode, object);
	}

	void BaseObject::SetStoneMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetStoneMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetStoneMode, object, value);
	}

	bool BaseObject::GetStickMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetStickMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStickMode, object);
	}

	void BaseObject::SetStickMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetStickMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetStickMode, object, value);
	}

	bool BaseObject::GetIsAnimal(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsAnimal == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAnimal, object);
	}

	void BaseObject::SetIsAnimal(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAnimal == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAnimal, object, value);
	}

	bool BaseObject::GetIsNoItem(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsNoItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNoItem, object);
	}

	void BaseObject::SetIsNoItem(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsNoItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsNoItem, object, value);
	}

	bool BaseObject::GetCoolEye(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetCoolEye == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetCoolEye, object);
	}

	void BaseObject::SetCoolEye(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetCoolEye == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetCoolEye, object, value);
	}

	i16 BaseObject::GetHitPoint(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHitPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetHitPoint, object);
	}

	void BaseObject::SetHitPoint(struct TBaseObject* object, i16 value)
	{
		if (self == nullptr || self->SetHitPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHitPoint, object, value);
	}

	i16 BaseObject::GetSpeedPoint(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetSpeedPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetSpeedPoint, object);
	}

	void BaseObject::SetSpeedPoint(struct TBaseObject* object, i16 value)
	{
		if (self == nullptr || self->SetSpeedPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSpeedPoint, object, value);
	}

	i8 BaseObject::GetHitSpeed(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHitSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i8>(self->GetHitSpeed, object);
	}

	void BaseObject::SetHitSpeed(struct TBaseObject* object, i8 value)
	{
		if (self == nullptr || self->SetHitSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHitSpeed, object, value);
	}

	i32 BaseObject::GetWalkSpeed(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetWalkSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetWalkSpeed, object);
	}

	void BaseObject::SetWalkSpeed(struct TBaseObject* object, i32 value)
	{
		if (self == nullptr || self->SetWalkSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetWalkSpeed, object, value);
	}

	i8 BaseObject::GetHPRecover(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHPRecover == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i8>(self->GetHPRecover, object);
	}

	void BaseObject::SetHPRecover(struct TBaseObject* object, i8 value)
	{
		if (self == nullptr || self->SetHPRecover == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHPRecover, object, value);
	}

	i8 BaseObject::GetMPRecover(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetMPRecover == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i8>(self->GetMPRecover, object);
	}

	void BaseObject::SetMPRecover(struct TBaseObject* object, i8 value)
	{
		if (self == nullptr || self->SetMPRecover == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMPRecover, object, value);
	}

	i8 BaseObject::GetPoisonRecover(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetPoisonRecover == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i8>(self->GetPoisonRecover, object);
	}

	void BaseObject::SetPoisonRecover(struct TBaseObject* object, i8 value)
	{
		if (self == nullptr || self->SetPoisonRecover == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPoisonRecover, object, value);
	}

	u8 BaseObject::GetAntiPoison(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetAntiPoison == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetAntiPoison, object);
	}

	void BaseObject::SetAntiPoison(struct TBaseObject* object, u8 value)
	{
		if (self == nullptr || self->SetAntiPoison == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAntiPoison, object, value);
	}

	i8 BaseObject::GetAntiMagic(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetAntiMagic == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i8>(self->GetAntiMagic, object);
	}

	void BaseObject::SetAntiMagic(struct TBaseObject* object, i8 value)
	{
		if (self == nullptr || self->SetAntiMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAntiMagic, object, value);
	}

	i32 BaseObject::GetLuck(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetLuck == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetLuck, object);
	}

	void BaseObject::SetLuck(struct TBaseObject* object, i32 value)
	{
		if (self == nullptr || self->SetLuck == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetLuck, object, value);
	}

	u8 BaseObject::GetAttatckMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetAttatckMode == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetAttatckMode, object);
	}

	void BaseObject::SetAttatckMode(struct TBaseObject* object, u8 value)
	{
		if (self == nullptr || self->SetAttatckMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAttatckMode, object, value);
	}

	u8 BaseObject::GetNation(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetNation == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetNation, object);
	}

	bool BaseObject::SetNation(struct TBaseObject* object, u8 nation)
	{
		if (self == nullptr || self->SetNation == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetNation, object, nation);
	}

	bool BaseObject::GetNationaName(struct TBaseObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetNationaName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetNationaName, object, dest, destLen);
	}

	struct TGuild* BaseObject::GetGuild(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetGuild == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TGuild*>(self->GetGuild, object);
	}

	i32 BaseObject::GetGuildRankNo(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetGuildRankNo == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGuildRankNo, object);
	}

	bool BaseObject::GetGuildRankName(struct TBaseObject* object, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetGuildRankName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGuildRankName, object, dest, destLen);
	}

	bool BaseObject::IsGuildMaster(struct TBaseObject* object)
	{
		if (self == nullptr || self->IsGuildMaster == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsGuildMaster, object);
	}

	bool BaseObject::GetHideMode(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetHideMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetHideMode, object);
	}

	void BaseObject::SetHideMode(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetHideMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetHideMode, object, value);
	}

	bool BaseObject::GetIsParalysis(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsParalysis == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsParalysis, object);
	}

	void BaseObject::SetIsParalysis(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsParalysis == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsParalysis, object, value);
	}

	u32 BaseObject::GetParalysisRate(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetParalysisRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetParalysisRate, object);
	}

	void BaseObject::SetParalysisRate(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetParalysisRate == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetParalysisRate, object, value);
	}

	bool BaseObject::GetIsMDParalysis(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsMDParalysis == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMDParalysis, object);
	}

	void BaseObject::SetIsMDParalysis(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsMDParalysis == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMDParalysis, object, value);
	}

	u32 BaseObject::GetMDParalysisRate(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetMDParalysisRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetMDParalysisRate, object);
	}

	void BaseObject::SetMDParalysisRate(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetMDParalysisRate == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMDParalysisRate, object, value);
	}

	bool BaseObject::GetIsFrozen(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsFrozen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFrozen, object);
	}

	void BaseObject::SetIsFrozen(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFrozen == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFrozen, object, value);
	}

	u32 BaseObject::GetFrozenRate(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetFrozenRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetFrozenRate, object);
	}

	void BaseObject::SetFrozenRate(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetFrozenRate == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetFrozenRate, object, value);
	}

	bool BaseObject::GetIsCobwebWinding(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsCobwebWinding == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsCobwebWinding, object);
	}

	void BaseObject::SetIsCobwebWinding(struct TBaseObject* object, bool value)
	{
		if (self == nullptr || self->SetIsCobwebWinding == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsCobwebWinding, object, value);
	}

	u32 BaseObject::GetCobwebWindingRate(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetCobwebWindingRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetCobwebWindingRate, object);
	}

	void BaseObject::SetCobwebWindingRate(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetCobwebWindingRate == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetCobwebWindingRate, object, value);
	}

	u32 BaseObject::GetUnParalysisValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnParalysisValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnParalysisValue, object);
	}

	void BaseObject::SetUnParalysisValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnParalysisValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnParalysisValue, object, value);
	}

	bool BaseObject::GetIsUnParalysis(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnParalysis == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnParalysis, object);
	}

	u32 BaseObject::GetUnMagicShieldValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnMagicShieldValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnMagicShieldValue, object);
	}

	void BaseObject::SetUnMagicShieldValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnMagicShieldValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnMagicShieldValue, object, value);
	}

	bool BaseObject::GetIsUnMagicShield(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnMagicShield == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnMagicShield, object);
	}

	u32 BaseObject::GetUnRevivalValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnRevivalValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnRevivalValue, object);
	}

	void BaseObject::SetUnRevivalValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnRevivalValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnRevivalValue, object, value);
	}

	bool BaseObject::GetIsUnRevival(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnRevival == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnRevival, object);
	}

	u32 BaseObject::GetUnPosionValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnPosionValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnPosionValue, object);
	}

	void BaseObject::SetUnPosionValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnPosionValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnPosionValue, object, value);
	}

	bool BaseObject::GetIsUnPosion(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnPosion == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnPosion, object);
	}

	u32 BaseObject::GetUnTammingValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnTammingValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnTammingValue, object);
	}

	void BaseObject::SetUnTammingValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnTammingValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnTammingValue, object, value);
	}

	bool BaseObject::GetIsUnTamming(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnTamming == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnTamming, object);
	}

	u32 BaseObject::GetUnFireCrossValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnFireCrossValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnFireCrossValue, object);
	}

	void BaseObject::SetUnFireCrossValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnFireCrossValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnFireCrossValue, object, value);
	}

	bool BaseObject::GetIsUnFireCross(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnFireCross == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnFireCross, object);
	}

	u32 BaseObject::GetUnFrozenValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnFrozenValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnFrozenValue, object);
	}

	void BaseObject::SetUnFrozenValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnFrozenValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnFrozenValue, object, value);
	}

	bool BaseObject::GetIsUnFrozen(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnFrozen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnFrozen, object);
	}

	u32 BaseObject::GetUnCobwebWindingValue(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetUnCobwebWindingValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetUnCobwebWindingValue, object);
	}

	void BaseObject::SetUnCobwebWindingValue(struct TBaseObject* object, u32 value)
	{
		if (self == nullptr || self->SetUnCobwebWindingValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetUnCobwebWindingValue, object, value);
	}

	bool BaseObject::GetIsUnCobwebWinding(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetIsUnCobwebWinding == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsUnCobwebWinding, object);
	}

	struct TBaseObject* BaseObject::GetTargetCret(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetTargetCret == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetTargetCret, object);
	}

	void BaseObject::SetTargetCret(struct TBaseObject* object, struct TBaseObject* targetCret)
	{
		if (self == nullptr || self->SetTargetCret == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetTargetCret, object, targetCret);
	}

	void BaseObject::DelTargetCreat(struct TBaseObject* object)
	{
		if (self == nullptr || self->DelTargetCreat == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DelTargetCreat, object);
	}

	struct TBaseObject* BaseObject::GetLastHiter(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetLastHiter == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetLastHiter, object);
	}

	struct TBaseObject* BaseObject::GetExpHitter(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetExpHitter == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetExpHitter, object);
	}

	struct TBaseObject* BaseObject::GetPoisonHitter(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetPoisonHitter == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetPoisonHitter, object);
	}

	struct TBaseObject* BaseObject::GetPoseCreate(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetPoseCreate == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TBaseObject*>(self->GetPoseCreate, object);
	}

	bool BaseObject::IsProperTarget(struct TBaseObject* object, struct TBaseObject* target)
	{
		if (self == nullptr || self->IsProperTarget == nullptr) {
			return false;
		}

		if (object == nullptr || target == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsProperTarget, object, target);
	}

	bool BaseObject::IsProperFriend(struct TBaseObject* object, struct TBaseObject* target)
	{
		if (self == nullptr || self->IsProperFriend == nullptr) {
			return false;
		}

		if (object == nullptr || target == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsProperFriend, object, target);
	}

	bool BaseObject::TargetInRange(struct TBaseObject* object, struct TBaseObject* target, i32 nX, i32 nY, i32 nRange)
	{
		if (self == nullptr || self->TargetInRange == nullptr) {
			return false;
		}

		if (object == nullptr || target == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->TargetInRange, object, target, nX, nY, nRange);
	}

	void BaseObject::SendMsg(struct TBaseObject* object, struct TBaseObject* target, i32 wIdent, i32 wParam, intptr_t nParam1, intptr_t nParam2, intptr_t nParam3, char* sMsg)
	{
		if (self == nullptr || self->SendMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg);
	}

	void BaseObject::SendDelayMsg(struct TBaseObject* object, struct TBaseObject* target, i32 wIdent, i32 wParam, intptr_t nParam1, intptr_t nParam2, intptr_t nParam3, char* sMsg, u32 dwDelay)
	{
		if (self == nullptr || self->SendDelayMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelayMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg, dwDelay);
	}

	void BaseObject::SendRefMsg(struct TBaseObject* object, i32 wIdent, i32 wParam, intptr_t nParam1, intptr_t nParam2, intptr_t nParam3, char* sMsg, u32 dwDelay)
	{
		if (self == nullptr || self->SendRefMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendRefMsg, object, wIdent, wParam, nParam1, nParam2, nParam3, sMsg, dwDelay);
	}

	void BaseObject::SendUpdateMsg(struct TBaseObject* object, struct TBaseObject* target, i32 wIdent, i32 wParam, intptr_t nParam1, intptr_t nParam2, intptr_t nParam3, char* sMsg)
	{
		if (self == nullptr || self->SendUpdateMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUpdateMsg, object, target, wIdent, wParam, nParam1, nParam2, nParam3, sMsg);
	}

	bool BaseObject::SysMsg(struct TBaseObject* object, char* sMsg, u8 fColor, u8 bColor, i32 msgType)
	{
		if (self == nullptr || self->SysMsg == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SysMsg, object, sMsg, fColor, bColor, msgType);
	}

	struct TList* BaseObject::GetBagItemList(struct TBaseObject* object)
	{
		if (self == nullptr || self->GetBagItemList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetBagItemList, object);
	}

	bool BaseObject::IsEnoughBag(struct TBaseObject* object)
	{
		if (self == nullptr || self->IsEnoughBag == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsEnoughBag, object);
	}

	bool BaseObject::IsEnoughBagEx(struct TBaseObject* object, i32 addCount)
	{
		if (self == nullptr || self->IsEnoughBagEx == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsEnoughBagEx, object, addCount);
	}

	bool BaseObject::AddItemToBag(struct TBaseObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->AddItemToBag == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddItemToBag, object, userItem);
	}

	bool BaseObject::DelBagItemByIndex(struct TBaseObject* object, i32 index)
	{
		if (self == nullptr || self->DelBagItemByIndex == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelBagItemByIndex, object, index);
	}

	bool BaseObject::DelBagItemByMakeIdx(struct TBaseObject* object, i32 makeIndex, char* itemName)
	{
		if (self == nullptr || self->DelBagItemByMakeIdx == nullptr || itemName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelBagItemByMakeIdx, object, makeIndex, itemName);
	}

	bool BaseObject::DelBagItemByUserItem(struct TBaseObject* object, struct TUserItem* userItem)
	{
		if (self == nullptr || self->DelBagItemByUserItem == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelBagItemByUserItem, object, userItem);
	}

	bool BaseObject::IsInSafeZone(struct TBaseObject* object)
	{
		if (self == nullptr || self->IsInSafeZone == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsInSafeZone, object);
	}

	bool BaseObject::IsPtInSafeZone(struct TBaseObject* object, struct TEnvirnoment* envir, i32 nX, i32 nY)
	{
		if (self == nullptr || self->IsPtInSafeZone == nullptr || envir == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsPtInSafeZone, object, envir, nX, nY);
	}

	void BaseObject::RecalcLevelAbil(struct TBaseObject* object, bool isSysDef)
	{
		if (self == nullptr || self->RecalcLevelAbil == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RecalcLevelAbil, object, isSysDef);
	}

	void BaseObject::RecalcAbil(struct TBaseObject* object)
	{
		if (self == nullptr || self->RecalcAbil == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RecalcAbil, object);
	}

	i32 BaseObject::RecalcBagWeight(struct TBaseObject* object)
	{
		if (self == nullptr || self->RecalcBagWeight == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->RecalcBagWeight, object);
	}

	u32 BaseObject::GetLevelExp(struct TBaseObject* object, i32 nLevel)
	{
		if (self == nullptr || self->GetLevelExp == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetLevelExp, object, nLevel);
	}

	void BaseObject::HasLevelUp(struct TBaseObject* object, i32 nLevel)
	{
		if (self == nullptr || self->HasLevelUp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->HasLevelUp, object, nLevel);
	}

	bool BaseObject::TrainSkill(struct TBaseObject* object, struct TUserMagic* userMagic, i32 nTranPoint, bool isDoCheck)
	{
		if (self == nullptr || self->TrainSkill == nullptr || userMagic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->TrainSkill, object, userMagic, nTranPoint, isDoCheck);
	}

	bool BaseObject::CheckMagicLevelup(struct TBaseObject* object, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->CheckMagicLevelup == nullptr || userMagic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckMagicLevelup, object, userMagic);
	}

	void BaseObject::MagicTranPointChanged(struct TBaseObject* object, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->MagicTranPointChanged == nullptr || userMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MagicTranPointChanged, object, userMagic);
	}

	void BaseObject::DamageHealth(struct TBaseObject* object, i32 nDamage, struct TBaseObject* struckFrom)
	{
		if (self == nullptr || self->DamageHealth == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DamageHealth, object, nDamage, struckFrom);
	}

	void BaseObject::DamageSpell(struct TBaseObject* object, i32 nSpellPoint)
	{
		if (self == nullptr || self->DamageSpell == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DamageSpell, object, nSpellPoint);
	}

	void BaseObject::IncHealthSpell(struct TBaseObject* object, i32 nHP, i32 nMP, bool sendChangedToClient)
	{
		if (self == nullptr || self->IncHealthSpell == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncHealthSpell, object, nHP, nMP, sendChangedToClient);
	}

	void BaseObject::HealthSpellChanged(struct TBaseObject* object, u32 dwDelay)
	{
		if (self == nullptr || self->HealthSpellChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->HealthSpellChanged, object, dwDelay);
	}

	void BaseObject::FeatureChanged(struct TBaseObject* object)
	{
		if (self == nullptr || self->FeatureChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->FeatureChanged, object);
	}

	void BaseObject::WeightChanged(struct TBaseObject* object)
	{
		if (self == nullptr || self->WeightChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->WeightChanged, object);
	}

	i32 BaseObject::GetHitStruckDamage(struct TBaseObject* object, struct TBaseObject* target, i32 nDamage, struct MagicACInfo* magicACInfo, i32 nType)
	{
		if (self == nullptr || self->GetHitStruckDamage == nullptr || target == nullptr || magicACInfo == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHitStruckDamage, object, target, nDamage, magicACInfo, nType);
	}

	i32 BaseObject::GetMagStruckDamage(struct TBaseObject* object, struct TBaseObject* target, i32 nDamage)
	{
		if (self == nullptr || self->GetMagStruckDamage == nullptr || target == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMagStruckDamage, object, target, nDamage);
	}

	bool BaseObject::GetActorIcon(struct TBaseObject* object, i32 index, struct TActorIcon* actorIcon)
	{
		if (self == nullptr || self->GetActorIcon == nullptr || actorIcon == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetActorIcon, object, index, actorIcon);
	}

	bool BaseObject::SetActorIcon(struct TBaseObject* object, i32 index, struct TActorIcon* actorIcon)
	{
		if (self == nullptr || self->SetActorIcon == nullptr || actorIcon == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetActorIcon, object, index, actorIcon);
	}

	void BaseObject::RefUseIcons(struct TBaseObject* object)
	{
		if (self == nullptr || self->RefUseIcons == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefUseIcons, object);
	}

	void BaseObject::RefUseEffects(struct TBaseObject* object)
	{
		if (self == nullptr || self->RefUseEffects == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefUseEffects, object);
	}

	void BaseObject::SpaceMove(struct TBaseObject* object, char* sMapName, i32 nX, i32 nY, i32 nInt)
	{
		if (self == nullptr || self->SpaceMove == nullptr || sMapName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SpaceMove, object, sMapName, nX, nY, nInt);
	}

	void BaseObject::MapRandomMove(struct TBaseObject* object, char* sMapName, i32 nInt)
	{
		if (self == nullptr || self->MapRandomMove == nullptr || sMapName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->MapRandomMove, object, sMapName, nInt);
	}

	bool BaseObject::CanMove(struct TBaseObject* object)
	{
		if (self == nullptr || self->CanMove == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CanMove, object);
	}

	bool BaseObject::CanRun(struct TBaseObject* object, i32 nCurrX, i32 nCurrY, i32 nX, i32 nY)
	{
		if (self == nullptr || self->CanRun == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CanRun, object, nCurrX, nCurrY, nX, nY);
	}

	void BaseObject::TurnTo(struct TBaseObject* object, u8 btDir)
	{
		if (self == nullptr || self->TurnTo == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->TurnTo, object, btDir);
	}

	bool BaseObject::WalkTo(struct TBaseObject* object, u8 btDir, bool boFlag)
	{
		if (self == nullptr || self->WalkTo == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->WalkTo, object, btDir, boFlag);
	}

	bool BaseObject::RunTo(struct TBaseObject* object, u8 btDir, bool boFlag)
	{
		if (self == nullptr || self->RunTo == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->RunTo, object, btDir, boFlag);
	}

	struct TList* BaseObject::PluginList(struct TBaseObject* object)
	{
		if (self == nullptr || self->PluginList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->PluginList, object);
	}
}