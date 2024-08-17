#include "lf_menu.h"

namespace LF
{
	Menu::Menu(struct TMemuFunc* self)
		: self(self)
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

	i32 Menu::Count(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (menuItem == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, menuItem);
	}

	struct TMenuItem* Menu::GetItems(struct TMenuItem* menuItem, i32 index)
	{
		if (self == nullptr || self->GetItems == nullptr) {
			return nullptr;
		}

		if (menuItem == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->GetItems, menuItem, index);
	}

	struct TMenuItem* Menu::Add(intptr_t plugID, struct TMenuItem* menuItem, const char* caption, i32 tag, void* onClick)
	{
		if (self == nullptr || self->Add == nullptr || caption == nullptr) {
			return nullptr;
		}

		if (menuItem == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->Add, plugID, menuItem, caption, tag, onClick);
	}

	struct TMenuItem* Menu::Insert(intptr_t plugID, struct TMenuItem* menuItem, i32 index, const char* caption, i32 tag, void* onClick)
	{
		if (self == nullptr || self->Insert == nullptr || caption == nullptr) {
			return nullptr;
		}

		if (menuItem == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMenuItem*>(self->Insert, plugID, menuItem, index, caption, tag, onClick);
	}

	bool Menu::GetCaption(struct TMenuItem* menuItem, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetCaption == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (menuItem == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetCaption, menuItem, dest, destLen);
	}

	void Menu::SetCaption(struct TMenuItem* menuItem, const char* caption)
	{
		if (self == nullptr || self->SetCaption == nullptr || caption == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetCaption, menuItem, caption);
	}

	bool Menu::GetEnabled(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetEnabled == nullptr) {
			return false;
		}

		if (menuItem == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetEnabled, menuItem);
	}

	void Menu::SetEnabled(struct TMenuItem* menuItem, bool enabled)
	{
		if (self == nullptr || self->SetEnabled == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetEnabled, menuItem, enabled);
	}

	bool Menu::GetVisable(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetVisable == nullptr) {
			return false;
		}

		if (menuItem == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetVisable, menuItem);
	}

	void Menu::SetVisable(struct TMenuItem* menuItem, bool visible)
	{
		if (self == nullptr || self->SetVisable == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetVisable, menuItem, visible);
	}

	bool Menu::GetChecked(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetChecked == nullptr) {
			return false;
		}

		if (menuItem == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetChecked, menuItem);
	}

	void Menu::SetChecked(struct TMenuItem* menuItem, bool checked)
	{
		if (self == nullptr || self->SetChecked == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetChecked, menuItem, checked);
	}

	bool Menu::GetRadioItem(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetRadioItem == nullptr) {
			return false;
		}

		if (menuItem == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetRadioItem, menuItem);
	}

	void Menu::SetRadioItem(struct TMenuItem* menuItem, bool isRadioItem)
	{
		if (self == nullptr || self->SetRadioItem == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetRadioItem, menuItem, isRadioItem);
	}

	i32 Menu::GetGroupIndex(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetGroupIndex == nullptr) {
			return 0;
		}

		if (menuItem == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetGroupIndex, menuItem);
	}

	void Menu::SetGroupIndex(struct TMenuItem* menuItem, i32 value)
	{
		if (self == nullptr || self->SetGroupIndex == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetGroupIndex, menuItem, value);
	}

	i32 Menu::GetTag(struct TMenuItem* menuItem)
	{
		if (self == nullptr || self->GetTag == nullptr) {
			return 0;
		}

		if (menuItem == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetTag, menuItem);
	}

	void Menu::SetTag(struct TMenuItem* menuItem, i32 value)
	{
		if (self == nullptr || self->SetTag == nullptr) {
			return;
		}

		if (menuItem == nullptr) {
			return;
		}

		wrap_call(self->SetTag, menuItem, value);
	}
}