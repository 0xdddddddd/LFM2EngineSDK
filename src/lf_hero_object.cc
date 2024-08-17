#include "lf_hero_object.h"

namespace LF
{
	HeroObject::HeroObject(struct THeroObjectFunc* self)
		: self(self) {}
	HeroObject::~HeroObject(){};

	u8 HeroObject::GetAttackMode(struct THeroObject* hero)
	{
		if (self == nullptr || self->GetAttackMode == nullptr) {
			return 0;
		}

		if (hero == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetAttackMode, hero);
	}

	bool HeroObject::SetAttackMode(struct THeroObject* hero, u8 value, bool showSysMsg)
	{
		if (self == nullptr || self->SetAttackMode == nullptr) {
			return false;
		}

		if (hero == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetAttackMode, hero, value, showSysMsg);
	}

	void HeroObject::SetNextAttackMode(struct THeroObject* hero)
	{
		if (self == nullptr || self->SetNextAttackMode == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SetNextAttackMode, hero);
	}

	i32 HeroObject::GetBagCount(struct THeroObject* hero)
	{
		if (self == nullptr || self->GetBagCount == nullptr) {
			return 0;
		}

		if (hero == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBagCount, hero);
	}

	i32 HeroObject::GetAngryValue(struct THeroObject* hero)
	{
		if (self == nullptr || self->GetAngryValue == nullptr) {
			return 0;
		}

		if (hero == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetAngryValue, hero);
	}

	float HeroObject::GetLoyalPoint(struct THeroObject* hero)
	{
		if (self == nullptr || self->GetLoyalPoint == nullptr) {
			return 0.0f;
		}

		if (hero == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetLoyalPoint, hero);
	}

	void HeroObject::SetLoyalPoint(struct THeroObject* hero, float value)
	{
		if (self == nullptr || self->SetLoyalPoint == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SetLoyalPoint, hero, value);
	}

	void HeroObject::SendLoyalPointChanged(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendLoyalPointChanged == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendLoyalPointChanged, hero);
	}

	bool HeroObject::IsDeputy(struct THeroObject* hero)
	{
		if (self == nullptr || self->IsDeputy == nullptr) {
			return false;
		}

		if (hero == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsDeputy, hero);
	}

	bool HeroObject::GetMasterName(struct THeroObject* hero, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMasterName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (hero == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMasterName, hero, dest, destLen);
	}

	i32 HeroObject::GetQuestFlagStatus(struct THeroObject* hero, i32 nFlag)
	{
		if (self == nullptr || self->GetQuestFlagStatus == nullptr) {
			return 0;
		}

		if (hero == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetQuestFlagStatus, hero, nFlag);
	}

	void HeroObject::SetQuestFlagStatus(struct THeroObject* hero, i32 nFlag, i32 value)
	{
		if (self == nullptr || self->SetQuestFlagStatus == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SetQuestFlagStatus, hero, nFlag, value);
	}

	void HeroObject::SendUseItems(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendUseItems == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendUseItems, hero);
	}

	void HeroObject::SendBagItems(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendBagItems == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendBagItems, hero);
	}

	void HeroObject::SendJewelryBoxItems(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendJewelryBoxItems == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendJewelryBoxItems, hero);
	}

	void HeroObject::SendGodBlessItems(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendGodBlessItems == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendGodBlessItems, hero);
	}

	void HeroObject::SendOpenGodBlessItem(struct THeroObject* hero, i32 index)
	{
		if (self == nullptr || self->SendOpenGodBlessItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendOpenGodBlessItem, hero, index);
	}

	void HeroObject::SendCloseGodBlessItem(struct THeroObject* hero, i32 index)
	{
		if (self == nullptr || self->SendCloseGodBlessItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendCloseGodBlessItem, hero, index);
	}

	void HeroObject::SendAddItem(struct THeroObject* hero, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendAddItem == nullptr || userItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendAddItem, hero, userItem);
	}

	void HeroObject::SendDelItem(struct THeroObject* hero, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendDelItem == nullptr || userItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendDelItem, hero, userItem);
	}

	void HeroObject::SendUpdateItem(struct THeroObject* hero, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendUpdateItem == nullptr || userItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendUpdateItem, hero, userItem);
	}

	void HeroObject::SendItemDuraChange(struct THeroObject* hero, i32 itemWhere, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendItemDuraChange == nullptr || userItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendItemDuraChange, hero, itemWhere, userItem);
	}

	void HeroObject::SendUseMagics(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendUseMagics == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendUseMagics, hero);
	}

	void HeroObject::SendAddMagic(struct THeroObject* hero, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->SendAddMagic == nullptr || userMagic == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendAddMagic, hero, userMagic);
	}

	void HeroObject::SendDelMagic(struct THeroObject* hero, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->SendDelMagic == nullptr || userMagic == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendDelMagic, hero, userMagic);
	}

	bool HeroObject::FindGroupMagic(struct THeroObject* hero, struct TUserMagic* userMagic)
	{
		if (self == nullptr || self->FindGroupMagic == nullptr || userMagic == nullptr) {
			return false;
		}

		if (hero == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindGroupMagic, hero, userMagic);
	}

	i32 HeroObject::GetGroupMagicId(struct THeroObject* hero)
	{
		if (self == nullptr || self->GetGroupMagicId == nullptr) {
			return 0;
		}

		if (hero == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGroupMagicId, hero);
	}

	void HeroObject::SendFengHaoItems(struct THeroObject* hero)
	{
		if (self == nullptr || self->SendFengHaoItems == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendFengHaoItems, hero);
	}

	void HeroObject::SendAddFengHaoItem(struct THeroObject* hero, struct TUserItem* userItem)
	{
		if (self == nullptr || self->SendAddFengHaoItem == nullptr || userItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendAddFengHaoItem, hero, userItem);
	}

	void HeroObject::SendDelFengHaoItem(struct THeroObject* hero, i32 index)
	{
		if (self == nullptr || self->SendDelFengHaoItem == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->SendDelFengHaoItem, hero, index);
	}

	void HeroObject::IncExp(struct THeroObject* hero, u32 dwExp)
	{
		if (self == nullptr || self->IncExp == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->IncExp, hero, dwExp);
	}

	void HeroObject::IncExpNG(struct THeroObject* hero, u32 dwExp)
	{
		if (self == nullptr || self->IncExpNG == nullptr) {
			return;
		}

		if (hero == nullptr) {
			return;
		}

		wrap_call(self->IncExpNG, hero, dwExp);
	}

	bool HeroObject::IsOldClient(struct THeroObject* hero)
	{
		if (self == nullptr || self->IsOldClient == nullptr) {
			return false;
		}

		if (hero == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOldClient, hero);
	}
}