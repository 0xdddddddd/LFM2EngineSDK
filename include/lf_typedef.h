#ifndef __LF_TYPEDEF_H__
#define __LF_TYPEDEF_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include "lf_platform.h"

#define MAXFLUTECOUNT 8
#define ITEMNAMELEN 30
#define MAP_NAME_LEN 30
#define ITEM_NAME_LEN 60
#define ACTOR_NAME_LEN 14                                   // 角色长度
#define ITEM_PROP_COUNT 20
#define ITEM_PROP_VALUES_COUNT 3
#define MAX_FLUTE_COUNT 8                                   // 最大凹槽数量
#define USER_ITEM_ADD_DATA_BYTE_COUNT 20
#define USER_ITEM_ADD_DATA_INT_COUNT 10
#define USER_ITEM_ADD_DATA_TEXT_COUNT 2
#define ACTORNAMELEN 14                                     // 角色长度

// 绑定属性BindType取值
#define BINDTYPE_NODROP 0                                   // 禁止扔
#define BINDTYPE_NODEAL 1                                   // 禁止交易
#define BINDTYPE_NOSTORAGE 2                                // 禁止存
#define BINDTYPE_NOREPAIR 3                                 // 禁止修
#define BINDTYPE_NOSELL 4                                   // 禁止卖
#define BINDTYPE_NOSCATTER 5                                // 禁止爆出
#define BINDTYPE_DROPDELETE 6                               // 丢弃消失

// 内存流指针定位SeekOrigin取值
#define SEEKORIGN_BEGIN 0                                   // 从头开始
#define SEEKORIGN_CURRENT 1                                 // 从当前位置开始
#define SEEKORIGN_END 2                                     // 最后开始

// 发关消息相关消息类型 MsgType 取值
#define MSGTYEPE_NOTICE 0                                   // 公告
#define MSGTYEPE_HINT 1                                     // 提示
#define MSGTYEPE_SYSTEM 2                                   // 系统
#define MSGTYEPE_SAY 3                                      // ??
#define MSGTYEPE_MON 4                                      // ??
#define MSGTYEPE_GM 5                                       // GM
#define MSGTYEPE_CUST 6                                     // 祝福
#define MSGTYEPE_CASTLE 6                                   // 城主
#define MSGTYEPE_CHAR 7                                     // ??

// 技能类型 MagAttr 取值
#define MAGATTR_HUM 0                                       // 人物技能
#define MAGATTR_HERO 1                                      // 英雄技能
#define MAGATTR_CONTINUOUS 2                                // 连击技能
#define MAGATTR_Defense 3                                   // 静之技能
#define MAGATTR_Attack 4                                    // 怒之技能

// TM2Engine_GetGlobalIniFile参数M2IniType取值
#define M2INI_SETUP 0                                       // !Setup.txt
#define M2INI_STRING 1                                      // String.ini

// TM2Engine_GetOtherFileDir参数M2FileType取值
#define M2FILE_ENVIR_DIR 0                                  // ENVIR目录
#define M2FILE_PLUG_DIR 1                                   // 插件目录
#define M2FILE_GUILD_DIR 2                                  // 行会目录
#define M2FILE_GUILD_FILE 3                                 // 行会文件
#define M2FILE_CASTLE_DIR 4                                 // 城堡目录
#define M2FILE_CASTLE_FILE 5                                // 城堡文件
#define M2FILE_MAP_DIR 6                                    // 地图目录
#define M2FILE_NOTICE_DIR 7                                 // 公告目录
#define M2FILE_BOX_DIR 8                                    // 宝箱目录
#define M2FILE_BOX_FILE 9                                   // 宝箱文件
#define M2FILE_CUSTOM_MON 10                                // 自定义怪物目录
#define M2FILE_CUSTOM_MAGIC 11                              // 自定义技能目录
#define M2FILE_CUSTOM_NPC 12                                // 自定义NPC目录
#define M2FILE_ITEMDROP_DIR 13                              // 物品掉落规则目录
#define M2FILE_ITEMDROPLOG_DIR 14                           // 物品掉落规则日志目录
#define M2FILE_CONLOG_DIR 15                                // 登录日志目录

#endif // __LF_TYPEDEF_H__