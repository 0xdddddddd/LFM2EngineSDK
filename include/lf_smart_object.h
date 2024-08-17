#ifndef __LF_SMART_OBJECT_H__
#define __LF_SMART_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	// _TSmartObject ∂‘œÛ£¨ºÃ≥–_TBaseObject 
	class SmartObject
	{
	public:
		explicit SmartObject(struct TSmartObjectFunc* self);
		virtual ~SmartObject();
	public:
		struct TList* GetMagicList(struct TSmartObject* object);
		bool GetUseItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem);
		i32 GetJewelryBoxStatus(struct TSmartObject* object);
		void SetJewelryBoxStatus(struct TSmartObject* object, i32 value);
		bool GetJewelryItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem);
		bool GetIsShowGodBless(struct TSmartObject* object);
		void SetIsShowGodBless(struct TSmartObject* object, bool value);
		bool GetGodBlessItemsState(struct TSmartObject* object, i32 index);
		void SetGodBlessItemsState(struct TSmartObject* object, i32 index, bool value);
		bool GetGodBlessItem(struct TSmartObject* object, i32 index, struct TUserItem* userItem);
		struct TList* GetFengHaoItems(struct TSmartObject* object);
		i32 GetActiveFengHao(struct TSmartObject* object);
		void SetActiveFengHao(struct TSmartObject* object, i32 fengHaoIndex);
		void ActiveFengHaoChanged(struct TSmartObject* object);
		void DeleteFengHao(struct TSmartObject* object, i32 index);
		void ClearFengHao(struct TSmartObject* object);
		i16 GetMoveSpeed(struct TSmartObject* object);
		void SetMoveSpeed(struct TSmartObject* object, i16 value);
		i16 GetAttackSpeed(struct TSmartObject* object);
		void SetAttackSpeed(struct TSmartObject* object, i16 value);
		i16 GetSpellSpeed(struct TSmartObject* object);
		void SetSpellSpeed(struct TSmartObject* object, i16 value);
		void RefGameSpeed(struct TSmartObject* object);
		bool GetIsButch(struct TSmartObject* object);
		void SetIsButch(struct TSmartObject* object, bool value);
		bool GetIsTrainingNG(struct TSmartObject* object);
		void SetIsTrainingNG(struct TSmartObject* object, bool value);
		bool GetIsTrainingXF(struct TSmartObject* object);
		void SetIsTrainingXF(struct TSmartObject* object, bool value);
		bool GetIsOpenLastContinuous(struct TSmartObject* object);
		void SetIsOpenLastContinuous(struct TSmartObject* object, bool value);
		u8 GetContinuousMagicOrder(struct TSmartObject* object, i32 index);
		void SetContinuousMagicOrder(struct TSmartObject* object, i32 index, u8 value);
		u32 GetPKDieLostExp(struct TSmartObject* object);
		void SetPKDieLostExp(struct TSmartObject* object, u32 value);
		i32 GetPKDieLostLevel(struct TSmartObject* object);
		void SetPKDieLostLevel(struct TSmartObject* object, i32 value);
		i32 GetPKPoint(struct TSmartObject* object);
		void SetPKPoint(struct TSmartObject* object, i32 value);
		void IncPKPoint(struct TSmartObject* object, i32 value);
		void DecPKPoint(struct TSmartObject* object, i32 value);
		i32 GetPKLevel(struct TSmartObject* object);
		void SetPKLevel(struct TSmartObject* object, i32 value);
		bool GetIsTeleport(struct TSmartObject* object);
		void SetIsTeleport(struct TSmartObject* object, bool value);
		bool GetIsRevival(struct TSmartObject* object);
		void SetIsRevival(struct TSmartObject* object, bool value);
		i32 GetRevivalTime(struct TSmartObject* object);
		void SetRevivalTime(struct TSmartObject* object, i32 value);
		bool GetIsFlameRing(struct TSmartObject* object);
		void SetIsFlameRing(struct TSmartObject* object, bool value);
		bool GetIsRecoveryRing(struct TSmartObject* object);
		void SetIsRecoveryRing(struct TSmartObject* object, bool value);
		bool GetIsMagicShield(struct TSmartObject* object);
		void SetIsMagicShield(struct TSmartObject* object, bool value);
		bool GetIsMuscleRing(struct TSmartObject* object);
		void SetIsMuscleRing(struct TSmartObject* object, bool value);
		bool GetIsFastTrain(struct TSmartObject* object);
		void SetIsFastTrain(struct TSmartObject* object, bool value);
		bool GetIsProbeNecklace(struct TSmartObject* object);
		void SetIsProbeNecklace(struct TSmartObject* object, bool value);
		bool GetIsRecallSuite(struct TSmartObject* object);
		void SetIsRecallSuite(struct TSmartObject* object, bool value);
		bool GetIsPirit(struct TSmartObject* object);
		void SetIsPirit(struct TSmartObject* object, bool value);
		bool GetIsSupermanItem(struct TSmartObject* object);
		void SetIsSupermanItem(struct TSmartObject* object, bool value);
		bool GetIsExpItem(struct TSmartObject* object);
		void SetIsExpItem(struct TSmartObject* object, bool value);
		float GetExpItemValue(struct TSmartObject* object);
		void SetExpItemValue(struct TSmartObject* object, float value);
		i32 GetExpItemRate(struct TSmartObject* object);
		bool GetIsPowerItem(struct TSmartObject* object);
		void SetIsPowerItem(struct TSmartObject* object, bool value);
		float GetPowerItemValue(struct TSmartObject* object);
		void SetPowerItemValue(struct TSmartObject* object, float value);
		i32 GetPowerItemRate(struct TSmartObject* object);
		bool GetIsGuildMove(struct TSmartObject* object);
		void SetIsGuildMove(struct TSmartObject* object, bool value);
		bool GetIsAngryRing(struct TSmartObject* object);
		void SetIsAngryRing(struct TSmartObject* object, bool value);
		bool GetIsStarRing(struct TSmartObject* object);
		void SetIsStarRing(struct TSmartObject* object, bool value);
		bool GetIsACItem(struct TSmartObject* object);
		void SetIsACItem(struct TSmartObject* object, bool value);
		float GetACItemValue(struct TSmartObject* object);
		void SetACItemValue(struct TSmartObject* object, float value);
		bool GetIsMACItem(struct TSmartObject* object);
		void SetIsMACItem(struct TSmartObject* object, bool value);
		float GetMACItemValue(struct TSmartObject* object);
		void SetMACItemValue(struct TSmartObject* object, float value);
		bool GetIsNoDropItem(struct TSmartObject* object);
		void SetIsNoDropItem(struct TSmartObject* object, bool value);
		bool GetIsNoDropUseItem(struct TSmartObject* object);
		void SetIsNoDropUseItem(struct TSmartObject* object, bool value);
		bool GetNGAbility(struct TSmartObject* object, struct TAbilityNG* abilityNG);
		void SetNGAbility(struct TSmartObject* object, struct TAbilityNG* value);
		bool GetAlcohol(struct TSmartObject* object, struct TAbilityAlcohol* abilityAlcohol);
		void SetAlcohol(struct TSmartObject* object, struct TAbilityAlcohol* value);
		void RepairAllItem(struct TSmartObject* object);
		bool IsAllowUseMagic(struct TSmartObject* object, u16 magicID);
		i32 SelectMagic(struct TSmartObject* object);
		bool AttackTarget(struct TSmartObject* object, u16 magicID, u32 attackTime);
	private:
		struct TSmartObjectFunc* self;
	};
}
#endif // __LF_SMART_OBJECT_H__