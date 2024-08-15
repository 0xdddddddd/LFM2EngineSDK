#ifndef __LF_SMART_OBJECT_H__
#define __LF_SMART_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class SmartObject
	{
	public:
		explicit SmartObject(struct TSmartObjectFunc* self);
		virtual ~SmartObject();
	public:
		struct TList* GetMagicList();
		bool GetUseItem(i32 Index, struct TUserItem* UserItem);
		i32 GetJewelryBoxStatus();
		void SetJewelryBoxStatus(i32 Value);
		bool GetJewelryItem(i32 Index, struct TUserItem* UserItem);
		bool GetIsShowGodBless();
		void SetIsShowGodBless(bool Value);
		bool GetGodBlessItemsState(i32 Index);
		void SetGodBlessItemsState(i32 Index, bool Value);
		bool GetGodBlessItem(i32 Index, struct TUserItem* UserItem);
		struct TList* GetFengHaoItems();
		i32 GetActiveFengHao();
		void SetActiveFengHao(i32 FengHaoIndex);
		void ActiveFengHaoChanged();
		void DeleteFengHao(i32 Index);
		void ClearFengHao();
		i16 GetMoveSpeed();
		void SetMoveSpeed(i16 Value);
		i16 GetAttackSpeed();
		void SetAttackSpeed(i16 Value);
		i16 GetSpellSpeed();
		void SetSpellSpeed(i16 Value);
		void RefGameSpeed();
		bool GetIsButch();
		void SetIsButch(bool Value);
		bool GetIsTrainingNG();
		void SetIsTrainingNG(bool Value);
		bool GetIsTrainingXF();
		void SetIsTrainingXF(bool Value);
		bool GetIsOpenLastContinuous();
		void SetIsOpenLastContinuous(bool Value);
		u8 GetContinuousMagicOrder(i32 Index);
		void SetContinuousMagicOrder(i32 Index, u8 Value);
		u32 GetPKDieLostExp();
		void SetPKDieLostExp(u32 Value);
		i32 GetPKDieLostLevel();
		void SetPKDieLostLevel(i32 Value);
		i32 GetPKPoint();
		void SetPKPoint(i32 Value);
		void IncPKPoint(i32 Value);
		void DecPKPoint(i32 Value);
		i32 GetPKLevel();
		void SetPKLevel(i32 Value);
		bool GetIsTeleport();
		void SetIsTeleport(bool Value);
		bool GetIsRevival();
		void SetIsRevival(bool Value);
		i32 GetRevivalTime();
		void SetRevivalTime(i32 Value);
		bool GetIsFlameRing();
		void SetIsFlameRing(bool Value);
		bool GetIsRecoveryRing();
		void SetIsRecoveryRing(bool Value);
		bool GetIsMagicShield();
		void SetIsMagicShield(bool Value);
		bool GetIsMuscleRing();
		void SetIsMuscleRing(bool Value);
		bool GetIsFastTrain();
		void SetIsFastTrain(bool Value);
		bool GetIsProbeNecklace();
		void SetIsProbeNecklace(bool Value);
		bool GetIsRecallSuite();
		void SetIsRecallSuite(bool Value);
		bool GetIsPirit();
		void SetIsPirit(bool Value);
		bool GetIsSupermanItem();
		void SetIsSupermanItem(bool Value);
		bool GetIsExpItem();
		void SetIsExpItem(bool Value);
		float GetExpItemValue();
		void SetExpItemValue(float Value);
		i32 GetExpItemRate();
		bool GetIsPowerItem();
		void SetIsPowerItem(bool Value);
		float GetPowerItemValue();
		void SetPowerItemValue(float Value);
		i32 GetPowerItemRate();
		bool GetIsGuildMove();
		void SetIsGuildMove(bool Value);
		bool GetIsAngryRing();
		void SetIsAngryRing(bool Value);
		bool GetIsStarRing();
		void SetIsStarRing(bool Value);
		bool GetIsACItem();
		void SetIsACItem(bool Value);
		float GetACItemValue();
		void SetACItemValue(float Value);
		bool GetIsMACItem();
		void SetIsMACItem(bool Value);
		float GetMACItemValue();
		void SetMACItemValue(float Value);
		bool GetIsNoDropItem();
		void SetIsNoDropItem(bool Value);
		bool GetIsNoDropUseItem();
		void SetIsNoDropUseItem(bool Value);
		bool GetNGAbility(struct TAbilityNG* AbilityNG);
		void SetNGAbility(struct TAbilityNG* Value);
		bool GetAlcohol(struct TAbilityAlcohol* AbilityAlcohol);
		void SetAlcohol(struct TAbilityAlcohol* Value);
		void RepairAllItem();
		bool IsAllowUseMagic(u16 MagicID);
		i32 SelectMagic();
		bool AttackTarget(u16 MagicID, u32 AttackTime);
	private:
		struct TSmartObjectFunc* self;
		struct TSmartObject*	 object;
	};
}
#endif // __LF_SMART_OBJECT_H__