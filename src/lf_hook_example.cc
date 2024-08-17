#include "lf_hook_example.h"

namespace
{
	bool Init(struct TAppFuncDef* AppFunc, u32 AppFuncCrc, u32 ExtParam, char* Desc, u32& DescLen)
	{
		return false;
	}

	void UnInit()
	{

	}
	
	bool HookGetIPLocal(char* sIPaddr, char* Dest, u32& DestLen)
	{
		return false;
	}

	void HookEngineReadyToStart()
	{

	}

	void HookEngineStartComplete()
	{

	}

	void HookEngineReloadComplete(i32 ReloadType)
	{

	}

	bool HookLoadScriptFile(char* FileName, struct TMemoryStream* MemStream)
	{
		return false;
	}

	bool HookDecryptScriptFile(char* Src, u32 SrcLen, char* Dest, u32& DestLen)
	{
		return false;
	}

	bool HookDecryptScriptLine(char* Src, u32 SrcLen, char* Dest, u32& DestLen)
	{
		return false;
	}

	i32 HookNpcLoadConditionCmd(char* pCmd)
	{
		return 0;
	}

	bool HookNpcConditionProcess(struct ScriptCmdParam* ScriptParam)
	{
		return false;
	}

	i32 HookNpcLoadActionCmd(char* pCmd)
	{
		return 0;
	}

	void HookNpcActionProcess(struct ScriptCmdParam* ScriptParam, bool& boSendMerChantSay, bool& boBreak)
	{

	}

	bool HookUserSelect(struct TMerchant* Merchant, struct TPlayObject* PlayObject, char* sLabel, char* sMsg)
	{
		return false;
	}

	bool HookUserCommand(struct TPlayObject* PlayObject, char* pCmd, char* pParam1, char* pParam2,
						 char* pParam3, char* pParam4, char* pParam5, char* pParam6, char* pParam7)
	{
		return false;
	}

	bool HookGetVariableText(struct TNormNpc* NPC, struct TPlayObject* PlayObject,
							 char* sVariable, char* sValue, u32& nValueLen)
	{
		return false;
	}

	void HookBaseObjectCreate(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectRecalAbilBegin(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectRecalAbilEnd(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectRun(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectProcessMsg(struct TBaseObject* BaseObject, i16 wIdent, i32 wParam,
								  i32 nParam1, i32 nParam2, i32 nParam3,
								  struct TObject* MsgObject, u32 dwDeliveryTime,
								  char* pMsg, bool& boReturn)
	{

	}

	void HookBaseObjectStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject)
	{

	}

	void HookBaseObjectMagicStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject, i32 MagicIdx)
	{

	}

	void HookBaseObjectAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower)
	{

	}

	void HookBaseObjectMagicAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower)
	{

	}

	void HookBaseObjectDie(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectMakeGhost(struct TBaseObject* BaseObject)
	{

	}

	void HookBaseObjectFree(struct TBaseObject* BaseObject)
	{

	}

	void HookPlayerCreate(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerLogin1(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerLogin2(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerLogin3(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerLogin4(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerRun(struct TPlayObject* PlayObject)
	{

	}

	void HookPlayerViewRangeNewObject(struct TPlayObject* PlayeObject, struct TObject* AObject, i32 AObjectX, i32 AObjectY)
	{

	}

	void HookPlayerProcessMsgBegin(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								   i32 nParam1, i32 nParam2, i32 nParam3,
								   struct TObject* MsgObject, u32 dwDeliveryTime,
								   char* pMsg, bool& boReturn)
	{

	}

	void HookPlayerProcessMsgEnd(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								 i32 nParam1, i32 nParam2, i32 nParam3,
								 struct TObject* MsgObject, u32 dwDeliveryTime,
								 char* pMsg, bool& boReturn)
	{

	}

	void HookPlayerFree(struct TPlayObject* PlayObject)
	{

	}

	void HookDummyObjectRunBegin(struct TDummyObject* DummyObject, bool& boReturn)
	{

	}

	void HookDummyObjectRunEnd(struct TDummyObject* DummyObject)
	{

	}

	void HookHeroObjectCreate(struct THeroObject* Hero)
	{

	}

	void HookHeroObjectFree(struct THeroObject* Hero)
	{

	}
}