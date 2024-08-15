#ifndef __LF_NROMNPC_H__
#define __LF_NROMNPC_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class NormNpc
	{
	public:
		explicit NormNpc(struct TNormNpcFunc* self, struct TNormNpc* object);
		virtual ~NormNpc();
	public:
		struct TNormNpc* Create(const char* charName, const char* sMapName, const char* sScript, i32 x, i32 y, i16 wAppr, bool boIsHide);
		void LoadNpcScript();
		void ClearScript();
		bool GetFilePath(char* dest, u32* destLen);
		void SetFilePath(const char* value);
		bool GetPath(char* dest, u32* destLen);
		void SetPath(const char* value);
		bool GetIsHide();
		void SetIsHide(bool value);
		bool GetIsQuest();
		bool GetLineVariableText(struct TPlayObject* player, const char* sMsg, char* dest, u32* destLen);
		void GotoLable(struct TPlayObject* player, const char* sLabel, bool boExtJmp);
		void SendMsgToUser(struct TPlayObject* player, const char* sMsg);
		void MessageBox(struct TPlayObject* player, const char* sMsg);
		bool GetVarValue(struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, i32* nValue);
		bool SetVarValue(struct TPlayObject* player, const char* sVarName, const char* sValue, i32 nValue);
		bool GetDynamicVarValue(struct TPlayObject* player, const char* sVarName, char* sValue, u32* sValueSize, i32* nValue);
		bool SetDynamicVarValue(struct TPlayObject* player, const char* sVarName, const char* sValue, i32 nValue);
	private:
		struct TNormNpcFunc* self;
		struct TNormNpc* object;
	};
}

#endif // __LF_NROMNPC_H__