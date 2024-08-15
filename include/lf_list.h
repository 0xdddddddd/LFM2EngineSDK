#ifndef __LF_LIST_H__
#define __LF_LIST_H__

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
		void Free();
		i32 Count();
		void Clear();
		void Add(void* item);
		void Insert(i32 index, void* item);
		void Remove(void* item);
		void Delete(i32 index);
		void* GetItem(i32 index);
		void SetItem(i32 index, void* item);
		i32 IndexOf(void* item);
		void Exchange(i32 index1, i32 index2);
		void CopyTo(struct TList* dest);
	private:
		struct TListFunc*	self;
		struct TList*       object;
	};
}

#endif