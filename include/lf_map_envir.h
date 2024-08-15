#ifndef __LF_MAPMANAGER_H__
#define __LF_MAPMANAGER_H__

#include "lf_platform.h"
#include "lf_struct.h"

#include <unordered_map>

namespace LF
{
	namespace Map
	{
		struct TEnvirnoment* FindMap(struct TMapManagerFunc* self);
		struct TList* GetMapList(struct TMapManagerFunc* self);
	}

	class MapEnvir
	{
	public:
		explicit MapEnvir(struct TEnvirnomentFunc* self, struct TEnvirnoment* object);
		virtual ~MapEnvir();
	public:
		bool GetMapName(char* dest, u32* destLen);
		bool GetMapDesc(char* dest, u32* destLen);
		i32 GetWidth();
		i32 GetHeight();
		i32 GetMinMap();
		bool IsMainMap();
		bool GetMainMapName(char* dest, u32* destLen);
		bool IsMirrMap();
		u32 GetMirrMapCreateTick();
		u32 GetMirrMapSurvivalTime();
		bool GetMirrMapExitToMap(char* dest, u32* destLen);
		i32 GetMirrMapMinMap();
		bool GetAlwaysShowTime();
		bool IsFBMap();
		bool GetFBMapName(char* dest, u32* destLen);
		i32 GetFBEnterLimit();
		bool GetFBCreated();
		u32 GetFBCreateTime();
		bool GetMapParam(const char* param);
		bool GetMapParamValue(const char* param, char* dest, u32* destLen);
		bool CheckCanMove(i32 nX, i32 nY, bool boFlag);
		bool IsValidObject(i32 nX, i32 nY, i32 nRange, struct TObject* aObject);
		i32 GetItemObjects(i32 nX, i32 nY, struct TList* objectList);
		i32 GetBaseObjects(i32 nX, i32 nY, bool incDeathObject, struct TList* objectList);
		i32 GetPlayObjects(i32 nX, i32 nY, bool incDeathObject, struct TList* objectList);
	private:
		struct TEnvirnomentFunc* self;
		struct TEnvirnoment* object;
	};
}

#endif // __LF_MAPMANAGER_H__