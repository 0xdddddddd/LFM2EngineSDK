#ifndef __LF_HOOK_H__
#define __LF_HOOK_H__

#include "lf_platform.h"
#include "lf_struct.h"

// Not for direct use
// For reference only
namespace
{
	// 插件初始化
	bool Init(struct TAppFuncDef* AppFunc, u32 AppFuncCrc, u32 ExtParam, char* Desc, u32& DescLen);

	// 插件反初始化
	void UnInit();

	// Hook IP归属地查询
	bool HookGetIPLocal(char* sIPaddr, char* Dest, u32& DestLen);

	// 引擎准备运行
	void HookEngineReadyToStart();

	// 引擎运行完成
	void HookEngineStartComplete();

	// HOOK M2重新加载信息完成 (控制-> 重新加载 ->... 加载完成)
	void HookEngineReloadComplete(i32 ReloadType);

	// Hook 加载脚本文件
	bool HookLoadScriptFile(char* FileName, struct TMemoryStream* MemStream);

	// Hook 脚本文件解密 (标记行除外，剩下的部分一次解密)
	bool HookDecryptScriptFile(char* Src, u32 SrcLen, char* Dest, u32& DestLen);

	// Hook 单行解密脚本 (一行行解密)
	bool HookDecryptScriptLine(char* Src, u32 SrcLen, char* Dest, u32& DestLen);

	// Hook NPC条件判断载入命令，返回值:1 - 500表示本插件处理该命令
	i32 HookNpcLoadConditionCmd(char* pCmd);

	// Hook NPC条件判断执行命令
	bool HookNpcConditionProcess(struct ScriptCmdParam* ScriptParam);

	// Hook NPC执行载入命令，返回值:1 - 500表示本插件处理该命令
	i32 HookNpcLoadActionCmd(char* pCmd);

	// Hook NPC执行命令
	void HookNpcActionProcess(struct ScriptCmdParam* ScriptParam, bool& boSendMerChantSay, bool& boBreak);

	// Hook 用户点击NPC命令
	bool HookUserSelect(struct TMerchant* Merchant, struct TPlayObject* PlayObject, char* sLabel, char* sMsg);

	// Hook 自定义聊天框命令
	bool HookUserCommand(struct TPlayObject* PlayObject, char* pCmd, char* pParam1, char* pParam2,
						 char* pParam3, char* pParam4, char* pParam5, char* pParam6, char* pParam7);

	// Hook 获取自定义变量值
	bool HookGetVariableText(struct TNormNpc* NPC, struct TPlayObject* PlayObject,
							 char* sVariable, char* sValue, u32& nValueLen);

	// Hook BaseObject创建
	void HookBaseObjectCreate(struct TBaseObject* BaseObject);

	// Hook BaseObject重算属性开始
	void HookBaseObjectRecalAbilBegin(struct TBaseObject* BaseObject);

	// Hook BaseObject重算属性结束
	void HookBaseObjectRecalAbilEnd(struct TBaseObject* BaseObject);

	// Hook BaseObject对象运行
	void HookBaseObjectRun(struct TBaseObject* BaseObject);

	// Hook BaseObject自定义消息处理
	void HookBaseObjectProcessMsg(struct TBaseObject* BaseObject, i16 wIdent, i32 wParam,
								  i32 nParam1, i32 nParam2, i32 nParam3,
								  struct TObject* MsgObject, u32 dwDeliveryTime,
								  char* pMsg, bool& boReturn);

	// Hook BaseObject受到物理攻击
	void HookBaseObjectStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject);

	// Hook BaseObject受到魔法攻击
	void HookBaseObjectMagicStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject, i32 MagicIdx);

	// Hook BaseObject物理攻击目标
	void HookBaseObjectAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower);

	// Hook BaseObject魔法攻击目标
	void HookBaseObjectMagicAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower);

	// Hook BaseObject死亡
	void HookBaseObjectDie(struct TBaseObject* BaseObject);

	// Hook BaseObject清理尸体
	void HookBaseObjectMakeGhost(struct TBaseObject* BaseObject);

	// Hook BaseObject对象释放
	void HookBaseObjectFree(struct TBaseObject* BaseObject);

	// Hook PlayObject对象创建
	void HookPlayerCreate(struct TPlayObject* PlayObject);

	// Hook PlayObject对象登录1
	void HookPlayerLogin1(struct TPlayObject* PlayObject);

	// Hook PlayObject对象登录2
	void HookPlayerLogin2(struct TPlayObject* PlayObject);

	// Hook PlayObject对象登录3
	void HookPlayerLogin3(struct TPlayObject* PlayObject);

	// Hook PlayObject对象登录4
	void HookPlayerLogin4(struct TPlayObject* PlayObject);

	// Hook PlayObject对象运行
	void HookPlayerRun(struct TPlayObject* PlayObject);

	// Hook PlayObject对象视野范围内发现新对象
	void HookPlayerViewRangeNewObject(struct TPlayObject* PlayeObject, struct TObject* AObject, i32 AObjectX, i32 AObjectY);

	// Hook PlayObject消息处理开始
	void HookPlayerProcessMsgBegin(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								   i32 nParam1, i32 nParam2, i32 nParam3,
								   struct TObject* MsgObject, u32 dwDeliveryTime,
								   char* pMsg, bool& boReturn);

	// Hook PlayObject消息处理开始
	void HookPlayerProcessMsgEnd(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								 i32 nParam1, i32 nParam2, i32 nParam3,
								 struct TObject* MsgObject, u32 dwDeliveryTime,
								 char* pMsg, bool& boReturn);

	// Hook PlayObject对象释放
	void HookPlayerFree(struct TPlayObject* PlayObject);

	// Hook 假人运行开始
	void HookDummyObjectRunBegin(struct TDummyObject* DummyObject, bool& boReturn);

	// Hook 假人运行结束
	void HookDummyObjectRunEnd(struct TDummyObject* DummyObject);

	// Hook 英雄创建
	void HookHeroObjectCreate(struct THeroObject* Hero);

	// Hook 英雄释放
	void HookHeroObjectFree(struct THeroObject* Hero);

}
#endif // __LF_HOOK_H__