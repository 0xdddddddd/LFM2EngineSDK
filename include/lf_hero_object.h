#ifndef __LF_HERO_OBJECT_H__
#define __LF_HERO_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class HeroObject
	{
	public:
		explicit HeroObject(struct THeroObjectFunc* self);
		virtual ~HeroObject();
	public:
		u8 GetAttackMode(struct THeroObject* hero);
		bool SetAttackMode(struct THeroObject* hero, u8 value, bool showSysMsg);
		void SetNextAttackMode(struct THeroObject* hero);
		i32 GetBagCount(struct THeroObject* hero);
		i32 GetAngryValue(struct THeroObject* hero);
		float GetLoyalPoint(struct THeroObject* hero);
		void SetLoyalPoint(struct THeroObject* hero, float value);
		void SendLoyalPointChanged(struct THeroObject* hero);
		bool IsDeputy(struct THeroObject* hero);
		bool GetMasterName(struct THeroObject* hero, char* dest, u32* destLen);
		i32 GetQuestFlagStatus(struct THeroObject* hero, i32 nFlag);
		void SetQuestFlagStatus(struct THeroObject* hero, i32 nFlag, i32 value);
		void SendUseItems(struct THeroObject* hero);
		void SendBagItems(struct THeroObject* hero);
		void SendJewelryBoxItems(struct THeroObject* hero);
		void SendGodBlessItems(struct THeroObject* hero);
		void SendOpenGodBlessItem(struct THeroObject* hero, i32 index);
		void SendCloseGodBlessItem(struct THeroObject* hero, i32 index);
		void SendAddItem(struct THeroObject* hero, struct TUserItem* userItem);
		void SendDelItem(struct THeroObject* hero, struct TUserItem* userItem);
		void SendUpdateItem(struct THeroObject* hero, struct TUserItem* userItem);
		void SendItemDuraChange(struct THeroObject* hero, i32 itemWhere, struct TUserItem* userItem);
		void SendUseMagics(struct THeroObject* hero);
		void SendAddMagic(struct THeroObject* hero, struct TUserMagic* userMagic);
		void SendDelMagic(struct THeroObject* hero, struct TUserMagic* userMagic);
		bool FindGroupMagic(struct THeroObject* hero, struct TUserMagic* userMagic);
		i32 GetGroupMagicId(struct THeroObject* hero);
		void SendFengHaoItems(struct THeroObject* hero);
		void SendAddFengHaoItem(struct THeroObject* hero, struct TUserItem* userItem);
		void SendDelFengHaoItem(struct THeroObject* hero, i32 index);
		void IncExp(struct THeroObject* hero, u32 dwExp);
		void IncExpNG(struct THeroObject* hero, u32 dwExp);
		bool IsOldClient(struct THeroObject* hero);
	private:
		struct THeroObjectFunc* self;
	};
}

#endif // __LF_HERO_OBJECT_H__