#ifndef __LF_NROMNPC_H__
#define __LF_NROMNPC_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	// TNormNpc NPC∂‘œÛ£¨ºÃ≥–TBaseObject
	class NormNpc
	{
	public:
		explicit NormNpc(struct TNormNpcFunc* self);
		virtual ~NormNpc();
	public:
		struct TNormNpc* Create(const char* charName, const char* sMapName, const char* sScript, i32 x, i32 y, u16 wAppr, bool boIsHide);
		void LoadNpcScript(struct TNormNpc* normNpc);
		void ClearScript(struct TNormNpc* normNpc);
		bool GetFilePath(struct TNormNpc* normNpc, char* dest, u32* destLen);
		void SetFilePath(struct TNormNpc* normNpc, const char* value);
		bool GetPath(struct TNormNpc* normNpc, char* dest, u32* destLen);
		void SetPath(struct TNormNpc* normNpc, const char* value);
		bool GetIsHide(struct TNormNpc* normNpc);
		void SetIsHide(struct TNormNpc* normNpc, bool value);
		bool GetIsQuest(struct TNormNpc* normNpc);
		bool GetLineVariableText(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg, char* dest, u32* destLen);
		void GotoLable(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sLabel, bool boExtJmp);
		void SendMsgToUser(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg);
		void MessageBox(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sMsg);
		bool GetVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, u32* nValue);
		bool SetVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, const char* sValue, u64 nValue);
		bool GetDynamicVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, u32* nValue);
		bool SetDynamicVarValue(struct TNormNpc* normNpc, struct TPlayObject* player, const char* sVarName, const char* sValue, u64 nValue);
	private:
		struct TNormNpcFunc* self;
	};
}

#endif // __LF_NROMNPC_H__