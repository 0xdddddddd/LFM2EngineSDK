#ifndef __LF_H__
#define __LF_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class List
	{
	public:
		explicit List(struct TListFunc* self);
		virtual ~List();
	public:
		struct TList* Create();
		void Free(struct TList* list);
		i32 Count(struct TList* list);
		void Clear(struct TList* list);
		void Add(struct TList* list, void* item);
		void Insert(struct TList* list, i32 index, void* item);
		void Remove(struct TList* list, void* item);
		void Delete(struct TList* list, i32 index);
		void* GetItem(struct TList* list, i32 index);
		void SetItem(struct TList* list, i32 index, void* item);
		i32 IndexOf(struct TList* list, void* item);
		void Exchange(struct TList* list, i32 index1, i32 index2);
		void CopyTo(struct TList* source, struct TList* dest);
	private:
		struct TListFunc*	self;
	};
}

#endif