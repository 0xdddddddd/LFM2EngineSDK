#include "lf_string_list.h"

namespace LF
{
	StringList::StringList(struct TStringListFunc* self)
		: self(self)
	{

	}

	StringList::~StringList()
	{

	}

	struct TStringList* StringList::Create()
	{
		if (self == nullptr || self->Create == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TStringList*>(self->Create);
	}

	void StringList::Free(struct TStringList* strings)
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Free, strings);
	}

	bool StringList::GetCaseSensitive(struct TStringList* strings)
	{
		if (self == nullptr || self->GetCaseSensitive == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetCaseSensitive, strings);
	}

	void StringList::SetCaseSensitive(struct TStringList* strings, bool isCaseSensitive)
	{
		if (self == nullptr || self->SetCaseSensitive == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetCaseSensitive, strings, isCaseSensitive);
	}

	bool StringList::GetSorted(struct TStringList* strings)
	{
		if (self == nullptr || self->GetSorted == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetSorted, strings);
	}

	void StringList::SetSorted(struct TStringList* strings, bool sorted)
	{
		if (self == nullptr || self->SetSorted == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetSorted, strings, sorted);
	}

	bool StringList::GetDuplicates(struct TStringList* strings)
	{
		if (self == nullptr || self->GetDuplicates == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDuplicates, strings);
	}

	void StringList::SetDuplicates(struct TStringList* strings, bool duplicates)
	{
		if (self == nullptr || self->SetDuplicates == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetDuplicates, strings, duplicates);
	}

	i32 StringList::Count(struct TStringList* strings)
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (strings == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, strings);
	}

	bool StringList::GetText(struct TStringList* strings, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetText == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetText, strings, dest, destLen);
	}

	void StringList::SetText(struct TStringList* strings, const char* src, u32 srcLen)
	{
		if (self == nullptr || self->SetText == nullptr || src == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetText, strings, src, srcLen);
	}

	void StringList::Add(struct TStringList* strings, const char* s)
	{
		if (self == nullptr || self->Add == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Add, strings, s);
	}

	void StringList::AddObject(struct TStringList* strings, const char* s, struct TObject* aObject)
	{
		if (self == nullptr || self->AddObject == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->AddObject, strings, s, aObject);
	}

	void StringList::Insert(struct TStringList* strings, i32 index, const char* s)
	{
		if (self == nullptr || self->Insert == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Insert, strings, index, s);
	}

	void StringList::InsertObject(struct TStringList* strings, i32 index, const char* s, struct TObject* aObject)
	{
		if (self == nullptr || self->InsertObject == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->InsertObject, strings, index, s, aObject);
	}

	void StringList::Remove(struct TStringList* strings, const char* s)
	{
		if (self == nullptr || self->Remove == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Remove, strings, s);
	}

	void StringList::Delete(struct TStringList* strings, i32 index)
	{
		if (self == nullptr || self->Delete == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Delete, strings, index);
	}

	bool StringList::GetItem(struct TStringList* strings, i32 index, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetItem == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetItem, strings, index, dest, destLen);
	}

	void StringList::SetItem(struct TStringList* strings, i32 index, const char* s)
	{
		if (self == nullptr || self->SetItem == nullptr || s == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetItem, strings, index, s);
	}

	struct TObject* StringList::GetObject(struct TStringList* strings, i32 index)
	{
		if (self == nullptr || self->GetObject == nullptr) {
			return nullptr;
		}

		if (strings == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TObject*>(self->GetObject, strings, index);
	}

	void StringList::SetObject(struct TStringList* strings, i32 index, struct TObject* aObject)
	{
		if (self == nullptr || self->SetObject == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SetObject, strings, index, aObject);
	}

	i32 StringList::IndexOf(struct TStringList* strings, const char* s)
	{
		if (self == nullptr || self->IndexOf == nullptr || s == nullptr) {
			return -1;
		}

		if (strings == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOf, strings, s);
	}

	i32 StringList::IndexOfObject(struct TStringList* strings, struct TObject* aObject)
	{
		if (self == nullptr || self->IndexOfObject == nullptr) {
			return -1;
		}

		if (strings == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOfObject, strings, aObject);
	}

	bool StringList::Find(struct TStringList* strings, const char* s, i32* index)
	{
		if (self == nullptr || self->Find == nullptr || s == nullptr || index == nullptr) {
			return false;
		}

		if (strings == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->Find, strings, s, index);
	}

	void StringList::Exchange(struct TStringList* strings, i32 index1, i32 index2)
	{
		if (self == nullptr || self->Exchange == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->Exchange, strings, index1, index2);
	}

	void StringList::LoadFromFile(struct TStringList* strings, const char* fileName)
	{
		if (self == nullptr || self->LoadFromFile == nullptr || fileName == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->LoadFromFile, strings, fileName);
	}

	void StringList::SaveToFile(struct TStringList* strings, const char* fileName)
	{
		if (self == nullptr || self->SaveToFile == nullptr || fileName == nullptr) {
			return;
		}

		if (strings == nullptr) {
			return;
		}

		wrap_call(self->SaveToFile, strings, fileName);
	}

	void StringList::CopyTo(struct TStringList* source, struct TStringList* dest)
	{
		if (self == nullptr || self->CopyTo == nullptr) {
			return;
		}

		if (source == nullptr || dest == nullptr) {
			return;
		}

		wrap_call(self->CopyTo, source, dest);
	}
}