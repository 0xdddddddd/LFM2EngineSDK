#include "lf_user_engine.h"

namespace LF
{
	UserEngine::UserEngine(struct TUserEngineFunc* self, struct TUserEngine* object)
		: self(self)
		, object(object)
	{
	}

	UserEngine::~UserEngine()
	{
	}

	struct TStringList* UserEngine::GetPlayerList()
	{
		if (self == nullptr || self->GetPlayerList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TStringList*>(self->GetPlayerList, object);
	}

	struct TPlayObject* UserEngine::GetPlayerByName(const char* chrName)
	{
		if (self == nullptr || self->GetPlayerByName == nullptr || chrName == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetPlayerByName, object, chrName);
	}

	struct TPlayObject* UserEngine::GetPlayerByUserID(const char* userID)
	{
		if (self == nullptr || self->GetPlayerByUserID == nullptr || userID == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetPlayerByUserID, object, userID);
	}

	struct TPlayObject* UserEngine::GetPlayerByObject(struct TObject* aObject)
	{
		if (self == nullptr || self->GetPlayerByObject == nullptr || aObject == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetPlayerByObject, object, aObject);
	}

	struct TPlayObject* UserEngine::GetOfflinePlayer(const char* userID)
	{
		if (self == nullptr || self->GetOfflinePlayer == nullptr || userID == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TPlayObject*>(self->GetOfflinePlayer, object, userID);
	}

	void UserEngine::KickPlayer(const char* chrName)
	{
		if (self == nullptr || self->KickPlayer == nullptr || chrName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->KickPlayer, object, chrName);
	}

	struct TStringList* UserEngine::GetHeroList()
	{
		if (self == nullptr || self->GetHeroList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TStringList*>(self->GetHeroList, object);
	}

	struct THeroObject* UserEngine::GetHeroByName(const char* chrName)
	{
		if (self == nullptr || self->GetHeroByName == nullptr || chrName == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct THeroObject*>(self->GetHeroByName, object, chrName);
	}

	bool UserEngine::KickHero(const char* chrName)
	{
		if (self == nullptr || self->KickHero == nullptr || chrName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->KickHero, object, chrName);
	}

	struct TList* UserEngine::GetMerchantList()
	{
		if (self == nullptr || self->GetMerchantList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetMerchantList, object);
	}

	struct TList* UserEngine::GetCustomNpcConfigList()
	{
		if (self == nullptr || self->GetCustomNpcConfigList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetCustomNpcConfigList, object);
	}

	struct TList* UserEngine::GetQuestNPCList()
	{
		if (self == nullptr || self->GetQuestNPCList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetQuestNPCList, object);
	}

	struct TNormNpc* UserEngine::GetManageNPC()
	{
		if (self == nullptr || self->GetManageNPC == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->GetManageNPC, object);
	}

	struct TNormNpc* UserEngine::GetFunctionNPC()
	{
		if (self == nullptr || self->GetFunctionNPC == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->GetFunctionNPC, object);
	}

	struct TNormNpc* UserEngine::GetRobotNPC()
	{
		if (self == nullptr || self->GetRobotNPC == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->GetRobotNPC, object);
	}

	struct TNormNpc* UserEngine::MissionNPC()
	{
		if (self == nullptr || self->MissionNPC == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->MissionNPC, object);
	}

	struct TNormNpc* UserEngine::FindMerchant(struct TObject* aObject)
	{
		if (self == nullptr || self->FindMerchant == nullptr || aObject == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->FindMerchant, object, aObject);
	}

	struct TNormNpc* UserEngine::FindMerchantByPos(const char* mapName, i32 nX, i32 nY)
	{
		if (self == nullptr || self->FindMerchantByPos == nullptr || mapName == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->FindMerchantByPos, object, mapName, nX, nY);
	}

	struct TNormNpc* UserEngine::FindQuestNPC(struct TObject* aObject)
	{
		if (self == nullptr || self->FindQuestNPC == nullptr || aObject == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TNormNpc*>(self->FindQuestNPC, object, aObject);
	}

	struct TList* UserEngine::GetMagicList()
	{
		if (self == nullptr || self->GetMagicList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetMagicList, object);
	}

	struct TList* UserEngine::GetCustomMagicConfigList()
	{
		if (self == nullptr || self->GetCustomMagicConfigList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetCustomMagicConfigList, object);
	}

	struct TMagicACList* UserEngine::GetMagicACList()
	{
		if (self == nullptr || self->GetMagicACList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMagicACList*>(self->GetMagicACList, object);
	}

	bool UserEngine::FindMagicByName(const char* magName, struct TMagic* magic)
	{
		if (self == nullptr || self->FindMagicByName == nullptr || magName == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindMagicByName, object, magName, magic);
	}

	bool UserEngine::FindMagicByIndex(i32 magIdx, struct TMagic* magic)
	{
		if (self == nullptr || self->FindMagicByIndex == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindMagicByIndex, object, magIdx, magic);
	}

	bool UserEngine::FindMagicByNameEx(const char* magName, i32 magAttr, struct TMagic* magic)
	{
		if (self == nullptr || self->FindMagicByNameEx == nullptr || magName == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindMagicByNameEx, object, magName, magAttr, magic);
	}

	bool UserEngine::FindMagicByIndexEx(i32 magIdx, i32 magAttr, struct TMagic* magic)
	{
		if (self == nullptr || self->FindMagicByIndexEx == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindMagicByIndexEx, object, magIdx, magAttr, magic);
	}

	bool UserEngine::FindHeroMagicByName(const char* magName, struct TMagic* magic)
	{
		if (self == nullptr || self->FindHeroMagicByName == nullptr || magName == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindHeroMagicByName, object, magName, magic);
	}

	bool UserEngine::FindHeroMagicByIndex(i32 magIdx, struct TMagic* magic)
	{
		if (self == nullptr || self->FindHeroMagicByIndex == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindHeroMagicByIndex, object, magIdx, magic);
	}

	bool UserEngine::FindHeroMagicByNameEx(const char* magName, i32 magAttr, struct TMagic* magic)
	{
		if (self == nullptr || self->FindHeroMagicByNameEx == nullptr || magName == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindHeroMagicByNameEx, object, magName, magAttr, magic);
	}

	bool UserEngine::FindHeroMagicByIndexEx(i32 magIdx, i32 magAttr, struct TMagic* magic)
	{
		if (self == nullptr || self->FindHeroMagicByIndexEx == nullptr || magic == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->FindHeroMagicByIndexEx, object, magIdx, magAttr, magic);
	}

	struct TList* UserEngine::GetStdItemList()
	{
		if (self == nullptr || self->GetStdItemList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->GetStdItemList, object);
	}

	bool UserEngine::GetStdItemByName(const char* itemName, struct TStdItem* stdItem)
	{
		if (self == nullptr || self->GetStdItemByName == nullptr || itemName == nullptr || stdItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStdItemByName, object, itemName, stdItem);
	}

	bool UserEngine::GetStdItemByIndex(i32 itemIdx, struct TStdItem* stdItem)
	{
		if (self == nullptr || self->GetStdItemByIndex == nullptr || stdItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStdItemByIndex, object, itemIdx, stdItem);
	}

	bool UserEngine::GetStdItemName(i32 itemIdx, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetStdItemName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetStdItemName, object, itemIdx, dest, destLen);
	}

	i32 UserEngine::GetStdItemIndex(const char* itemName)
	{
		if (self == nullptr || self->GetStdItemIndex == nullptr || itemName == nullptr) {
			return -1;
		}

		if (object == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->GetStdItemIndex, object, itemName);
	}

	struct TList* UserEngine::MonsterList()
	{
		if (self == nullptr || self->MonsterList == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->MonsterList, object);
	}

	bool UserEngine::SendBroadCastMsg(const char* sMsg, i32 fColor, i32 bColor, i32 msgType)
	{
		if (self == nullptr || self->SendBroadCastMsg == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SendBroadCastMsg, object, sMsg, fColor, bColor, msgType);
	}

	bool UserEngine::SendBroadCastMsgExt(const char* sMsg, i32 msgType)
	{
		if (self == nullptr || self->SendBroadCastMsgExt == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SendBroadCastMsgExt, object, sMsg, msgType);
	}

	bool UserEngine::SendTopBroadCastMsg(const char* sMsg, i32 fColor, i32 bColor, i32 nTime, i32 msgType)
	{
		if (self == nullptr || self->SendTopBroadCastMsg == nullptr || sMsg == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SendTopBroadCastMsg, object, sMsg, fColor, bColor, nTime, msgType);
	}

	void UserEngine::SendMoveMsg(const char* sMsg, void* btFColor, void* btBColor, i32 nY, i32 nMoveCount, i32 nFontSize, i32 nMarqueeTime)
	{
		if (self == nullptr || self->SendMoveMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendMoveMsg, object, sMsg, btFColor, btBColor, nY, nMoveCount, nFontSize, nMarqueeTime);
	}

	void UserEngine::SendCenterMsg(const char* sMsg, void* btFColor, void* btBColor, i32 nTime)
	{
		if (self == nullptr || self->SendCenterMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendCenterMsg, object, sMsg, btFColor, btBColor, nTime);
	}

	void UserEngine::SendNewLineMsg(const char* sMsg, void* btFColor, void* btBColor, void* btFontSize, i32 nY, i32 nShowMsgTime, i32 nDrawType)
	{
		if (self == nullptr || self->SendNewLineMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendNewLineMsg, object, sMsg, btFColor, btBColor, btFontSize, nY, nShowMsgTime, nDrawType);
	}

	void UserEngine::SendSuperMoveMsg(const char* sMsg, void* btFColor, void* btBColor, void* btFontSize, i32 nY, i32 nMoveCount)
	{
		if (self == nullptr || self->SendSuperMoveMsg == nullptr || sMsg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSuperMoveMsg, object, sMsg, btFColor, btBColor, btFontSize, nY, nMoveCount);
	}

	void UserEngine::SendSceneShake(i32 count)
	{
		if (self == nullptr || self->SendSceneShake == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendSceneShake, object, count);
	}

	bool UserEngine::CopyToUserItemFromName(const char* itemName, struct TUserItem* userItem)
	{
		if (self == nullptr || self->CopyToUserItemFromName == nullptr || itemName == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CopyToUserItemFromName, object, itemName, userItem);
	}

	bool UserEngine::CopyToUserItemFromItem(struct TStdItem* stdItem, i32 itemIndex, struct TUserItem* userItem)
	{
		if (self == nullptr || self->CopyToUserItemFromItem == nullptr || stdItem == nullptr || userItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CopyToUserItemFromItem, object, stdItem, itemIndex, userItem);
	}

	void UserEngine::RandomUpgradeItem(struct TUserItem* userItem)
	{
		if (self == nullptr || self->RandomUpgradeItem == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RandomUpgradeItem, object, userItem);
	}

	void UserEngine::RandomItemNewAbil(struct TUserItem* userItem)
	{
		if (self == nullptr || self->RandomItemNewAbil == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->RandomItemNewAbil, object, userItem);
	}

	void UserEngine::GetUnknowItemValue(struct TUserItem* userItem)
	{
		if (self == nullptr || self->GetUnknowItemValue == nullptr || userItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GetUnknowItemValue, object, userItem);
	}

	i32 UserEngine::GetAllDummyCount()
	{
		if (self == nullptr || self->GetAllDummyCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetAllDummyCount, object);
	}

	i32 UserEngine::GetMapDummyCount(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetMapDummyCount == nullptr || envir == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMapDummyCount, object, envir);
	}

	i32 UserEngine::GetOfflineCount()
	{
		if (self == nullptr || self->GetOfflineCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetOfflineCount, object);
	}

	i32 UserEngine::GetRealPlayerCount()
	{
		if (self == nullptr || self->GetRealPlayerCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetRealPlayerCount, object);
	}
}