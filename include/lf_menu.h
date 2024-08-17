#ifndef __LF_MENU_H__
#define __LF_MENU_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class Menu
	{
	public:
		explicit Menu(struct TMemuFunc* self);
		virtual ~Menu();
	public:
		struct TMenuItem* GetMainMenu();
		struct TMenuItem* GetControlMenu();
		struct TMenuItem* GetViewMenu();
		struct TMenuItem* GetOptionMenu();
		struct TMenuItem* GetManagerMenu();
		struct TMenuItem* GetToolsMenu();
		struct TMenuItem* GetHelpMenu();
		struct TMenuItem* GetPluginMenu();
		i32 Count(struct TMenuItem* menuItem);
		struct TMenuItem* GetItems(struct TMenuItem* menuItem, i32 index);
		struct TMenuItem* Add(intptr_t plugID, struct TMenuItem* menuItem, const char* caption, i32 tag, void* onClick);
		struct TMenuItem* Insert(intptr_t plugID, struct TMenuItem* menuItem, i32 index, const char* caption, i32 tag, void* onClick);
		bool GetCaption(struct TMenuItem* menuItem, char* dest, u32* destLen);
		void SetCaption(struct TMenuItem* menuItem, const char* caption);
		bool GetEnabled(struct TMenuItem* menuItem);
		void SetEnabled(struct TMenuItem* menuItem, bool enabled);
		bool GetVisable(struct TMenuItem* menuItem);
		void SetVisable(struct TMenuItem* menuItem, bool visible);
		bool GetChecked(struct TMenuItem* menuItem);
		void SetChecked(struct TMenuItem* menuItem, bool checked);
		bool GetRadioItem(struct TMenuItem* menuItem);
		void SetRadioItem(struct TMenuItem* menuItem, bool isRadioItem);
		i32 GetGroupIndex(struct TMenuItem* menuItem);
		void SetGroupIndex(struct TMenuItem* menuItem, i32 value);
		i32 GetTag(struct TMenuItem* menuItem);
		void SetTag(struct TMenuItem* menuItem, i32 value);
	private:
		struct TMemuFunc* self;
	};
}

#endif // __LF_MENU_H__