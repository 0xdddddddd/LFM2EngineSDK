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

	class EnvirMap
	{
	public:
		explicit EnvirMap(struct TEnvirnomentFunc* self);
		virtual ~EnvirMap();
	public:
		bool GetMapName(struct TEnvirnoment* envir, char* dest, u32* destLen);
		bool GetMapDesc(struct TEnvirnoment* envir, char* dest, u32* destLen);
		i32 GetWidth(struct TEnvirnoment* envir);
		i32 GetHeight(struct TEnvirnoment* envir);
		i32 GetMinMap(struct TEnvirnoment* envir);
		bool IsMainMap(struct TEnvirnoment* envir);
		bool GetMainMapName(struct TEnvirnoment* envir, char* dest, u32* destLen);
		bool IsMirrMap(struct TEnvirnoment* envir);
		u32 GetMirrMapCreateTick(struct TEnvirnoment* envir);
		u32 GetMirrMapSurvivalTime(struct TEnvirnoment* envir);
		bool GetMirrMapExitToMap(struct TEnvirnoment* envir, char* dest, u32* destLen);
		i32 GetMirrMapMinMap(struct TEnvirnoment* envir);
		bool GetAlwaysShowTime(struct TEnvirnoment* envir);
		bool IsFBMap(struct TEnvirnoment* envir);
		bool GetFBMapName(struct TEnvirnoment* envir, char* dest, u32* destLen);
		i32 GetFBEnterLimit(struct TEnvirnoment* envir);
		bool GetFBCreated(struct TEnvirnoment* envir);
		u32 GetFBCreateTime(struct TEnvirnoment* envir);
		bool GetMapParam(struct TEnvirnoment* envir, const char* param);
		bool GetMapParamValue(struct TEnvirnoment* envir, const char* param, char* dest, u32* destLen);
		bool CheckCanMove(struct TEnvirnoment* envir, i32 nX, i32 nY, bool boFlag);
		bool IsValidObject(struct TEnvirnoment* envir, i32 nX, i32 nY, i32 nRange, struct TObject* aObject);
		i32 GetItemObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, struct TList* objectList);
		i32 GetBaseObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, bool incDeathObject, struct TList* objectList);
		i32 GetPlayObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, bool incDeathObject, struct TList* objectList);
	private:
		struct TEnvirnomentFunc* self;
	};
}

#endif // __LF_MAPMANAGER_H__