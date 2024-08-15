#ifndef __LF_GUILD_H__
#define __LF_GUILD_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	namespace GuildManger
	{
		struct TGuild* FindGuild(struct TGuildManagerFunc* self, const char* GuildName);
		struct TGuild* GetPlayerGuild(struct TGuildManagerFunc* self, const char* CharName);
		bool AddGuild(struct TGuildManagerFunc* self, const char* GuildName, const char* GuildMaster);
		bool DelGuild(struct TGuildManagerFunc* self, const char* GuildName, bool IsFoundGuild);
	}

	class Guild
	{
	public:
		explicit Guild(struct TGuildFunc* self, struct TGuild* object);
		virtual ~Guild();
	public:
		bool GetGuildName(char* dest, u32* destLen);
		i32 GetJoinJob();
		u32 GetJoinLevel();
		bool GetJoinMsg(char* dest, u32* destLen);
		i32 GetBuildPoint();
		i32 GetAurae();
		i32 GetStability();
		i32 GetFlourishing();
		i32 GetChiefItemCount();
		i32 GetMemberCount();
		i32 GetOnlineMemeberCount();
		i32 GetMasterCount();
		void GetMaster(struct TPlayObject** master1, struct TPlayObject** master2);
		bool GetMasterName(char* master1, u32* master1Size, char* master2, u32* master2Size);
		bool CheckMemberIsFull();
		bool IsMemeber(const char* charName);
		bool AddMember(struct TPlayObject* player);
		bool AddMemberEx(const char* charName);
		bool DelMemeber(struct TPlayObject* player);
		bool DelMemeberEx(const char* charName);
		bool IsAllianceGuild(struct TGuild* checkGuild);
		bool IsWarGuild(struct TGuild* checkGuild);
		bool IsAttentionGuild(struct TGuild* checkGuild);
		bool AddAlliance(struct TGuild* addGuild);
		bool AddWarGuild(struct TGuild* addGuild);
		bool AddAttentionGuild(struct TGuild* addGuild);
		bool DelAllianceGuild(struct TGuild* delGuild);
		bool DelAttentionGuild(struct TGuild* delGuild);
		bool GetRandNameByName(const char* charName, i32* nRankNo, char* dest, u32* destLen);
		bool GetRandNameByPlayer(struct TPlayObject* player, i32* nRankNo, char* dest, u32* destLen);
		void SendGuildMsg(const char* msg);
	private:
		struct TGuildFunc* self;
		struct TGuild* object;
	};
}

#endif // __LF_GUILD_H__