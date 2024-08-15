#ifndef __LF_STRING_LIST_H__
#define __LF_STRING_LIST_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class StringList
	{
	public:
		explicit StringList(struct TStringListFunc* self);
		virtual ~StringList();
	public:
		struct TStringList* Create();
		void Free();
		bool GetCaseSensitive();
		void SetCaseSensitive(bool isCaseSensitive);
		bool GetSorted();
		void SetSorted(bool sorted);
		bool GetDuplicates();
		void SetDuplicates(bool duplicates);
		i32 Count();
		bool GetText(char* dest, u32* destLen);
		void SetText(const char* src, u32 srcLen);
		void Add(const char* s);
		void AddObject(const char* s, struct TObject* aObject);
		void Insert(i32 index, const char* s);
		void InsertObject(i32 index, const char* s, struct TObject* aObject);
		void Remove(const char* s);
		void Delete(i32 index);
		bool GetItem(i32 index, char* dest, u32* destLen);
		void SetItem(i32 index, const char* s);
		struct TObject* GetObject(i32 index);
		void SetObject(i32 index, struct TObject* aObject);
		i32 IndexOf(const char* s);
		i32 IndexOfObject(struct TObject* aObject);
		bool Find(const char* s, i32* index);
		void Exchange(i32 index1, i32 index2);
		void LoadFromFile(const char* fileName);
		void SaveToFile(const char* fileName);
		void CopyTo(struct TStringList* dest);
	private:
		struct TStringListFunc* self;
		struct TStringList*		object;
	};
}

#endif // __LF_STRING_LIST_H__