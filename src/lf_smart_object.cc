#include "lf_smart_object.h"

namespace LF
{
	SmartObject::SmartObject(struct TSmartObjectFunc* self)
		: self(self)
		, object(nullptr)
	{
	}

	SmartObject::~SmartObject()
	{
	}

	struct TList* SmartObject::GetMagicList()
	{
		if (self == nullptr || self->GetMagicList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetMagicList, object);
	}

	bool SmartObject::GetUseItem(i32 Index, struct TUserItem* UserItem)
	{
		if (self == nullptr || self->GetUseItem == nullptr || UserItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetUseItem, object, Index, UserItem);
	}

	i32 SmartObject::GetJewelryBoxStatus()
	{
		if (self == nullptr || self->GetJewelryBoxStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetJewelryBoxStatus, object);
	}

	void SmartObject::SetJewelryBoxStatus(i32 Value)
	{
		if (self == nullptr || self->SetJewelryBoxStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetJewelryBoxStatus, object, Value);
	}

	bool SmartObject::GetJewelryItem(i32 Index, struct TUserItem* UserItem)
	{
		if (self == nullptr || self->GetJewelryItem == nullptr || UserItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetJewelryItem, object, Index, UserItem);
	}

	bool SmartObject::GetIsShowGodBless()
	{
		if (self == nullptr || self->GetIsShowGodBless == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsShowGodBless, object);
	}

	void SmartObject::SetIsShowGodBless(bool Value)
	{
		if (self == nullptr || self->SetIsShowGodBless == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsShowGodBless, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetGodBlessItemsState(i32 Index)
	{
		if (self == nullptr || self->GetGodBlessItemsState == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGodBlessItemsState, object, Index);
	}

	void SmartObject::SetGodBlessItemsState(i32 Index, bool Value)
	{
		if (self == nullptr || self->SetGodBlessItemsState == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGodBlessItemsState, object, Index, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetGodBlessItem(i32 Index, struct TUserItem* UserItem)
	{
		if (self == nullptr || self->GetGodBlessItem == nullptr || UserItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGodBlessItem, object, Index, UserItem);
	}

	struct TList* SmartObject::GetFengHaoItems()
	{
		if (self == nullptr || self->GetFengHaoItems == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetFengHaoItems, object);
	}

	i32 SmartObject::GetActiveFengHao()
	{
		if (self == nullptr || self->GetActiveFengHao == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetActiveFengHao, object);
	}

	void SmartObject::SetActiveFengHao(i32 FengHaoIndex)
	{
		if (self == nullptr || self->SetActiveFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetActiveFengHao, object, FengHaoIndex);
	}

	void SmartObject::ActiveFengHaoChanged()
	{
		if (self == nullptr || self->ActiveFengHaoChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ActiveFengHaoChanged, object);
	}

	void SmartObject::DeleteFengHao(i32 Index)
	{
		if (self == nullptr || self->DeleteFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DeleteFengHao, object, Index);
	}

	void SmartObject::ClearFengHao()
	{
		if (self == nullptr || self->ClearFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ClearFengHao, object);
	}

	i16 SmartObject::GetMoveSpeed()
	{
		if (self == nullptr || self->GetMoveSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetMoveSpeed, object);
	}

	void SmartObject::SetMoveSpeed(i16 Value)
	{
		if (self == nullptr || self->SetMoveSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMoveSpeed, object, Value);
	}

	i16 SmartObject::GetAttackSpeed()
	{
		if (self == nullptr || self->GetAttackSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetAttackSpeed, object);
	}

	void SmartObject::SetAttackSpeed(i16 Value)
	{
		if (self == nullptr || self->SetAttackSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAttackSpeed, object, Value);
	}

	i16 SmartObject::GetSpellSpeed()
	{
		if (self == nullptr || self->GetSpellSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetSpellSpeed, object);
	}

	void SmartObject::SetSpellSpeed(i16 Value)
	{
		if (self == nullptr || self->SetSpellSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSpellSpeed, object, Value);
	}

	void SmartObject::RefGameSpeed()
	{
		if (self == nullptr || self->RefGameSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefGameSpeed, object);
	}

	bool SmartObject::GetIsButch()
	{
		if (self == nullptr || self->GetIsButch == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsButch, object);
	}

	void SmartObject::SetIsButch(bool Value)
	{
		if (self == nullptr || self->SetIsButch == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsButch, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsTrainingNG()
	{
		if (self == nullptr || self->GetIsTrainingNG == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTrainingNG, object);
	}

	void SmartObject::SetIsTrainingNG(bool Value)
	{
		if (self == nullptr || self->SetIsTrainingNG == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTrainingNG, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsTrainingXF()
	{
		if (self == nullptr || self->GetIsTrainingXF == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTrainingXF, object);
	}

	void SmartObject::SetIsTrainingXF(bool Value)
	{
		if (self == nullptr || self->SetIsTrainingXF == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTrainingXF, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsOpenLastContinuous()
	{
		if (self == nullptr || self->GetIsOpenLastContinuous == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsOpenLastContinuous, object);
	}

	void SmartObject::SetIsOpenLastContinuous(bool Value)
	{
		if (self == nullptr || self->SetIsOpenLastContinuous == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsOpenLastContinuous, object, static_cast<BOOL>(Value));
	}

	u8 SmartObject::GetContinuousMagicOrder(i32 Index)
	{
		if (self == nullptr || self->GetContinuousMagicOrder == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetContinuousMagicOrder, object, Index);
	}

	void SmartObject::SetContinuousMagicOrder(i32 Index, u8 Value)
	{
		if (self == nullptr || self->SetContinuousMagicOrder == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetContinuousMagicOrder, object, Index, Value);
	}

	u32 SmartObject::GetPKDieLostExp()
	{
		if (self == nullptr || self->GetPKDieLostExp == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetPKDieLostExp, object);
	}

	void SmartObject::SetPKDieLostExp(u32 Value)
	{
		if (self == nullptr || self->SetPKDieLostExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKDieLostExp, object, Value);
	}

	i32 SmartObject::GetPKDieLostLevel()
	{
		if (self == nullptr || self->GetPKDieLostLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKDieLostLevel, object);
	}

	void SmartObject::SetPKDieLostLevel(i32 Value)
	{
		if (self == nullptr || self->SetPKDieLostLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKDieLostLevel, object, Value);
	}

	i32 SmartObject::GetPKPoint()
	{
		if (self == nullptr || self->GetPKPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKPoint, object);
	}

	void SmartObject::SetPKPoint(i32 Value)
	{
		if (self == nullptr || self->SetPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKPoint, object, Value);
	}

	void SmartObject::IncPKPoint(i32 Value)
	{
		if (self == nullptr || self->IncPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncPKPoint, object, Value);
	}

	void SmartObject::DecPKPoint(i32 Value)
	{
		if (self == nullptr || self->DecPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecPKPoint, object, Value);
	}

	i32 SmartObject::GetPKLevel()
	{
		if (self == nullptr || self->GetPKLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKLevel, object);
	}

	void SmartObject::SetPKLevel(i32 Value)
	{
		if (self == nullptr || self->SetPKLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKLevel, object, Value);
	}

	bool SmartObject::GetIsTeleport()
	{
		if (self == nullptr || self->GetIsTeleport == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTeleport, object);
	}

	void SmartObject::SetIsTeleport(bool Value)
	{
		if (self == nullptr || self->SetIsTeleport == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTeleport, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsRevival()
	{
		if (self == nullptr || self->GetIsRevival == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRevival, object);
	}

	void SmartObject::SetIsRevival(bool Value)
	{
		if (self == nullptr || self->SetIsRevival == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRevival, object, static_cast<BOOL>(Value));
	}

	i32 SmartObject::GetRevivalTime()
	{
		if (self == nullptr || self->GetRevivalTime == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetRevivalTime, object);
	}

	void SmartObject::SetRevivalTime(i32 Value)
	{
		if (self == nullptr || self->SetRevivalTime == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetRevivalTime, object, Value);
	}

	bool SmartObject::GetIsFlameRing()
	{
		if (self == nullptr || self->GetIsFlameRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFlameRing, object);
	}

	void SmartObject::SetIsFlameRing(bool Value)
	{
		if (self == nullptr || self->SetIsFlameRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFlameRing, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsRecoveryRing()
	{
		if (self == nullptr || self->GetIsRecoveryRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRecoveryRing, object);
	}

	void SmartObject::SetIsRecoveryRing(bool Value)
	{
		if (self == nullptr || self->SetIsRecoveryRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRecoveryRing, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsMagicShield()
	{
		if (self == nullptr || self->GetIsMagicShield == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMagicShield, object);
	}

	void SmartObject::SetIsMagicShield(bool Value)
	{
		if (self == nullptr || self->SetIsMagicShield == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMagicShield, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsMuscleRing()
	{
		if (self == nullptr || self->GetIsMuscleRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMuscleRing, object);
	}

	void SmartObject::SetIsMuscleRing(bool Value)
	{
		if (self == nullptr || self->SetIsMuscleRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMuscleRing, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsFastTrain()
	{
		if (self == nullptr || self->GetIsFastTrain == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFastTrain, object);
	}

	void SmartObject::SetIsFastTrain(bool Value)
	{
		if (self == nullptr || self->SetIsFastTrain == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFastTrain, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsProbeNecklace()
	{
		if (self == nullptr || self->GetIsProbeNecklace == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsProbeNecklace, object);
	}

	void SmartObject::SetIsProbeNecklace(bool Value)
	{
		if (self == nullptr || self->SetIsProbeNecklace == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsProbeNecklace, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsRecallSuite()
	{
		if (self == nullptr || self->GetIsRecallSuite == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRecallSuite, object);
	}

	void SmartObject::SetIsRecallSuite(bool Value)
	{
		if (self == nullptr || self->SetIsRecallSuite == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRecallSuite, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsPirit()
	{
		if (self == nullptr || self->GetIsPirit == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPirit, object);
	}

	void SmartObject::SetIsPirit(bool Value)
	{
		if (self == nullptr || self->SetIsPirit == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsPirit, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsSupermanItem()
	{
		if (self == nullptr || self->GetIsSupermanItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsSupermanItem, object);
	}

	void SmartObject::SetIsSupermanItem(bool Value)
	{
		if (self == nullptr || self->SetIsSupermanItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsSupermanItem, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsExpItem()
	{
		if (self == nullptr || self->GetIsExpItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsExpItem, object);
	}

	void SmartObject::SetIsExpItem(bool Value)
	{
		if (self == nullptr || self->SetIsExpItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsExpItem, object, static_cast<BOOL>(Value));
	}

	float SmartObject::GetExpItemValue()
	{
		if (self == nullptr || self->GetExpItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetExpItemValue, object);
	}

	void SmartObject::SetExpItemValue(float Value)
	{
		if (self == nullptr || self->SetExpItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetExpItemValue, object, Value);
	}

	i32 SmartObject::GetExpItemRate()
	{
		if (self == nullptr || self->GetExpItemRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetExpItemRate, object);
	}

	bool SmartObject::GetIsPowerItem()
	{
		if (self == nullptr || self->GetIsPowerItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPowerItem, object);
	}

	void SmartObject::SetIsPowerItem(bool Value)
	{
		if (self == nullptr || self->SetIsPowerItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsPowerItem, object, static_cast<BOOL>(Value));
	}

	float SmartObject::GetPowerItemValue()
	{
		if (self == nullptr || self->GetPowerItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetPowerItemValue, object);
	}

	void SmartObject::SetPowerItemValue(float Value)
	{
		if (self == nullptr || self->SetPowerItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPowerItemValue, object, Value);
	}

	i32 SmartObject::GetPowerItemRate()
	{
		if (self == nullptr || self->GetPowerItemRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPowerItemRate, object);
	}

	bool SmartObject::GetIsGuildMove()
	{
		if (self == nullptr || self->GetIsGuildMove == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsGuildMove, object);
	}

	void SmartObject::SetIsGuildMove(bool Value)
	{
		if (self == nullptr || self->SetIsGuildMove == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsGuildMove, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsAngryRing()
	{
		if (self == nullptr || self->GetIsAngryRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAngryRing, object);
	}

	void SmartObject::SetIsAngryRing(bool Value)
	{
		if (self == nullptr || self->SetIsAngryRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAngryRing, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsStarRing()
	{
		if (self == nullptr || self->GetIsStarRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsStarRing, object);
	}

	void SmartObject::SetIsStarRing(bool Value)
	{
		if (self == nullptr || self->SetIsStarRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsStarRing, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsACItem()
	{
		if (self == nullptr || self->GetIsACItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsACItem, object);
	}

	void SmartObject::SetIsACItem(bool Value)
	{
		if (self == nullptr || self->SetIsACItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsACItem, object, static_cast<BOOL>(Value));
	}

	float SmartObject::GetACItemValue()
	{
		if (self == nullptr || self->GetACItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetACItemValue, object);
	}

	void SmartObject::SetACItemValue(float Value)
	{
		if (self == nullptr || self->SetACItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetACItemValue, object, Value);
	}

	bool SmartObject::GetIsMACItem()
	{
		if (self == nullptr || self->GetIsMACItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMACItem, object);
	}

	void SmartObject::SetIsMACItem(bool Value)
	{
		if (self == nullptr || self->SetIsMACItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMACItem, object, static_cast<BOOL>(Value));
	}

	float SmartObject::GetMACItemValue()
	{
		if (self == nullptr || self->GetMACItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetMACItemValue, object);
	}

	void SmartObject::SetMACItemValue(float Value)
	{
		if (self == nullptr || self->SetMACItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMACItemValue, object, Value);
	}

	bool SmartObject::GetIsNoDropItem()
	{
		if (self == nullptr || self->GetIsNoDropItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNoDropItem, object);
	}

	void SmartObject::SetIsNoDropItem(bool Value)
	{
		if (self == nullptr || self->SetIsNoDropItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsNoDropItem, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetIsNoDropUseItem()
	{
		if (self == nullptr || self->GetIsNoDropUseItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNoDropUseItem, object);
	}

	void SmartObject::SetIsNoDropUseItem(bool Value)
	{
		if (self == nullptr || self->SetIsNoDropUseItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsNoDropUseItem, object, static_cast<BOOL>(Value));
	}

	bool SmartObject::GetNGAbility(struct TAbilityNG* AbilityNG)
	{
		if (self == nullptr || self->GetNGAbility == nullptr || AbilityNG == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetNGAbility, object, AbilityNG);
	}

	void SmartObject::SetNGAbility(struct TAbilityNG* Value)
	{
		if (self == nullptr || self->SetNGAbility == nullptr || Value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetNGAbility, object, Value);
	}

	bool SmartObject::GetAlcohol(struct TAbilityAlcohol* AbilityAlcohol)
	{
		if (self == nullptr || self->GetAlcohol == nullptr || AbilityAlcohol == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAlcohol, object, AbilityAlcohol);
	}

	void SmartObject::SetAlcohol(struct TAbilityAlcohol* Value)
	{
		if (self == nullptr || self->SetAlcohol == nullptr || Value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAlcohol, object, Value);
	}

	void SmartObject::RepairAllItem()
	{
		if (self == nullptr || self->RepairAllItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RepairAllItem, object);
	}

	bool SmartObject::IsAllowUseMagic(u16 MagicID)
	{
		if (self == nullptr || self->IsAllowUseMagic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAllowUseMagic, object, MagicID);
	}

	i32 SmartObject::SelectMagic()
	{
		if (self == nullptr || self->SelectMagic == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->SelectMagic, object);
	}

	bool SmartObject::AttackTarget(u16 MagicID, u32 AttackTime)
	{
		if (self == nullptr || self->AttackTarget == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AttackTarget, object, MagicID, AttackTime);
	}
}