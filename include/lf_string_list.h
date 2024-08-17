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
		void Free(struct TStringList* strings);
		bool GetCaseSensitive(struct TStringList* strings);
		void SetCaseSensitive(struct TStringList* strings, bool isCaseSensitive);
		bool GetSorted(struct TStringList* strings);
		void SetSorted(struct TStringList* strings, bool sorted);
		bool GetDuplicates(struct TStringList* strings);
		void SetDuplicates(struct TStringList* strings, bool duplicates);
		i32 Count(struct TStringList* strings);
		bool GetText(struct TStringList* strings, char* dest, u32* destLen);
		void SetText(struct TStringList* strings, const char* src, u32 srcLen);
		void Add(struct TStringList* strings, const char* s);
		void AddObject(struct TStringList* strings, const char* s, struct TObject* aObject);
		void Insert(struct TStringList* strings, i32 index, const char* s);
		void InsertObject(struct TStringList* strings, i32 index, const char* s, struct TObject* aObject);
		void Remove(struct TStringList* strings, const char* s);
		void Delete(struct TStringList* strings, i32 index);
		bool GetItem(struct TStringList* strings, i32 index, char* dest, u32* destLen);
		void SetItem(struct TStringList* strings, i32 index, const char* s);
		struct TObject* GetObject(struct TStringList* strings, i32 index);
		void SetObject(struct TStringList* strings, i32 index, struct TObject* aObject);
		i32 IndexOf(struct TStringList* strings, const char* s);
		i32 IndexOfObject(struct TStringList* strings, struct TObject* aObject);
		bool Find(struct TStringList* strings, const char* s, i32* index);
		void Exchange(struct TStringList* strings, i32 index1, i32 index2);
		void LoadFromFile(struct TStringList* strings, const char* fileName);
		void SaveToFile(struct TStringList* strings, const char* fileName);
		void CopyTo(struct TStringList* source, struct TStringList* dest);
	private:
		struct TStringListFunc* self;
	};
}

#endif // __LF_STRING_LIST_H__