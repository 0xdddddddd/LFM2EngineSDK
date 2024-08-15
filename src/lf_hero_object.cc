#include "lf_hero_object.h"

namespace LF
{
	u8 HeroObject::GetAttackMode()
	{
		if (self == nullptr || self->GetAttackMode == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetAttackMode, object);
	}

	bool HeroObject::SetAttackMode(u8 Value, bool ShowSysMsg)
	{
		if (self == nullptr || self->SetAttackMode == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SetAttackMode, object, Value, static_cast<BOOL>(ShowSysMsg));
	}

	void HeroObject::SetNextAttackMode()
	{
		if (self == nullptr || self->SetNextAttackMode == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetNextAttackMode, object);
	}

	i32 HeroObject::GetBagCount()
	{
		if (self == nullptr || self->GetBagCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBagCount, object);
	}

	i32 HeroObject::GetAngryValue()
	{
		if (self == nullptr || self->GetAngryValue == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetAngryValue, object);
	}

	float HeroObject::GetLoyalPoint()
	{
		if (self == nullptr || self->GetLoyalPoint == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetLoyalPoint, object);
	}

	void HeroObject::SetLoyalPoint(float Value)
	{
		if (self == nullptr || self->SetLoyalPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetLoyalPoint, object, Value);
	}

	void HeroObject::SendLoyalPointChanged()
	{
		if (self == nullptr || self->SendLoyalPointChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendLoyalPointChanged, object);
	}

	bool HeroObject::IsDeputy()
	{
		if (self == nullptr || self->IsDeputy == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsDeputy, object);
	}

	bool HeroObject::GetMasterName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetMasterName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMasterName, object, Dest, DestLen);
	}

	i32 HeroObject::GetQuestFlagStatus(i32 nFlag)
	{
		if (self == nullptr || self->GetQuestFlagStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetQuestFlagStatus, object, nFlag);
	}

	void HeroObject::SetQuestFlagStatus(i32 nFlag, i32 Value)
	{
		if (self == nullptr || self->SetQuestFlagStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetQuestFlagStatus, object, nFlag, Value);
	}

	void HeroObject::SendUseItems()
	{
		if (self == nullptr || self->SendUseItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseItems, object);
	}

	void HeroObject::SendBagItems()
	{
		if (self == nullptr || self->SendBagItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendBagItems, object);
	}

	void HeroObject::SendJewelryBoxItems()
	{
		if (self == nullptr || self->SendJewelryBoxItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendJewelryBoxItems, object);
	}

	void HeroObject::SendGodBlessItems()
	{
		if (self == nullptr || self->SendGodBlessItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendGodBlessItems, object);
	}

	void HeroObject::SendOpenGodBlessItem(i32 Index)
	{
		if (self == nullptr || self->SendOpenGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendOpenGodBlessItem, object, Index);
	}

	void HeroObject::SendCloseGodBlessItem(i32 Index)
	{
		if (self == nullptr || self->SendCloseGodBlessItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCloseGodBlessItem, object, Index);
	}

	void HeroObject::SendAddItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendAddItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddItem, object, UserItem);
	}

	void HeroObject::SendDelItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendDelItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelItem, object, UserItem);
	}

	void HeroObject::SendUpdateItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendUpdateItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUpdateItem, object, UserItem);
	}

	void HeroObject::SendItemDuraChange(i32 ItemWhere, struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendItemDuraChange == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendItemDuraChange, object, ItemWhere, UserItem);
	}

	void HeroObject::SendUseMagics()
	{
		if (self == nullptr || self->SendUseMagics == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendUseMagics, object);
	}

	void HeroObject::SendAddMagic(struct TUserMagic* UserMagic)
	{
		if (self == nullptr || self->SendAddMagic == nullptr || UserMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddMagic, object, UserMagic);
	}

	void HeroObject::SendDelMagic(struct TUserMagic* UserMagic)
	{
		if (self == nullptr || self->SendDelMagic == nullptr || UserMagic == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelMagic, object, UserMagic);
	}

	bool HeroObject::FindGroupMagic(struct TUserMagic* UserMagic)
	{
		if (self == nullptr || self->FindGroupMagic == nullptr || UserMagic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindGroupMagic, object, UserMagic);
	}

	i32 HeroObject::GetGroupMagicId()
	{
		if (self == nullptr || self->GetGroupMagicId == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGroupMagicId, object);
	}

	void HeroObject::SendFengHaoItems()
	{
		if (self == nullptr || self->SendFengHaoItems == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendFengHaoItems, object);
	}

	void HeroObject::SendAddFengHaoItem(struct TUserItem* UserItem)
	{
		if (self == nullptr || self->SendAddFengHaoItem == nullptr || UserItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendAddFengHaoItem, object, UserItem);
	}

	void HeroObject::SendDelFengHaoItem(i32 Index)
	{
		if (self == nullptr || self->SendDelFengHaoItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendDelFengHaoItem, object, Index);
	}

	void HeroObject::IncExp(u32 dwExp)
	{
		if (self == nullptr || self->IncExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExp, object, dwExp);
	}

	void HeroObject::IncExpNG(u32 dwExp)
	{
		if (self == nullptr || self->IncExpNG == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncExpNG, object, dwExp);
	}

	bool HeroObject::IsOldClient()
	{
		if (self == nullptr || self->IsOldClient == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsOldClient, object);
	}
}