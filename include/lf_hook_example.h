#ifndef __LF_HOOK_H__
#define __LF_HOOK_H__

#include "lf_platform.h"
#include "lf_struct.h"

// Not for direct use
// For reference only
namespace
{
	// �����ʼ��
	bool Init(struct TAppFuncDef* AppFunc, u32 AppFuncCrc, u32 ExtParam, char* Desc, u32& DescLen);

	// �������ʼ��
	void UnInit();

	// Hook IP�����ز�ѯ
	bool HookGetIPLocal(char* sIPaddr, char* Dest, u32& DestLen);

	// ����׼������
	void HookEngineReadyToStart();

	// �����������
	void HookEngineStartComplete();

	// HOOK M2���¼�����Ϣ��� (����-> ���¼��� ->... �������)
	void HookEngineReloadComplete(i32 ReloadType);

	// Hook ���ؽű��ļ�
	bool HookLoadScriptFile(char* FileName, struct TMemoryStream* MemStream);

	// Hook �ű��ļ����� (����г��⣬ʣ�µĲ���һ�ν���)
	bool HookDecryptScriptFile(char* Src, u32 SrcLen, char* Dest, u32& DestLen);

	// Hook ���н��ܽű� (һ���н���)
	bool HookDecryptScriptLine(char* Src, u32 SrcLen, char* Dest, u32& DestLen);

	// Hook NPC�����ж������������ֵ:1 - 500��ʾ��������������
	i32 HookNpcLoadConditionCmd(char* pCmd);

	// Hook NPC�����ж�ִ������
	bool HookNpcConditionProcess(struct ScriptCmdParam* ScriptParam);

	// Hook NPCִ�������������ֵ:1 - 500��ʾ��������������
	i32 HookNpcLoadActionCmd(char* pCmd);

	// Hook NPCִ������
	void HookNpcActionProcess(struct ScriptCmdParam* ScriptParam, bool& boSendMerChantSay, bool& boBreak);

	// Hook �û����NPC����
	bool HookUserSelect(struct TMerchant* Merchant, struct TPlayObject* PlayObject, char* sLabel, char* sMsg);

	// Hook �Զ������������
	bool HookUserCommand(struct TPlayObject* PlayObject, char* pCmd, char* pParam1, char* pParam2,
						 char* pParam3, char* pParam4, char* pParam5, char* pParam6, char* pParam7);

	// Hook ��ȡ�Զ������ֵ
	bool HookGetVariableText(struct TNormNpc* NPC, struct TPlayObject* PlayObject,
							 char* sVariable, char* sValue, u32& nValueLen);

	// Hook BaseObject����
	void HookBaseObjectCreate(struct TBaseObject* BaseObject);

	// Hook BaseObject�������Կ�ʼ
	void HookBaseObjectRecalAbilBegin(struct TBaseObject* BaseObject);

	// Hook BaseObject�������Խ���
	void HookBaseObjectRecalAbilEnd(struct TBaseObject* BaseObject);

	// Hook BaseObject��������
	void HookBaseObjectRun(struct TBaseObject* BaseObject);

	// Hook BaseObject�Զ�����Ϣ����
	void HookBaseObjectProcessMsg(struct TBaseObject* BaseObject, i16 wIdent, i32 wParam,
								  i32 nParam1, i32 nParam2, i32 nParam3,
								  struct TObject* MsgObject, u32 dwDeliveryTime,
								  char* pMsg, bool& boReturn);

	// Hook BaseObject�ܵ�������
	void HookBaseObjectStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject);

	// Hook BaseObject�ܵ�ħ������
	void HookBaseObjectMagicStruck(struct TBaseObject* BaseObject, struct TBaseObject* AttackObject, i32 MagicIdx);

	// Hook BaseObject������Ŀ��
	void HookBaseObjectAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower);

	// Hook BaseObjectħ������Ŀ��
	void HookBaseObjectMagicAttack(struct TBaseObject* BaseObject, struct TBaseObject* Target, i32 MagicIdx, i32& nPower);

	// Hook BaseObject����
	void HookBaseObjectDie(struct TBaseObject* BaseObject);

	// Hook BaseObject����ʬ��
	void HookBaseObjectMakeGhost(struct TBaseObject* BaseObject);

	// Hook BaseObject�����ͷ�
	void HookBaseObjectFree(struct TBaseObject* BaseObject);

	// Hook PlayObject���󴴽�
	void HookPlayerCreate(struct TPlayObject* PlayObject);

	// Hook PlayObject�����¼1
	void HookPlayerLogin1(struct TPlayObject* PlayObject);

	// Hook PlayObject�����¼2
	void HookPlayerLogin2(struct TPlayObject* PlayObject);

	// Hook PlayObject�����¼3
	void HookPlayerLogin3(struct TPlayObject* PlayObject);

	// Hook PlayObject�����¼4
	void HookPlayerLogin4(struct TPlayObject* PlayObject);

	// Hook PlayObject��������
	void HookPlayerRun(struct TPlayObject* PlayObject);

	// Hook PlayObject������Ұ��Χ�ڷ����¶���
	void HookPlayerViewRangeNewObject(struct TPlayObject* PlayeObject, struct TObject* AObject, i32 AObjectX, i32 AObjectY);

	// Hook PlayObject��Ϣ����ʼ
	void HookPlayerProcessMsgBegin(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								   i32 nParam1, i32 nParam2, i32 nParam3,
								   struct TObject* MsgObject, u32 dwDeliveryTime,
								   char* pMsg, bool& boReturn);

	// Hook PlayObject��Ϣ����ʼ
	void HookPlayerProcessMsgEnd(struct TPlayObject* PlayObject, i16 wIdent, i32 wParam,
								 i32 nParam1, i32 nParam2, i32 nParam3,
								 struct TObject* MsgObject, u32 dwDeliveryTime,
								 char* pMsg, bool& boReturn);

	// Hook PlayObject�����ͷ�
	void HookPlayerFree(struct TPlayObject* PlayObject);

	// Hook �������п�ʼ
	void HookDummyObjectRunBegin(struct TDummyObject* DummyObject, bool& boReturn);

	// Hook �������н���
	void HookDummyObjectRunEnd(struct TDummyObject* DummyObject);

	// Hook Ӣ�۴���
	void HookHeroObjectCreate(struct THeroObject* Hero);

	// Hook Ӣ���ͷ�
	void HookHeroObjectFree(struct THeroObject* Hero);

}
#endif // __LF_HOOK_H__