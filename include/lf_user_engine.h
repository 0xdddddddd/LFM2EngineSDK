#ifndef __LF_USERENGINE_H__
#define __LF_USERENGINE_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	// TUserEngine ∂‘œÛ 
	class UserEngine
	{
	public:
		explicit UserEngine(struct TUserEngineFunc* self);
		virtual ~UserEngine();
	public:
		struct TStringList* GetPlayerList();
		struct TPlayObject* GetPlayerByName(const char* chrName);
		struct TPlayObject* GetPlayerByUserID(const char* userID);
		struct TPlayObject* GetPlayerByObject(struct TObject* aObject);
		struct TPlayObject* GetOfflinePlayer(const char* userID);
		void KickPlayer(const char* chrName);
		struct TStringList* GetHeroList();
		struct THeroObject* GetHeroByName(const char* chrName);
		bool KickHero(const char* chrName);
		struct TList* GetMerchantList();
		struct TList* GetCustomNpcConfigList();
		struct TList* GetQuestNPCList();
		struct TNormNpc* GetManageNPC();
		struct TNormNpc* GetFunctionNPC();
		struct TNormNpc* GetRobotNPC();
		struct TNormNpc* MissionNPC();
		struct TNormNpc* FindMerchant(struct TObject* aObject);
		struct TNormNpc* FindMerchantByPos(const char* mapName, i32 nX, i32 nY);
		struct TNormNpc* FindQuestNPC(struct TObject* aObject);
		struct TList* GetMagicList();
		struct TList* GetCustomMagicConfigList();
		struct TMagicACList* GetMagicACList();
		bool FindMagicByName(const char* magName, struct TMagic* magic);
		bool FindMagicByIndex(i32 magIdx, struct TMagic* magic);
		bool FindMagicByNameEx(const char* magName, i32 magAttr, struct TMagic* magic);
		bool FindMagicByIndexEx(i32 magIdx, i32 magAttr, struct TMagic* magic);
		bool FindHeroMagicByName(const char* magName, struct TMagic* magic);
		bool FindHeroMagicByIndex(i32 magIdx, struct TMagic* magic);
		bool FindHeroMagicByNameEx(const char* magName, i32 magAttr, struct TMagic* magic);
		bool FindHeroMagicByIndexEx(i32 magIdx, i32 magAttr, struct TMagic* magic);
		struct TList* GetStdItemList();
		bool GetStdItemByName(const char* itemName, struct TStdItem* stdItem);
		bool GetStdItemByIndex(i32 itemIdx, struct TStdItem* stdItem);
		bool GetStdItemName(i32 itemIdx, char* dest, u32* destLen);
		i32 GetStdItemIndex(const char* itemName);
		struct TList* MonsterList();
		bool SendBroadCastMsg(const char* sMsg, i32 fColor, i32 bColor, i32 msgType);
		bool SendBroadCastMsgExt(const char* sMsg, i32 msgType);
		bool SendTopBroadCastMsg(const char* sMsg, i32 fColor, i32 bColor, i32 nTime, i32 msgType);
		void SendMoveMsg(const char* sMsg, u8 btFColor, u8 btBColor, i32 nY, i32 nMoveCount, i32 nFontSize, i32 nMarqueeTime);
		void SendCenterMsg(const char* sMsg, u8 btFColor, u8 btBColor, i32 nTime);
		void SendNewLineMsg(const char* sMsg, u8 btFColor, u8 btBColor, u8 btFontSize, i32 nY, i32 nShowMsgTime, i32 nDrawType);
		void SendSuperMoveMsg(const char* sMsg, u8 btFColor, u8 btBColor, u8 btFontSize, i32 nY, i32 nMoveCount);
		void SendSceneShake(i32 count);
		bool CopyToUserItemFromName(const char* itemName, struct TUserItem* userItem);
		bool CopyToUserItemFromItem(struct TStdItem* stdItem, i32 itemIndex, struct TUserItem* userItem);
		void RandomUpgradeItem(struct TUserItem* userItem);
		void RandomItemNewAbil(struct TUserItem* userItem);
		void GetUnknowItemValue(struct TUserItem* userItem);
		i32 GetAllDummyCount();
		i32 GetMapDummyCount(struct TEnvirnoment* envir);
		i32 GetOfflineCount();
		i32 GetRealPlayerCount();
	private:
		struct TUserEngineFunc* self;
	};

}

#endif // __LF_USERENGINE_H__