#include "lf_stringlist.h"

namespace LF
{
	StringList::StringList(struct TStringListFunc* self)
		: self(self)
		, object(nullptr)
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

	void StringList::Free()
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Free, object);
	}

	bool StringList::GetCaseSensitive()
	{
		if (self == nullptr || self->GetCaseSensitive == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetCaseSensitive, object);
	}

	void StringList::SetCaseSensitive(bool isCaseSensitive)
	{
		if (self == nullptr || self->SetCaseSensitive == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetCaseSensitive, object, isCaseSensitive);
	}

	bool StringList::GetSorted()
	{
		if (self == nullptr || self->GetSorted == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetSorted, object);
	}

	void StringList::SetSorted(bool sorted)
	{
		if (self == nullptr || self->SetSorted == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSorted, object, sorted);
	}

	bool StringList::GetDuplicates()
	{
		if (self == nullptr || self->GetDuplicates == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetDuplicates, object);
	}

	void StringList::SetDuplicates(bool duplicates)
	{
		if (self == nullptr || self->SetDuplicates == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetDuplicates, object, duplicates);
	}

	i32 StringList::Count()
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, object);
	}

	bool StringList::GetText(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetText == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetText, object, dest, destLen);
	}

	void StringList::SetText(const char* src, u32 srcLen)
	{
		if (self == nullptr || self->SetText == nullptr || src == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetText, object, src, srcLen);
	}

	void StringList::Add(const char* s)
	{
		if (self == nullptr || self->Add == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Add, object, s);
	}

	void StringList::AddObject(const char* s, struct TObject* aObject)
	{
		if (self == nullptr || self->AddObject == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->AddObject, object, s, aObject);
	}

	void StringList::Insert(i32 index, const char* s)
	{
		if (self == nullptr || self->Insert == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Insert, object, index, s);
	}

	void StringList::InsertObject(i32 index, const char* s, struct TObject* aObject)
	{
		if (self == nullptr || self->InsertObject == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->InsertObject, object, index, s, aObject);
	}

	void StringList::Remove(const char* s)
	{
		if (self == nullptr || self->Remove == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Remove, object, s);
	}

	void StringList::Delete(i32 index)
	{
		if (self == nullptr || self->Delete == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Delete, object, index);
	}

	bool StringList::GetItem(i32 index, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetItem == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetItem, object, index, dest, destLen);
	}

	void StringList::SetItem(i32 index, const char* s)
	{
		if (self == nullptr || self->SetItem == nullptr || s == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetItem, object, index, s);
	}

	struct TObject* StringList::GetObject(i32 index)
	{
		if (self == nullptr || self->GetObject == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TObject*>(self->GetObject, object, index);
	}

	void StringList::SetObject(i32 index, struct TObject* aObject)
	{
		if (self == nullptr || self->SetObject == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetObject, object, index, aObject);
	}

	i32 StringList::IndexOf(const char* s)
	{
		if (self == nullptr || self->IndexOf == nullptr || s == nullptr) {
			return -1;
		}

		if (object == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOf, object, s);
	}

	i32 StringList::IndexOfObject(struct TObject* aObject)
	{
		if (self == nullptr || self->IndexOfObject == nullptr) {
			return -1;
		}

		if (object == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOfObject, object, aObject);
	}

	bool StringList::Find(const char* s, i32* index)
	{
		if (self == nullptr || self->Find == nullptr || s == nullptr || index == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->Find, object, s, index);
	}

	void StringList::Exchange(i32 index1, i32 index2)
	{
		if (self == nullptr || self->Exchange == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Exchange, object, index1, index2);
	}

	void StringList::LoadFromFile(const char* fileName)
	{
		if (self == nullptr || self->LoadFromFile == nullptr || fileName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->LoadFromFile, object, fileName);
	}

	void StringList::SaveToFile(const char* fileName)
	{
		if (self == nullptr || self->SaveToFile == nullptr || fileName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SaveToFile, object, fileName);
	}

	void StringList::CopyTo(struct TStringList* dest)
	{
		if (self == nullptr || self->CopyTo == nullptr || dest == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->CopyTo, object, dest);
	}
}