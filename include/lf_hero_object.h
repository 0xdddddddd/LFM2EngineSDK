#ifndef __LF_HERO_OBJECT_H__
#define __LF_HERO_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class HeroObject
	{
	public:
		HeroObject(struct THeroObjectFunc* _self, struct THeroObject* _object)
			: self(_self), object(_object) {}
	public:
		u8 GetAttackMode();
		bool SetAttackMode(u8 Value, bool ShowSysMsg);
		void SetNextAttackMode();
		i32 GetBagCount();
		i32 GetAngryValue();
		float GetLoyalPoint();
		void SetLoyalPoint(float Value);
		void SendLoyalPointChanged();
		bool IsDeputy();
		bool GetMasterName(char* Dest, u32* DestLen);
		i32 GetQuestFlagStatus(i32 nFlag);
		void SetQuestFlagStatus(i32 nFlag, i32 Value);
		void SendUseItems();
		void SendBagItems();
		void SendJewelryBoxItems();
		void SendGodBlessItems();
		void SendOpenGodBlessItem(i32 Index);
		void SendCloseGodBlessItem(i32 Index);
		void SendAddItem(struct TUserItem* UserItem);
		void SendDelItem(struct TUserItem* UserItem);
		void SendUpdateItem(struct TUserItem* UserItem);
		void SendItemDuraChange(i32 ItemWhere, struct TUserItem* UserItem);
		void SendUseMagics();
		void SendAddMagic(struct TUserMagic* UserMagic);
		void SendDelMagic(struct TUserMagic* UserMagic);
		bool FindGroupMagic(struct TUserMagic* UserMagic);
		i32 GetGroupMagicId();
		void SendFengHaoItems();
		void SendAddFengHaoItem(struct TUserItem* UserItem);
		void SendDelFengHaoItem(i32 Index);
		void IncExp(u32 dwExp);
		void IncExpNG(u32 dwExp);
		bool IsOldClient();
	private:
		struct THeroObjectFunc* self;
		struct THeroObject* object;
	};
}

#endif // __LF_HERO_OBJECT_H__