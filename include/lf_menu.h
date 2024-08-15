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
		i32 Count();
		struct TMenuItem* GetItems(i32 index);
		struct TMenuItem* Add(i32 plugID, struct TMenuItem* menuItem, const char* caption, i32 tag, void* onClick);
		struct TMenuItem* Insert(i32 plugID, struct TMenuItem* menuItem, i32 index, const char* caption, i32 tag, void* onClick);
		bool GetCaption(char* dest, u32* destLen);
		void SetCaption(const char* caption);
		bool GetEnabled();
		void SetEnabled(bool enabled);
		bool GetVisable();
		void SetVisable(bool visible);
		bool GetChecked();
		void SetChecked(bool checked);
		bool GetRadioItem();
		void SetRadioItem(bool isRadioItem);
		i32 GetGroupIndex();
		void SetGroupIndex(i32 value);
		i32 GetTag();
		void SetTag(i32 value);
	private:
		struct TMemuFunc* self;
		struct TMenuItem* object;
	};
}

#endif // __LF_MENU_H__