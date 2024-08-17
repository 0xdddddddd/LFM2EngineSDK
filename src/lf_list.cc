#include "lf_list.h"
#include "lf_utils.h"

namespace LF
{
	List::List(struct TListFunc* self)
		: self(self)
	{

	}

	List::~List()
	{

	}

	struct TList* List::Create()
	{
		if (self == nullptr || self->Create == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->Create);
	}

	void List::Free(struct TList* list)
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Free, list);
	}

	i32 List::Count(struct TList* list)
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (list == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, list);
	}

	void List::Clear(struct TList* list)
	{
		if (self == nullptr || self->Clear == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Clear, list);
	}

	void List::Add(struct TList* list, void* item)
	{
		if (self == nullptr || self->Add == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Add, list, item);
	}

	void List::Insert(struct TList* list, i32 index, void* item)
	{
		if (self == nullptr || self->Insert == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Insert, list, index, item);
	}

	void List::Remove(struct TList* list, void* item)
	{
		if (self == nullptr || self->Remove == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Remove, list, item);
	}

	void List::Delete(struct TList* list, i32 index)
	{
		if (self == nullptr || self->Delete == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Delete, list, index);
	}

	void* List::GetItem(struct TList* list, i32 index)
	{
		if (self == nullptr || self->GetItem == nullptr) {
			return nullptr;
		}

		if (list == nullptr) {
			return nullptr;
		}

		return wrap_call<void*>(self->GetItem, list, index);
	}

	void List::SetItem(struct TList* list, i32 index, void* item)
	{
		if (self == nullptr || self->SetItem == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->SetItem, list, index, item);
	}

	i32 List::IndexOf(struct TList* list, void* item)
	{
		if (self == nullptr || self->IndexOf == nullptr) {
			return -1;
		}

		if (list == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOf, list, item);
	}

	void List::Exchange(struct TList* list, i32 index1, i32 index2)
	{
		if (self == nullptr || self->Exchange == nullptr) {
			return;
		}

		if (list == nullptr) {
			return;
		}

		wrap_call(self->Exchange, list, index1, index2);
	}

	void List::CopyTo(struct TList* source, struct TList* dest)
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