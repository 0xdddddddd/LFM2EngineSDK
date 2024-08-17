#include "lf_smart_object.h"

namespace LF
{
	SmartObject::SmartObject(struct TSmartObjectFunc* self)
		: self(self)
	{
	}

	SmartObject::~SmartObject()
	{
	}
	struct TList* SmartObject::GetMagicList(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetMagicList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetMagicList, object);
	}

	bool SmartObject::GetUseItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem)
	{
		if (self == nullptr || self->GetUseItem == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetUseItem, object, index, userItem);
	}

	i32 SmartObject::GetJewelryBoxStatus(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetJewelryBoxStatus == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetJewelryBoxStatus, object);
	}

	void SmartObject::SetJewelryBoxStatus(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->SetJewelryBoxStatus == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetJewelryBoxStatus, object, value);
	}

	bool SmartObject::GetJewelryItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem)
	{
		if (self == nullptr || self->GetJewelryItem == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetJewelryItem, object, index, userItem);
	}

	bool SmartObject::GetIsShowGodBless(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsShowGodBless == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsShowGodBless, object);
	}

	void SmartObject::SetIsShowGodBless(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsShowGodBless == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsShowGodBless, object, value);
	}

	bool SmartObject::GetGodBlessItemsState(struct TSmartObject* object, i32 index)
	{
		if (self == nullptr || self->GetGodBlessItemsState == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGodBlessItemsState, object, index);
	}

	void SmartObject::SetGodBlessItemsState(struct TSmartObject* object, i32 index, bool value)
	{
		if (self == nullptr || self->SetGodBlessItemsState == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGodBlessItemsState, object, index, value);
	}

	bool SmartObject::GetGodBlessItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem)
	{
		if (self == nullptr || self->GetGodBlessItem == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGodBlessItem, object, index, userItem);
	}

	struct TList* SmartObject::GetFengHaoItems(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetFengHaoItems == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetFengHaoItems, object);
	}

	i32 SmartObject::GetActiveFengHao(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetActiveFengHao == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetActiveFengHao, object);
	}

	void SmartObject::SetActiveFengHao(struct TSmartObject* object, i32 fengHaoIndex)
	{
		if (self == nullptr || self->SetActiveFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetActiveFengHao, object, fengHaoIndex);
	}

	void SmartObject::ActiveFengHaoChanged(struct TSmartObject* object)
	{
		if (self == nullptr || self->ActiveFengHaoChanged == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ActiveFengHaoChanged, object);
	}

	void SmartObject::DeleteFengHao(struct TSmartObject* object, i32 index)
	{
		if (self == nullptr || self->DeleteFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DeleteFengHao, object, index);
	}

	void SmartObject::ClearFengHao(struct TSmartObject* object)
	{
		if (self == nullptr || self->ClearFengHao == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->ClearFengHao, object);
	}

	float SmartObject::GetExpItemValue(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetExpItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetExpItemValue, object);
	}

	void SmartObject::SetExpItemValue(struct TSmartObject* object, float value)
	{
		if (self == nullptr || self->SetExpItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetExpItemValue, object, value);
	}

	float SmartObject::GetPowerItemValue(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPowerItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetPowerItemValue, object);
	}

	void SmartObject::SetPowerItemValue(struct TSmartObject* object, float value)
	{
		if (self == nullptr || self->SetPowerItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPowerItemValue, object, value);
	}

	float SmartObject::GetACItemValue(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetACItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetACItemValue, object);
	}

	void SmartObject::SetACItemValue(struct TSmartObject* object, float value)
	{
		if (self == nullptr || self->SetACItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetACItemValue, object, value);
	}

	float SmartObject::GetMACItemValue(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetMACItemValue == nullptr) {
			return 0.0f;
		}

		if (object == nullptr) {
			return 0.0f;
		}

		return wrap_call<float>(self->GetMACItemValue, object);
	}

	void SmartObject::SetMACItemValue(struct TSmartObject* object, float value)
	{
		if (self == nullptr || self->SetMACItemValue == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMACItemValue, object, value);
	}

	i16 SmartObject::GetMoveSpeed(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetMoveSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetMoveSpeed, object);
	}

	void SmartObject::SetMoveSpeed(struct TSmartObject* object, i16 value)
	{
		if (self == nullptr || self->SetMoveSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetMoveSpeed, object, value);
	}

	i16 SmartObject::GetAttackSpeed(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetAttackSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetAttackSpeed, object);
	}

	void SmartObject::SetAttackSpeed(struct TSmartObject* object, i16 value)
	{
		if (self == nullptr || self->SetAttackSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAttackSpeed, object, value);
	}

	i16 SmartObject::GetSpellSpeed(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetSpellSpeed == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i16>(self->GetSpellSpeed, object);
	}

	void SmartObject::SetSpellSpeed(struct TSmartObject* object, i16 value)
	{
		if (self == nullptr || self->SetSpellSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSpellSpeed, object, value);
	}

	void SmartObject::RefGameSpeed(struct TSmartObject* object)
	{
		if (self == nullptr || self->RefGameSpeed == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RefGameSpeed, object);
	}

	bool SmartObject::GetIsButch(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsButch == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsButch, object);
	}

	void SmartObject::SetIsButch(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsButch == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsButch, object, value);
	}

	bool SmartObject::GetIsTrainingNG(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsTrainingNG == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTrainingNG, object);
	}

	void SmartObject::SetIsTrainingNG(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsTrainingNG == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTrainingNG, object, value);
	}

	bool SmartObject::GetIsTrainingXF(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsTrainingXF == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTrainingXF, object);
	}

	void SmartObject::SetIsTrainingXF(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsTrainingXF == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTrainingXF, object, value);
	}

	bool SmartObject::GetIsOpenLastContinuous(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsOpenLastContinuous == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsOpenLastContinuous, object);
	}

	void SmartObject::SetIsOpenLastContinuous(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsOpenLastContinuous == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsOpenLastContinuous, object, value);
	}

	u8 SmartObject::GetContinuousMagicOrder(struct TSmartObject* object, i32 index)
	{
		if (self == nullptr || self->GetContinuousMagicOrder == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u8>(self->GetContinuousMagicOrder, object, index);
	}

	void SmartObject::SetContinuousMagicOrder(struct TSmartObject* object, i32 index, u8 value)
	{
		if (self == nullptr || self->SetContinuousMagicOrder == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetContinuousMagicOrder, object, index, value);
	}

	u32 SmartObject::GetPKDieLostExp(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPKDieLostExp == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetPKDieLostExp, object);
	}

	void SmartObject::SetPKDieLostExp(struct TSmartObject* object, u32 value)
	{
		if (self == nullptr || self->SetPKDieLostExp == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKDieLostExp, object, value);
	}

	i32 SmartObject::GetPKDieLostLevel(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPKDieLostLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKDieLostLevel, object);
	}

	void SmartObject::SetPKDieLostLevel(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->SetPKDieLostLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKDieLostLevel, object, value);
	}

	i32 SmartObject::GetPKPoint(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPKPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKPoint, object);
	}

	void SmartObject::SetPKPoint(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->SetPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKPoint, object, value);
	}

	void SmartObject::IncPKPoint(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->IncPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->IncPKPoint, object, value);
	}

	void SmartObject::DecPKPoint(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->DecPKPoint == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->DecPKPoint, object, value);
	}

	i32 SmartObject::GetPKLevel(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPKLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPKLevel, object);
	}

	void SmartObject::SetPKLevel(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->SetPKLevel == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPKLevel, object, value);
	}

	bool SmartObject::GetIsTeleport(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsTeleport == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsTeleport, object);
	}

	void SmartObject::SetIsTeleport(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsTeleport == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsTeleport, object, value);
	}

	bool SmartObject::GetIsRevival(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsRevival == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRevival, object);
	}

	void SmartObject::SetIsRevival(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsRevival == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRevival, object, value);
	}

	i32 SmartObject::GetRevivalTime(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetRevivalTime == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetRevivalTime, object);
	}

	void SmartObject::SetRevivalTime(struct TSmartObject* object, i32 value)
	{
		if (self == nullptr || self->SetRevivalTime == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetRevivalTime, object, value);
	}

	bool SmartObject::GetIsFlameRing(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsFlameRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFlameRing, object);
	}

	void SmartObject::SetIsFlameRing(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFlameRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFlameRing, object, value);
	}

	bool SmartObject::GetIsRecoveryRing(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsRecoveryRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRecoveryRing, object);
	}

	void SmartObject::SetIsRecoveryRing(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsRecoveryRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRecoveryRing, object, value);
	}

	bool SmartObject::GetIsMagicShield(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsMagicShield == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMagicShield, object);
	}

	void SmartObject::SetIsMagicShield(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsMagicShield == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMagicShield, object, value);
	}

	bool SmartObject::GetIsMuscleRing(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsMuscleRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMuscleRing, object);
	}

	void SmartObject::SetIsMuscleRing(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsMuscleRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMuscleRing, object, value);
	}

	bool SmartObject::GetIsFastTrain(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsFastTrain == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsFastTrain, object);
	}

	void SmartObject::SetIsFastTrain(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsFastTrain == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsFastTrain, object, value);
	}

	bool SmartObject::GetIsProbeNecklace(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsProbeNecklace == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsProbeNecklace, object);
	}

	void SmartObject::SetIsProbeNecklace(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsProbeNecklace == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsProbeNecklace, object, value);
	}

	bool SmartObject::GetIsRecallSuite(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsRecallSuite == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsRecallSuite, object);
	}

	void SmartObject::SetIsRecallSuite(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsRecallSuite == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsRecallSuite, object, value);
	}

	bool SmartObject::GetIsPirit(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsPirit == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPirit, object);
	}

	void SmartObject::SetIsPirit(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsPirit == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsPirit, object, value);
	}

	bool SmartObject::GetIsSupermanItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsSupermanItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsSupermanItem, object);
	}

	void SmartObject::SetIsSupermanItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsSupermanItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsSupermanItem, object, value);
	}

	bool SmartObject::GetIsExpItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsExpItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsExpItem, object);
	}

	void SmartObject::SetIsExpItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsExpItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsExpItem, object, value);
	}

	i32 SmartObject::GetExpItemRate(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetExpItemRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetExpItemRate, object);
	}

	bool SmartObject::GetIsPowerItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsPowerItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsPowerItem, object);
	}

	void SmartObject::SetIsPowerItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsPowerItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsPowerItem, object, value);
	}

	i32 SmartObject::GetPowerItemRate(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetPowerItemRate == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPowerItemRate, object);
	}

	bool SmartObject::GetIsGuildMove(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsGuildMove == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsGuildMove, object);
	}

	void SmartObject::SetIsGuildMove(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsGuildMove == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsGuildMove, object, value);
	}

	bool SmartObject::GetIsAngryRing(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsAngryRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsAngryRing, object);
	}

	void SmartObject::SetIsAngryRing(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsAngryRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsAngryRing, object, value);
	}

	bool SmartObject::GetIsStarRing(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsStarRing == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsStarRing, object);
	}

	void SmartObject::SetIsStarRing(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsStarRing == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsStarRing, object, value);
	}

	bool SmartObject::GetIsACItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsACItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsACItem, object);
	}

	void SmartObject::SetIsACItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsACItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsACItem, object, value);
	}

	bool SmartObject::GetIsMACItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsMACItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsMACItem, object);
	}

	void SmartObject::SetIsMACItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsMACItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsMACItem, object, value);
	}

	bool SmartObject::GetIsNoDropItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsNoDropItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNoDropItem, object);
	}

	void SmartObject::SetIsNoDropItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsNoDropItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsNoDropItem, object, value);
	}

	bool SmartObject::GetIsNoDropUseItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->GetIsNoDropUseItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetIsNoDropUseItem, object);
	}

	void SmartObject::SetIsNoDropUseItem(struct TSmartObject* object, bool value)
	{
		if (self == nullptr || self->SetIsNoDropUseItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetIsNoDropUseItem, object, value);
	}

	bool SmartObject::GetNGAbility(struct TSmartObject* object, struct TAbilityNG* abilityNG)
	{
		if (self == nullptr || self->GetNGAbility == nullptr || abilityNG == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetNGAbility, object, abilityNG);
	}

	void SmartObject::SetNGAbility(struct TSmartObject* object, struct TAbilityNG* value)
	{
		if (self == nullptr || self->SetNGAbility == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetNGAbility, object, value);
	}

	bool SmartObject::GetAlcohol(struct TSmartObject* object, struct TAbilityAlcohol* abilityAlcohol)
	{
		if (self == nullptr || self->GetAlcohol == nullptr || abilityAlcohol == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAlcohol, object, abilityAlcohol);
	}

	void SmartObject::SetAlcohol(struct TSmartObject* object, struct TAbilityAlcohol* value)
	{
		if (self == nullptr || self->SetAlcohol == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetAlcohol, object, value);
	}

	void SmartObject::RepairAllItem(struct TSmartObject* object)
	{
		if (self == nullptr || self->RepairAllItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RepairAllItem, object);
	}

	bool SmartObject::IsAllowUseMagic(struct TSmartObject* object, u16 magicID)
	{
		if (self == nullptr || self->IsAllowUseMagic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAllowUseMagic, object, magicID);
	}

	i32 SmartObject::SelectMagic(struct TSmartObject* object)
	{
		if (self == nullptr || self->SelectMagic == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->SelectMagic, object);
	}

	bool SmartObject::AttackTarget(struct TSmartObject* object, u16 magicID, u32 attackTime)
	{
		if (self == nullptr || self->AttackTarget == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AttackTarget, object, magicID, attackTime);
	}
}