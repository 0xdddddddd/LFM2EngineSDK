#include "lf_menu.h"

namespace LF
{
	Menu::Menu(struct TMemuFunc* self)
		: self(self)
		, object(nullptr)
	{

	}

	Menu::~Menu()
	{

	}

	struct TMenuItem* Menu::GetMainMenu()
	{
		if (self == nullptr || self->GetMainMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetMainMenu);
	}

	struct TMenuItem* Menu::GetControlMenu()
	{
		if (self == nullptr || self->GetControlMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetControlMenu);
	}

	struct TMenuItem* Menu::GetViewMenu()
	{
		if (self == nullptr || self->GetViewMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetViewMenu);
	}

	struct TMenuItem* Menu::GetOptionMenu()
	{
		if (self == nullptr || self->GetOptionMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetOptionMenu);
	}

	struct TMenuItem* Menu::GetManagerMenu()
	{
		if (self == nullptr || self->GetManagerMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetManagerMenu);
	}

	struct TMenuItem* Menu::GetToolsMenu()
	{
		if (self == nullptr || self->GetToolsMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetToolsMenu);
	}

	struct TMenuItem* Menu::GetHelpMenu()
	{
		if (self == nullptr || self->GetHelpMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetHelpMenu);
	}

	struct TMenuItem* Menu::GetPluginMenu()
	{
		if (self == nullptr || self->GetPluginMenu == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetPluginMenu);
	}

	i32 Menu::Count()
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, object);
	}

	struct TMenuItem* Menu::GetItems(i32 index)
	{
		if (self == nullptr || self->GetItems == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetItems, object, index);
	}

	struct TMenuItem* Menu::Add(i32 plugID, struct TMenuItem* menuItem, const char* caption, i32 tag, void* onClick)
	{
		if (self == nullptr || self->Add == nullptr || menuItem == nullptr || caption == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->Add, plugID, menuItem, caption, tag, onClick);
	}

	struct TMenuItem* Menu::Insert(i32 plugID, struct TMenuItem* menuItem, i32 index, const char* caption, i32 tag, void* onClick)
	{
		if (self == nullptr || self->Insert == nullptr || menuItem == nullptr || caption == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->Insert, plugID, menuItem, index, caption, tag, onClick);
	}

	bool Menu::GetCaption(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetCaption == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetCaption, object, dest, destLen);
	}

	void Menu::SetCaption(const char* caption)
	{
		if (self == nullptr || self->SetCaption == nullptr || caption == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetCaption, object, caption);
	}

	bool Menu::GetEnabled()
	{
		if (self == nullptr || self->GetEnabled == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetEnabled, object);
	}

	void Menu::SetEnabled(bool enabled)
	{
		if (self == nullptr || self->SetEnabled == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetEnabled, object, enabled);
	}

	bool Menu::GetVisable()
	{
		if (self == nullptr || self->GetVisable == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVisable, object);
	}

	void Menu::SetVisable(bool visible)
	{
		if (self == nullptr || self->SetVisable == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetVisable, object, visible);
	}

	bool Menu::GetChecked()
	{
		if (self == nullptr || self->GetChecked == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetChecked, object);
	}

	void Menu::SetChecked(bool checked)
	{
		if (self == nullptr || self->SetChecked == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetChecked, object, checked);
	}

	bool Menu::GetRadioItem()
	{
		if (self == nullptr || self->GetRadioItem == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetRadioItem, object);
	}

	void Menu::SetRadioItem(bool isRadioItem)
	{
		if (self == nullptr || self->SetRadioItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetRadioItem, object, isRadioItem);
	}

	i32 Menu::GetGroupIndex()
	{
		if (self == nullptr || self->GetGroupIndex == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGroupIndex, object);
	}

	void Menu::SetGroupIndex(i32 value)
	{
		if (self == nullptr || self->SetGroupIndex == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetGroupIndex, object, value);
	}

	i32 Menu::GetTag()
	{
		if (self == nullptr || self->GetTag == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetTag, object);
	}

	void Menu::SetTag(i32 value)
	{
		if (self == nullptr || self->SetTag == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetTag, object, value);
	}
}