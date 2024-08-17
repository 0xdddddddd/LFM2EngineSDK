#ifndef __LF_STRUCT_H__
#define __LF_STRUCT_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include "lf_platform.h"
#include "lf_typedef.h"

namespace LF
{
	struct TMemoryFunc
	{
		void* Allow;                                            // 申请内存
		void* Free;                                             // 释放内存
		void* Realloc;                                          // 重新分配内存大小 (若扩大内存则保留原始内存的值)
		void* Reserved[4];
	};

	struct TListFunc
	{
		void* Create;                                           // 列表创建
		void* Free;                                             // 列表释放
		void* Count;                                            // 取列表数量
		void* Clear;                                            // 清空列表
		void* Add;                                              // 添加元素
		void* Insert;                                           // 插入元素
		void* Remove;                                           // 根据元素删除
		void* Delete;                                           // 根据索引删除
		void* GetItem;                                          // 取得元素
		void* SetItem;                                          // 设置元素
		void* IndexOf;                                          // 得到元素的索引
		void* Exchange;                                         // 交换元素
		void* CopyTo;                                           // 复制到另一个列表
		void* Reserved[20];
	};

	struct TStringListFunc
	{
		void* Create;                                           // 创建文本列表
		void* Free;                                             // 释放文本列表
		void* GetCaseSensitive;                                 // 判断是否分大小写
		void* SetCaseSensitive;                                 // 设置是否分大小写
		void* GetSorted;                                        // 是否排序
		void* SetSorted;                                        // 设置是否自动排序
		void* GetDuplicates;                                    // 是否重复
		void* SetDuplicates;                                    // 设置是否允许重复
		void* Count;                                            // 取文本行数
		void* GetText;                                          // 取得所有内容
		void* SetText;                                          // 设置内容
		void* Add;                                              // 添加一行
		void* AddObject;                                        // 添加一行，并将该行绑定一个对象
		void* Insert;                                           // 插入一行
		void* InsertObject;                                     // 插入一行，并将该行绑定一个对象
		void* Remove;                                           // 根据指定文本的行
		void* Delete;                                           // 删除指定的第几行(行数从0开始)
		void* GetItem;                                          // 取一行的内容
		void* SetItem;                                          // 设置某行的内容
		void* GetObject;                                        // 取某行绑定的对象
		void* SetObject;                                        // 设置某行的绑定对象
		void* IndexOf;                                          // 根据文本得到行的索引
		void* IndexOfObject;                                    // 根据绑定对象得到行索引
		void* Find;                                             // 二分查找某行的内容 (每行的内容必须是排序的)
		void* Exchange;                                         // 交换两行的内容及绑定的对象
		void* LoadFromFile;                                     // 从文件载入
		void* SaveToFile;                                       // 存到文件
		void* CopyTo;                                           // 复制
		void* Reserved[20];
	};

	struct TMemoryStreamFunc
	{
		void* Create;                                           // 创建内存流
		void* Free;                                             // 释放内存流
		void* GetSize;                                          // 取得大小
		void* SetSize;                                          // 设置大小
		void* Clear;                                            // 清空
		void* Read;                                             // 把内存流的数据读取到 Buffer 中
		void* Write;                                            // 向内存流写入数据
		void* Seek;                                             // 指针定位 SeekOrigin: 0 (从头开始), 1 (当前位置开始), 2 (从尾部开始)
		void* Memory;                                           // 获取流数据的内存指针
		void* GetPosition;                                      // 获取指针位置
		void* SetPosition;                                      // 指针定位 (定到第几个字节)
		void* LoadFromFile;                                     // 从文件载入
		void* SaveToFile;                                       // 保存到文件

		void* Reserved[20];
	};

	struct TMemuFunc
	{
		void* GetMainMenu;                                      // 获取主菜单
		void* GetControlMenu;                                   // 获取控制菜单
		void* GetViewMenu;                                      // 获取查看菜单
		void* GetOptionMenu;                                    // 获取选项菜单
		void* GetManagerMenu;                                   // 获取管理菜单
		void* GetToolsMenu;                                     // 获取工具菜单
		void* GetHelpMenu;                                      // 获取帮助菜单
		void* GetPluginMenu;                                    // 获取插件菜单
		void* Count;                                            // 获取子菜单数量
		void* GetItems;                                         // 获取某个子菜单
		void* Add;                                              // 添加菜单
		void* Insert;                                           // 插入菜单
		void* GetCaption;                                       // 获取菜单标题
		void* SetCaption;                                       // 设置菜单标题
		void* GetEnabled;                                       // 获取菜单可用
		void* SetEnabled;                                       // 设置菜单可用
		void* GetVisable;                                       // 获取菜单可见
		void* SetVisable;                                       // 设置菜单可见
		void* GetChecked;                                       // 获取菜单选中状态
		void* SetChecked;                                       // 设置菜单选中状态
		void* GetRadioItem;                                     // 获取菜单是否为单选
		void* SetRadioItem;                                     // 设置菜单是否为单选
		void* GetGroupIndex;                                    // 获取菜单单选分组
		void* SetGroupIndex;                                    // 设置菜单单选分组
		void* GetTag;                                           // 获取附加数据
		void* SetTag;                                           // 设置附加数据

		void* Reserved[20];
	};

	struct TIniFileFunc
	{
		void* Create;                                           // 创建Ini对象
		void* Free;                                             // 释放ini对象
		void* SectionExists;                                    // 判断区段是否存在
		void* ValueExists;                                      // 判断键是否存在
		void* ReadString;                                       // 读取文本
		void* WriteString;                                      // 写入文本
		void* ReadInteger;                                      // 读取整数
		void* WriteInteger;                                     // 写入整数
		void* ReadBool;                                         // 读取布尔值
		void* WriteBool;                                        // 写入布尔值

		void* Reserved[30];
	};

	struct TMagicACListFunc
	{
		void* Count;                                            // 技能破防百分比列表数量
		void* GetItem;                                          // 取单个元素
		void* FindByMagIdx;                                     // 根据技能得到破防百分比信息

		void* Reserved[10];
	};

	struct TMapManagerFunc
	{
		void* FindMap;                                          // 根据地图名得到地图对象
		void* GetMapList;                                       // 得到地图列表; 返回值中每个元素为：_TEnvirnoment

		void* Reserved[40];
	};

	struct TEnvirnomentFunc
	{
		void* GetMapName;                                       // 地图名称
		void* GetMapDesc;                                       // 地图描述
		void* GetWidth;                                         // 地图宽度
		void* GetHeight;                                        // 地图高度
		void* GetMinMap;                                        // 小地图
		void* IsMainMap;                                        // 是否主地图
		void* GetMainMapName;                                   // 主地图名
		void* IsMirrMap;                                        // 是否动态镜像地图
		void* GetMirrMapCreateTick;                             // 动态镜像地图创建时间
		void* GetMirrMapSurvivalTime;                           // 动态镜像地图存活时间
		void* GetMirrMapExitToMap;                              // 动态地图退到哪个地图
		void* GetMirrMapMinMap;                                 // 动态镜像地图小地图编号
		void* GetAlwaysShowTime;                                // 动态镜像地图是否一直显示时间
		void* IsFBMap;                                          // 是否副本地图
		void* GetFBMapName;                                     // 副本地图名
		void* GetFBEnterLimit;                                  // 副本进入限制 (0:队友必须有三职业; 1:不限制职业，队友均可进; 2:只允许自己; 3:允许行会进入)
		void* GetFBCreated;                                     // 副本地图是否创建
		void* GetFBCreateTime;                                  // 副本地图创建时间
		void* GetMapParam;                                      // 获取地图是否设置某参数
		void* GetMapParamValue;                                 // 获取地图设置某参数值
		void* CheckCanMove;                                     // 地图点是否可达，boFlag = False时，会判断该坐标点是否有角色占据
		void* IsValidObject;                                    // 判断地图上以坐标(nX, nY)为空中，以nRange为半径的矩形范围内，是否有Obj对象
		void* GetItemObjects;                                   // 获取地图上某坐标的物品列表
		void* GetBaseObjects;                                   // 获取地图上某坐标的角色列表
		void* GetPlayObjects;                                   // 获取地图上某坐标的人物列表
		void* Reserved[100];
	};

	struct TM2EngineFunc
	{
		void* GetVersion;                                       // 取M2版本号
		void* GetVersionInt;                                    // 取版本号
		void* GetMainFormHandle;                                // 取主窗体主柄
		void* SetMainFormCaption;                               // 设置主窗体标题
		void* GetAppDir;                                        // 主程序所在目录
		void* GetGlobalIniFile;                                 // 获取服务器全局ini对象
		void* GetOtherFileDir;                                  // 获取其他的文件或目录
		void* MainOutMessage;                                   // M2输出信息
		void* GetGlobalVarI;                                    // 读取全局I变量
		void* SetGlobalVarI;                                    // 设置全局I变量
		void* GetGlobalVarG;                                    // 读取全局G变量
		void* SetGlobalVarG;                                    // 设置全局G变量
		void* GetGlobalVarA;                                    // 读取全局A变量
		void* SetGlobalVarA;                                    // 设置全局A变量
		void* EncodeBuffer;                                     // 编码
		void* DecodeBuffer;                                     // 解码
		void* ZLibEncodeBuffer;                                 // 压缩编码
		void* ZLibDecodeBuffer;                                 // 压缩解码
		void* EncryptBuffer;                                    // 加密
		void* DecryptBuffer;                                    // 解密
		void* EncryptPassword;                                  // 密码加密(不同的电脑得到不同的结果)
		void* DecryptPassword;                                  // 密码解密
		void* GetTakeOnPosition;                                // 根据物品StdMode得到物品装备位置
		void* CheckBindType;                                    // 检查物品是否有某个绑定类型
		void* SetBindValue;                                     // 设置物品某个绑定类型
		void* GetRGB;                                           // 根据单字节颜色得到RGB颜色
		void* Reserved[100];
	};

	struct TBaseObjectFunc
	{
		void* GetChrName;                                       // 名称
		void* SetChrName;                                       // 设置名称(不能设置人物、英雄)
		void* RefShowName;                                      // 刷新名称到客户端
		void* RefNameColor;                                     // 刷新名称颜色 PKPoint等改变时

		void* GetGender;                                        // 获取性别
		void* SetGender;                                        // 设置性别

		void* GetJob;                                           // 获取职业
		void* SetJob;                                           // 设置职业

		void* GetHair;                                          // 获取发型
		void* SetHair;                                          // 设置发型

		void* GetEnvir;                                         // 所在地图
		void* GetMapName;                                       // 所在地图
		void* GetCurrX;                                         // 坐标X
		void* GetCurrY;                                         // 坐标Y
		void* GetDirection;                                     // 当前方向

		void* GetHomeMap;                                       // 回城地图
		void* GetHomeX;                                         // 回城坐标X
		void* GetHomeY;                                         // 回城坐标Y
		void* GetPermission;                                    // 权限等级
		void* SetPermission;                                    // 设置权限等级
		void* GetDeath;                                         // 是否死亡
		void* GetDeathTick;                                     // 死亡时间
		void* GetGhost;                                         // 是否死亡并清理
		void* GetGhostTick;                                     // 清理时间
		void* MakeGhost;                                        // 杀死并清掉
		void* ReAlive;                                          // 复活

		void* GetRaceServer;                                    // 类型
		void* GetAppr;                                          // Appr
		void* GetRaceImg;                                       // RaceImg

		void* GetCharStatus;                                    // 状态
		void* SetCharStatus;                                    // 状态改变
		void* StatusChanged;                                    // 发送状态改变

		void* GetHungerPoint;                                   // 获取饥饿点
		void* SetHungerPoint;                                   // 设置饥饿点

		void* IsNGMonster;                                      // 是否为内功怪
		void* IsDummyObject;                                    // 是否假人

		void* GetViewRange;                                     // 获取视觉范围
		void* SetViewRange;                                     // 设置视觉范围
		void* GetAbility;                                       // 原始属性

		void* GetWAbility;                                      // 最终属性
		void* SetWAbility;                                      // 设置属性

		void* GetSlaveList;                                     // 宝宝列表
		void* GetMaster;                                        // 主人
		void* GetMasterEx;                                      // 最上层主人

		void* GetSuperManMode;                                  // 是否无敌模式
		void* SetSuperManMode;                                  // 设置无敌模式

		void* GetAdminMode;                                     // 是否管理模式
		void* SetAdminMode;                                     // 设置管理模式

		void* GetTransparent;                                   // 魔法隐身
		void* SetTransparent;                                   // 设置魔法隐身

		void* GetObMode;                                        // 隐身模式
		void* SetObMode;                                        // 设置隐身模式

		void* GetStoneMode;                                     // 石像化模式
		void* SetStoneMode;                                     // 设置石像化模式

		void* GetStickMode;                                     // 是否能推动
		void* SetStickMode;                                     // 设置不可推动模式

		void* GetIsAnimal;                                      // 怪物是否可挖
		void* SetIsAnimal;                                      // 设置怪物是否可挖

		void* GetIsNoItem;                                      // 死亡是否不掉装备
		void* SetIsNoItem;                                      // 设置死亡是否不掉装备

		void* GetCoolEye;                                       // 隐身免疫
		void* SetCoolEye;                                       // 设置隐身免疫

		void* GetHitPoint;                                      // 命中
		void* SetHitPoint;                                      // 设置命中

		void* GetSpeedPoint;                                    // 敏捷
		void* SetSpeedPoint;                                    // 设置敏捷

		void* GetHitSpeed;                                      // 攻击速度
		void* SetHitSpeed;                                      // 设置攻击速度

		void* GetWalkSpeed;                                     // 移动速度
		void* SetWalkSpeed;                                     // 设置移动速度

		void* GetHPRecover;                                     // HP恢复速度
		void* SetHPRecover;                                     // 设置HP恢复速度

		void* GetMPRecover;                                     // MP恢复速度
		void* SetMPRecover;                                     // 设置MP恢复速度

		void* GetPoisonRecover;                                 // 中毒恢复
		void* SetPoisonRecover;                                 // 设置中毒恢复

		void* GetAntiPoison;                                    // 毒躲避
		void* SetAntiPoison;                                    // 设置毒躲避

		void* GetAntiMagic;                                     // 魔法躲避
		void* SetAntiMagic;                                     // 设置魔法躲避

		void* GetLuck;                                          // 幸运
		void* SetLuck;                                          // 设置幸运

		void* GetAttatckMode;                                   // 攻击模式
		void* SetAttatckMode;                                   // 设置攻击模式

		void* GetNation;                                        // 获取所属国家
		void* SetNation;                                        // 设置所属国家

		void* GetNationaName;                                   // 获取国家名字

		void* GetGuild;                                         // 行会
		void* GetGuildRankNo;                                   // 人物所在行会中的分组编号
		void* GetGuildRankName;                                 // 人物所在行会中的分组名称
		void* IsGuildMaster;                                    // 是否为行会老大

		void* GetHideMode;                                      // 隐身戒指 特殊物品:111
		void* SetHideMode;

		void* GetIsParalysis;                                   // 麻痹戒指  特殊物品:113
		void* SetIsParalysis;
		void* GetParalysisRate;                                 // 麻痹几率
		void* SetParalysisRate;

		void* GetIsMDParalysis;                                 // 魔道麻痹戒指  特殊物品:204
		void* SetIsMDParalysis;
		void* GetMDParalysisRate;                               // 魔道麻痹几率
		void* SetMDParalysisRate;

		void* GetIsFrozen;                                      // 冰冻戒指  特殊物品:205
		void* SetIsFrozen;
		void* GetFrozenRate;                                    // 冰冻几率
		void* SetFrozenRate;

		void* GetIsCobwebWinding;                               // 蛛网戒指  特殊物品:206
		void* SetIsCobwebWinding;
		void* GetCobwebWindingRate;                             // 蛛网几率
		void* SetCobwebWindingRate;

		void* GetUnParalysisValue;                              // 防麻几率
		void* SetUnParalysisValue;
		void* GetIsUnParalysis;                                 // 根据几率取当次是否防麻

		void* GetUnMagicShieldValue;                            // 防护身几率
		void* SetUnMagicShieldValue;
		void* GetIsUnMagicShield;                               // 根据几率取当次是否防护身

		void* GetUnRevivalValue;                                // 防复活几率
		void* SetUnRevivalValue;
		void* GetIsUnRevival;                                   // 根据几率取当次是否防复活

		void* GetUnPosionValue;                                 // 防毒几率
		void* SetUnPosionValue;
		void* GetIsUnPosion;                                    // 根据几率取当次是否防毒

		void* GetUnTammingValue;                                // 防诱惑几率
		void* SetUnTammingValue;
		void* GetIsUnTamming;                                   // 根据几率取当次是否防诱惑

		void* GetUnFireCrossValue;                              // 防火墙几率
		void* SetUnFireCrossValue;
		void* GetIsUnFireCross;                                 // 根据几率取当次是否防火墙

		void* GetUnFrozenValue;                                 // 防冰冻几率
		void* SetUnFrozenValue;
		void* GetIsUnFrozen;                                    // 根据几率取当次是否防冰冻

		void* GetUnCobwebWindingValue;                          // 防蛛网几率
		void* SetUnCobwebWindingValue;
		void* GetIsUnCobwebWinding;                             // 根据几率取当次是否防蛛网

		void* GetTargetCret;                                    // 获取当前攻击目标
		void* SetTargetCret;                                    // 设置当前攻击目标
		void* DelTargetCreat;                                   // 删除当前攻击目标
		void* GetLastHiter;                                     // 被谁攻击
		void* GetExpHitter;                                     // 谁得经验
		void* GetPoisonHitter;                                  // 施毒者
		void* GetPoseCreate;                                    // 面前的对象是谁

		void* IsProperTarget;                                   // 是否为攻击目标
		void* IsProperFriend;                                   // 是否为朋友

		void* TargetInRange;                                    // 判断对象在指定范围内

		void* SendMsg;                                          // 发消息
		void* SendDelayMsg;                                     // 发延时消息
		void* SendRefMsg;                                       // 向全屏玩家发消息
		void* SendUpdateMsg;                                    // 更新发消息
		void* SysMsg;                                           // 发聊天信息

		void* GetBagItemList;                                   // 背包物品
		void* IsEnoughBag;                                      // 检测背包是否满
		void* IsEnoughBagEx;                                    // 背包是否还有足够的空间放指定数量的物品
		void* AddItemToBag;                                     // 加物品到背包
		void* DelBagItemByIndex;                                // 删除背包第几个物品
		void* DelBagItemByMakeIdx;                              // 根据MakeIndex删除背包物品
		void* DelBagItemByUserItem;                             // 根据UserItem删除背包物品

		void* IsInSafeZone;                                     // 检查角色是否在安全区
		void* IsPtInSafeZone;                                   // 检查坐标点是否在安全区内

		void* RecalcLevelAbil;                                  // 重算等级属性(IsSysDef=True: 使用系统默认等级属性; IsSysDef=False: 使用自定义等级属性)
		void* RecalcAbil;                                       // 重算属性
		void* RecalcBagWeight;                                  // 重算背包重量

		void* GetLevelExp;                                      // 指定等级升到下级所要经验值

		void* HasLevelUp;                                       // 升级
		void* TrainSkill;                                       // 加技能熟练点; IsDoChec = True,判断技能加点条件

		void* CheckMagicLevelup;                                // 检查技能是否升级
		void* MagicTranPointChanged;                            // 技能点改点

		void* DamageHealth;                                     // 掉血
		void* DamageSpell;                                      // 消耗MP
		void* IncHealthSpell;                                   // 增加HP/MP
		void* HealthSpellChanged;                               // 通知客户端HP/MP改变

		void* FeatureChanged;                                   // 通知客户端外观改变
		void* WeightChanged;                                    // 通知客户端负重改变

		void* GetHitStruckDamage;                               // 减防后物理伤害, nType = 1:减物理防御；nType = 2:减魔法盾防御
		void* GetMagStruckDamage;                               // 减防后魔法伤害

		void* GetActorIcon;                                     // 顶戴花花翎 (Index: 0-9)
		void* SetActorIcon;                                     // 顶戴花花翎 (Index: 0-9)

		void* RefUseIcons;                                      // 刷新顶戴花花翎
		void* RefUseEffects;                                    // 刷新效果

		void* SpaceMove;                                        // 飞到指定地图及坐标
		void* MapRandomMove;                                    // 飞到指定地图随机坐标

		void* CanMove;                                          // 对象是否可移动 (当麻痹，冰结等状态时，不能移动)
		void* CanRun;                                           // 是否可以从一个点跑往另一个点
		void* TurnTo;                                           // 转向
		void* WalkTo;                                           // 指定方向走一步
		void* RunTo;                                            // 指定方向跑一步

		void* PluginList;                                       // 预留给插件用，其他地方未使用

		void* Reserved[100];
	};

	struct TSmartObjectFunc
	{
		void* GetMagicList;                                     // 获取技能列表

		void* GetUseItem;                                       // 取某个位置的装备; Index: 0-29

		void* GetJewelryBoxStatus;                              // 首饰盒状态 0:未激活; 1:激活; 2:开启
		void* SetJewelryBoxStatus;                              // 设置首饰盒状态 0:未激活; 1:激活; 2:开启
		void* GetJewelryItem;                                   // 取首饰盒物品; Index: 0-5

		void* GetIsShowGodBless;                                // 是否显示神佑袋
		void* SetIsShowGodBless;                                // 设置显示神佑袋

		void* GetGodBlessItemsState;                            // 取某个神佑格子的开关状态
		void* SetGodBlessItemsState;                            // 设置神佑格子的开关状态

		void* GetGodBlessItem;                                  // 取神佑袋物品; Index: 0-11

		void* GetFengHaoItems;                                  // 封号列表
		void* GetActiveFengHao;                                 // 激活的封号
		void* SetActiveFengHao;                                 // 设置当前激活封号; -1清封号
		void* ActiveFengHaoChanged;                             // 刷新活动封号到客户端
		void* DeleteFengHao;                                    // 删除封号
		void* ClearFengHao;                                     // 清空封号

		void* GetMoveSpeed;
		void* SetMoveSpeed;
		void* GetAttackSpeed;
		void* SetAttackSpeed;
		void* GetSpellSpeed;
		void* SetSpellSpeed;
		void* RefGameSpeed;                                     // 刷新游戏速度
		void* GetIsButch;                                       // 是否可挖
		void* SetIsButch;                                       // 设置是否可挖

		void* GetIsTrainingNG;                                  // 是否学内功
		void* SetIsTrainingNG;

		void* GetIsTrainingXF;                                  // 是否学心法
		void* SetIsTrainingXF;

		void* GetIsOpenLastContinuous;                          // 第4个连击是否开启
		void* SetIsOpenLastContinuous;                          // 设置开启第4个连击

		void* GetContinuousMagicOrder;                          // 连击顺序 Index:0-3
		void* SetContinuousMagicOrder;                          // 设置连击顺序

		void* GetPKDieLostExp;                                  // PK 死亡掉经验，不够经验就掉等级
		void* SetPKDieLostExp;

		void* GetPKDieLostLevel;                                // PK 死亡掉等级
		void* SetPKDieLostLevel;

		void* GetPKPoint;                                       // PK点数
		void* SetPKPoint;
		void* IncPKPoint;                                       // 增加PK值
		void* DecPKPoint;                                       // 减少PK值

		void* GetPKLevel;                                       // PK等级
		void* SetPKLevel;

		void* GetIsTeleport;                                    // 传送戒指 特殊物品:112
		void* SetIsTeleport;

		void* GetIsRevival;                                     // 复活戒指 特殊物品:114
		void* SetIsRevival;

		void* GetRevivalTime;                                   // 复活戒指: 复活间隔
		void* SetRevivalTime;

		void* GetIsFlameRing;                                   // 火焰戒指 特殊物品:115
		void* SetIsFlameRing;

		void* GetIsRecoveryRing;                                // 治愈戒指 特殊物品:116
		void* SetIsRecoveryRing;

		void* GetIsMagicShield;                                 // 护身戒指 特殊物品:118
		void* SetIsMagicShield;

		void* GetIsMuscleRing;                                  // 活力戒指(超负载) 特殊物品:119
		void* SetIsMuscleRing;

		void* GetIsFastTrain;                                   // 技巧项链 特殊物品:120
		void* SetIsFastTrain;

		void* GetIsProbeNecklace;                               // 探测项链 特殊物品:121
		void* SetIsProbeNecklace;

		void* GetIsRecallSuite;                                 // 记忆物品 特殊物品:122, 124, 125
		void* SetIsRecallSuite;

		void* GetIsPirit;                                       // 祈祷装备 特殊物品:126 - 129
		void* SetIsPirit;

		void* GetIsSupermanItem;                                // 不死戒指 特殊物品:140
		void* SetIsSupermanItem;

		void* GetIsExpItem;                                     // 经验物品 特殊物品:141
		void* SetIsExpItem;

		void* GetExpItemValue;                                  // 经验物品值 特殊物品:141
		void* SetExpItemValue;

		void* GetExpItemRate;                                   // 经验物品经验倍率 (物品装备->特殊属性->经验翻倍->倍率)

		void* GetIsPowerItem;                                   // 力量物品 特殊物品:142
		void* SetIsPowerItem;

		void* GetPowerItemValue;                                // 力量物品值 特殊物品:142
		void* SetPowerItemValue;                                // 设置力量物品值 特殊物品:142

		void* GetPowerItemRate;                                 // 力量物品经验倍率 (物品装备->特殊属性->攻击翻倍->倍率)

		void* GetIsGuildMove;                                   // 行会传送装备 特殊物品:145
		void* SetIsGuildMove;

		void* GetIsAngryRing;                                   // 幸运戒指 特殊物品 170
		void* SetIsAngryRing;

		void* GetIsStarRing;                                    // 流星戒指
		void* SetIsStarRing;

		void* GetIsACItem;                                      // 防御物品
		void* SetIsACItem;

		void* GetACItemValue;                                   // 防御值
		void* SetACItemValue;

		void* GetIsMACItem;                                     // 魔御物品
		void* SetIsMACItem;

		void* GetMACItemValue;                                  // 魔御值
		void* SetMACItemValue;

		void* GetIsNoDropItem;                                  // 171不掉背包物品装备
		void* SetIsNoDropItem;

		void* GetIsNoDropUseItem;                               // 172不掉身上物品装备
		void* SetIsNoDropUseItem;                               // 内功属性

		void* GetNGAbility;
		void* SetNGAbility;

		void* GetAlcohol;                                       // 酒属性
		void* SetAlcohol;

		void* RepairAllItem;                                    // 修复所有装备
		void* IsAllowUseMagic;                                  // 是否满足技能使用条件

		void* SelectMagic;                                      // 选择技能

		void* AttackTarget;                                     // 攻击目标

		void* Reserved[100];
	};

	struct TPlayObjectFunc
	{
		void* GetUserID;                                        // 帐户名
		void* GetIPAddr;                                        // IP
		void* GetIPLocal;                                       // IP归属地
		void* GetMachineID;                                     // MAC
		void* GetIsReadyRun;                                    // 是否进入游戏完成
		void* GetLogonTime;                                     // 登录时间

		void* GetSoftVerDate;                                   // 客户端版本号
		void* GetClientType;                                    // 客户端类型 (0:176; 1:185; 2:英雄版; 3:连击版; 4:传奇续章; 5:外传; 6:归来)

		void* IsOldClient;                                      // 是否为老客户端 (185兼容客户端)

		void* GetScreenWidth;                                   // 客户端分辨率 宽
		void* GetScreenHeight;                                  // 客户端分辨率 高

		void* GetClientViewRange;                               // 客户端视觉范围大小

		void* GetRelevel;                                       // 转生等级
		void* SetRelevel;

		void* GetBonusPoint;                                    // 未分配属性点
		void* SetBonusPoint;
		void* SendAdjustBonus;                                  // 发送属性点

		void* GetHeroName;                                      // 主将英雄名
		void* GetDeputyHeroName;                                // 副将英雄名
		void* GetDeputyHeroJob;                                 // 副将英雄职业
		void* GetMyHero;                                        // 英雄对象

		void* GetFixedHero;                                     // 是否评定主副英雄

		void* ClientHeroLogOn;                                  // 召唤英雄

		void* GetStorageHero;                                   // 英雄是否寄存
		void* GetStorageDeputyHero;                             // 副将英雄是否寄存

		void* GetIsStorageOpen;                                 // 仓库是否开启 Index:仓库序号(0-3);
		void* SetIsStorageOpen;

		void* GetGold;                                          // 金币数量
		void* SetGold;
		void* GetGoldMax;                                       // 人物身上最多可带金币

		void* IncGold;                                          // 加金币
		void* DecGold;                                          // 减金币                  
		void* GoldChanged;                                      // 通知客户端刷新 (金币，元宝)

		void* GetGameGold;                                      // 元宝数量
		void* SetGameGold;
		void* IncGameGold;                                      // 加元宝
		void* DecGameGold;                                      // 减元宝
		void* GameGoldChanged;                                  // 通知客户端刷新 (元宝，游戏点)

		void* GetGamePoint;                                     // 游戏点
		void* SetGamePoint;                                     // 设置游戏点                  
		void* IncGamePoint;                                     // 加游戏点
		void* DecGamePoint;                                     // 减游戏点                  

		void* GetGameDiamond;                                   // 金刚石                  
		void* SetGameDiamond;
		void* IncGameDiamond;                                   // 加金刚石
		void* DecGameDiamond;                                   // 减金刚石
		void* NewGamePointChanged;                              // 通知客户端刷新 (金刚石，灵符)

		void* GetGameGird;                                      // 灵符
		void* SetGameGird;
		void* IncGameGird;                                      // 加灵符
		void* DecGameGird;                                      // 减灵符

		void* GetGameGoldEx;                                    // 新游戏点
		void* SetGameGoldEx;

		void* GetGameGlory;                                     // 荣誉
		void* SetGameGlory;
		void* IncGameGlory;                                     // 加荣誉
		void* DecGameGlory;                                     // 减荣誉
		void* GameGloryChanged;                                 // 通知客户端刷新荣誉

		void* GetPayMentPoint;                                  // 充值点
		void* SetPayMentPoint;

		void* GetMemberType;                                    // 会员类型
		void* SetMemberType;
		void* GetMemberLevel;                                   // 会员等级
		void* SetMemberLevel;

		void* GetContribution;                                  // 贡献度
		void* SetContribution;

		void* IncExp;                                           // 加经验，调用些函数会自动刷新客户端
		void* SendExpChanged;                                   // 经验改变

		void* IncExpNG;                                         // 加内功经验，调用些函数会自动刷新客户端
		void* SendExpNGChanged;                                 // 内功经验改变

		void* IncBeadExp;                                       // 增加聚灵珠经验

		void* GetVarP;                                          // P变量 m_nVal  [0..999]
		void* SetVarP;

		void* GetVarM;                                          // M变量 m_nMval [0..999]
		void* SetVarM;

		void* GetVarD;                                          // D变量 m_DyVal [0..999]
		void* SetVarD;

		void* GetVarU;                                          // U变量 m_UVal [0..254]
		void* SetVarU;

		void* GetVarT;                                          // T变量 m_UVal [0..254]
		void* SetVarT;

		void* GetVarN;                                          // N变量 m_nInteger [0..999]
		void* SetVarN;

		void* GetVarS;                                          // S变量 m_sString [0..999]
		void* SetVarS;

		void* GetDynamicVarList;                                // 自定义动态变量列表 (结果的元素为 pTDynamicVar)

		void* GetQuestFlagStatus;
		void* SetQuestFlagStatus;

		void* IsOffLine;                                        // 是否离线挂机

		void* IsMaster;                                         // 是否是师傅
		void* GetMasterName;                                    // 取得师傅名字
		void* GetMasterHuman;                                   // 师傅

		void* GetApprenticeNO;                                  // 当角色为徒弟时，徒弟排名
		void* GetOnlineApprenticeList;                          // 在线徒弟列表
		void* GetAllApprenticeList;                             // 所有徒弟列表 (结果的元素为 pTMasterRankInfo)

		void* GetDearName;                                      // 取得爱人名字
		void* GetDearHuman;                                     // 爱人
		void* GetMarryCount;                                    // 离婚次数                     

		void* GetGroupOwner;                                    // 队长
		void* GetGroupMembers;                                  // 队员列表 Item: 队员名 Objects: _TBaseObject

		void* GetIsLockLogin;                                   // 锁定登录
		void* SetIsLockLogin;

		void* GetIsAllowGroup;                                  // 是否允许组队
		void* SetIsAllowGroup;

		void* GetIsAllowGroupReCall;                            // 是否允许天地合一
		void* SetIsAllowGroupReCall;

		void* GetIsAllowGuildReCall;                            // 是否允许行会合一
		void* SetIsAllowGuildReCall;

		void* GetIsAllowTrading;                                // 允许交易
		void* SetIsAllowTrading;

		void* GetIsDisableInviteHorseRiding;                    // 禁止邀请上马
		void* SetIsDisableInviteHorseRiding;

		void* GetIsGameGoldTrading;                             // 是否开启元宝交易
		void* SetIsGameGoldTrading;

		void* GetIsNewServer;                                   // 合过区没有登录过的

		void* GetIsFilterGlobalDropItemMsg;                     // 过滤掉落提示信息
		void* SetIsFilterGlobalDropItemMsg;

		void* GetIsFilterGlobalCenterMsg;                       // 过滤SendCenterMsg
		void* SetIsFilterGlobalCenterMsg;

		void* GetIsFilterGolbalSendMsg;                         // 过滤SendMsg全局信息
		void* SetIsFilterGolbalSendMsg;

		void* GetIsPleaseDrink;                                 // 是否请过酒

		void* GetIsDrinkWineQuality;                            // 饮酒时酒的品质
		void* SetIsDrinkWineQuality;

		void* GetIsDrinkWineAlcohol;                            // 饮酒时酒的度数
		void* SetIsDrinkWineAlcohol;

		void* GetIsDrinkWineDrunk;                              // 人是否喝酒醉了
		void* SetIsDrinkWineDrunk;

		void* MoveToHome;                                       // 回城
		void* MoveRandomToHome;                                 // 随机传送到回城地图

		void* SendSocket;                                       // 发送数据
		void* SendDefMessage;                                   // 发送消息
		void* SendMoveMsg;
		void* SendCenterMsg;
		void* SendTopBroadCastMsg;

		void* CheckTakeOnItems;                                 // 检测装备是否可穿戴
		void* ProcessUseItemSkill;                              // 处理装备穿脱时对应的技能

		void* SendUseItems;                                     // 发送身上装备列表
		void* SendAddItem;                                      // 发送增加物品
		void* SendDelItemList;                                  // 客户端删除多个物品 ItemList.AddObject(物品名称, MakeIndex)
		void* SendDelItem;                                      // 客户端删除物品
		void* SendUpdateItem;                                   // 客户端刷新物品
		void* SendItemDuraChange;                               // 客户端刷新装备持久改变

		void* SendBagItems;                                     // 刷新客户端包裹

		void* SendJewelryBoxItems;                              // 发送首饰盒物品

		void* SendGodBlessItems;                                // 发送神佑袋物品
		void* SendOpenGodBlessItem;                             // 神佑格开启
		void* SendCloseGodBlessItem;                            // 神佑格关闭

		void* SendUseMagics;                                    // 发送技能列表
		void* SendAddMagic;                                     // 发送技能添加
		void* SendDelMagic;                                     // 发送技能删除

		void* SendFengHaoItems;                                 // 发送封号物品
		void* SendAddFengHaoItem;                               // 发送封号增加
		void* SendDelFengHaoItem;                               // 发送封号删除

		void* SendSocketStatusFail;                             // 发送走路/跑步失败

		void* PlayEffect;
		void* IsAutoPlayGame;                                   // 是否正在内挂挂机
		void* StartAutoPlayGame;                                // 开始内挂挂机
		void* StopAutoPlayGame;                                 // 停止内挂挂机

		void* Reserved[100];
	};

	struct TDummyObjectFunc
	{
		void* IsStart;                                          // 假人是否开始挂机
		void* Start;                                            // 假人开始挂机
		void* Stop;                                             // 假人停止挂机

		void* Reserved[100];
	};

	struct THeroObjectFunc
	{
		void* GetAttackMode;                                    // 攻击模式
		void* SetAttackMode;
		void* SetNextAttackMode;                                // 切换下一个攻击模式

		void* GetBagCount;                                      // 获取背包数量
		void* GetAngryValue;                                    // 当前怒气值

		void* GetLoyalPoint;                                    // 忠诚度
		void* SetLoyalPoint;
		void* SendLoyalPointChanged;                            // 忠诚度改变

		void* IsDeputy;                                         // 是否副将英雄
		void* GetMasterName;                                    // 主人名称

		void* GetQuestFlagStatus;
		void* SetQuestFlagStatus;

		void* SendUseItems;                                     // 发送身上装备
		void* SendBagItems;                                     // 刷新英雄背包

		void* SendJewelryBoxItems;                              // 发送首饰盒物品

		void* SendGodBlessItems;                                // 发送神佑袋物品
		void* SendOpenGodBlessItem;                             // 神佑格开启
		void* SendCloseGodBlessItem;                            // 神佑格关闭

		void* SendAddItem;                                      // 发送增加物品
		void* SendDelItem;                                      // 客户端删除物品
		void* SendUpdateItem;                                   // 客户端刷新物品
		void* SendItemDuraChange;                               // 客户端刷新装备持久改变

		void* SendUseMagics;                                    // 发送技能列表
		void* SendAddMagic;                                     // 发送技能添加
		void* SendDelMagic;                                     // 发送技能删除

		void* FindGroupMagic;                                   // 取得合击技能
		void* GetGroupMagicId;                                  // 取得合击技能ID

		void* SendFengHaoItems;                                 // 发送封号物品
		void* SendAddFengHaoItem;                               // 发送封号增加
		void* SendDelFengHaoItem;                               // 发送封号删除

		void* IncExp;                                           // 加经验
		void* IncExpNG;                                         // 加内功经验

		void* IsOldClient;

		void* Reserved[100];
	};

	struct TNormNpcFunc
	{
		void* Create;                                           // 创建NPC

		void* LoadNpcScript;                                    // 载入脚本
		void* ClearScript;                                      // 清理脚本

		void* GetFilePath;
		void* SetFilePath;

		void* GetPath;
		void* SetPath;

		void* GetIsHide;
		void* SetIsHide;

		void* GetIsQuest;

		void* GetLineVariableText;

		void* GotoLable;
		void* SendMsgToUser;
		void* MessageBox;

		void* GetVarValue;
		void* SetVarValue;
		void* GetDynamicVarValue;
		void* SetDynamicVarValue;

		void* Reserved[100];
	};

	struct TUserEngineFunc
	{
		void* GetPlayerList;                                    // 获取所有在线人物列表(含假人)
		void* GetPlayerByName;                                  // 根据在线人物名称获取对象
		void* GetPlayerByUserID;                                // 根据在线帐户获取对象
		void* GetPlayerByObject;                                // 判断对象是否是一个合法的在线人物

		void* GetOfflinePlayer;                                 // 根据帐户获取一个离线挂机对象
		void* KickPlayer;                                       // 踢人

		void* GetHeroList;                                      // 获取英雄列表
		void* GetHeroByName;                                    // 根据名称获取英雄对象
		void* KickHero;                                         // 踢英雄

		void* GetMerchantList;                                  // 获取交易NPC列表
		void* GetCustomNpcConfigList;                           // 获取自定义NPC配置列表

		void* GetQuestNPCList;                                  // 获取MapQuest.txt中定义的NPC列表
		void* GetManageNPC;
		void* GetFunctionNPC;
		void* GetRobotNPC;
		void* MissionNPC;

		void* FindMerchant;                                     // 判断NPC对象是否合法
		void* FindMerchantByPos;                                // 根据地图坐标得到NPC

		void* FindQuestNPC;                                     // 判断NPC对象是否合法                 

		void* GetMagicList;                                     // Magic.DB
		void* GetCustomMagicConfigList;                         // 自定义技能配置列表
		void* GetMagicACList;                                   // M2 -> 功能设置 ->技能魔法 -> 技能破防百分比

		void* FindMagicByName;                                  // 根据技能名查找技能                 
		void* FindMagicByIndex;                                 // 根据技能编号查找技能
		void* FindMagicByNameEx;                                // 根据技能名及属性查找技能                 
		void* FindMagicByIndexEx;                               // 根据技能编号及属性查找技能

		void* FindHeroMagicByName;                              // 根据技能名查找英雄技能
		void* FindHeroMagicByIndex;                             // 根据技能编号查找英雄技能
		void* FindHeroMagicByNameEx;                            // 根据技能名及属性查找英雄技能
		void* FindHeroMagicByIndexEx;                           // 根据技能编号及属性查找英雄技能

		void* GetStdItemList;                                   // StdItem.DB
		void* GetStdItemByName;                                 // 根据物品名得到数据库的物品信息
		void* GetStdItemByIndex;                                // 根据物品编号得到数据库的物品信息                 
		void* GetStdItemName;                                   // 根据物品编号得到物品名
		void* GetStdItemIndex;                                  // 根据物品名得到物品编号

		void* MonsterList;                                      // Monster.DB

		void* SendBroadCastMsg;
		void* SendBroadCastMsgExt;
		void* SendTopBroadCastMsg;
		void* SendMoveMsg;
		void* SendCenterMsg;
		void* SendNewLineMsg;                                   // 换行消息
		void* SendSuperMoveMsg;                                 // 仿盛大顶部渐隐消息
		void* SendSceneShake;                                   // 发送屏幕震动消息

		void* CopyToUserItemFromName;                           // 随机生成元素属性
		void* CopyToUserItemFromItem;

		void* RandomUpgradeItem;
		void* RandomItemNewAbil;
		void* GetUnknowItemValue;

		void* GetAllDummyCount;                                 // 所有假人数量
		void* GetMapDummyCount;                                 // 指定地图假人数量
		void* GetOfflineCount;                                  // 离线挂机人物数量
		void* GetRealPlayerCount;                               // 在线真人数量(不含离线挂机)

		void* Reserved[100];
	};

	struct TGuildManagerFunc
	{
		void* FindGuild;                                        // 根据行会名得到行会对象
		void* GetPlayerGuild;                                   // 根据用户名得到行会对象
		void* AddGuild;                                         // 创建新行会
		void* DelGuild;                                         // 删除行会，有成员时不能删

		void* Reserved[100];
	};

	struct TGuildFunc
	{
		void* GetGuildName;                                     // 行会名称
		void* GetJoinJob;                                       // 加入行会职业 (1:战士; 2:法师; 3:道士，可组合)
		void* GetJoinLevel;                                     // 加入行会最低等级
		void* GetJoinMsg;                                       // 招贤消息
		void* GetBuildPoint;                                    // 建筑度
		void* GetAurae;                                         // 人气值/关注度
		void* GetStability;                                     // 安定度
		void* GetFlourishing;                                   // 繁荣度
		void* GetChiefItemCount;                                // 领取装备数量
		void* GetMemberCount;                                   // 行会成员数量
		void* GetOnlineMemeberCount;                            // 在线行会成员数量
		void* GetMasterCount;                                   // 掌门数量
		void* GetMaster;                                        // 得到行会正副掌门
		void* GetMasterName;                                    // 得到行会正副掌门名称
		void* CheckMemberIsFull;                                // 检查行会是否满员
		void* IsMemeber;                                        // 检查人员是否为行会成员
		void* AddMember;                                        // 人员加入行会
		void* AddMemberEx;
		void* DelMemeber;                                       // 行会删除人员
		void* DelMemeberEx;
		void* IsAllianceGuild;                                  // 判断 CheckGuild是否是Guild的联盟行会
		void* IsWarGuild;                                       // 判断是否为战争行会
		void* IsAttentionGuild;                                 // 判断是否为关注行会
		void* AddAlliance;                                      // 添加联盟行会
		void* AddWarGuild;                                      // 添加战争行会
		void* AddAttentionGuild;                                // 添加关注行会
		void* DelAllianceGuild;                                 // 删除联盟行会
		void* DelAttentionGuild;                                // 删除关注行会
		void* GetRandNameByName;
		void* GetRandNameByPlayer;
		void* SendGuildMsg;                                     // 发送行会消息
		void* Reserved[100];
	};

	struct TAppFuncDef
	{
		i32										PluginID;		// 插件ID
		struct TMemoryFunc						Memory;			// 内存操作
		struct TListFunc						List;			// 列表
		struct TStringListFunc					StringList;		// 字符串列表
		struct TMemoryStreamFunc				MemStream;		// 内存流
		struct TMemuFunc						Menu;			// 菜单
		struct TIniFileFunc					    IniFile;		// Ini文件
		struct TMagicACListFunc				    MagicACList;	// 技能破防
		struct TMapManagerFunc					MapManager;		// 地图管理
		struct TEnvirnomentFunc				    Envir;			// 地图
		struct TM2EngineFunc					M2Engine;		// M2引擎
		struct TBaseObjectFunc					Base;		    // 基本对象
		struct TSmartObjectFunc				    Smarter;		// 智能对象
		struct TPlayObjectFunc					Play;			// 人物
		struct TDummyObjectFunc				    Dummy;			// 假人
		struct THeroObjectFunc					Hero;			// 英雄
		struct TNormNpcFunc					    Npc;			// NPC
		struct TUserEngineFunc					UserEngine;
		struct TGuildManagerFunc				GuildManager;	// 行会管理
		struct TGuildFunc						Guild;			// 行会
		void* Reserved[1000];
	};

	struct TList {};
	struct TStringList {};
	struct TObject {};
	struct TMemoryStream {};
	struct TMenuItem {};
	struct TIniFile {};
	struct TMagicACList {};
	struct TEnvirnoment {};
	struct TBaseObject {};
	struct TSmartObject {};
	struct TPlayObject {};
	struct TDummyObject {};
	struct THeroObject {};
	struct TNormNpc {};
	struct TGuild {};

	struct TObjects
	{
		union
		{
			struct TList*                       List;
			struct TStringList*                 StringList;
			struct TObject*                     Object;
			struct TMemoryStream*               MemStream;
			struct TMenuItem*                   Menu;
			struct TIniFile*                    IniFile;
			struct TMagicACList*                MagicACList;
			struct TEnvirnoment*                Envir;
			struct TBaseObject*                 BaseObject;
			struct TSmartObject*                Smart;
			struct TPlayObject*                 Player;
			struct TDummyObject*                Dummy;
			struct THeroObject*                 Hero;
			struct TNormNpc*                    NormNpc;
			struct TGuild*                      Guild;
		};
	};

	struct TScriptCmdParam
	{
		struct TNormNpc*    NormNpcObj;						// _TNormNpc
		struct TPlayObject* PlayObject;                     // _TPlayObject
		struct TBaseObject* BaseObject;                     // _TBaseObject
		i32 nCMDCode;
		char* sRawParam1;
		char* sRawParam2;
		char* sRawParam3;
		char* sRawParam4;
		char* sRawParam5;
		char* sRawParam6;
		char* sRawParam7;
		char* sRawParam8;
		char* sRawParam9;
		char* sRawParam10;
		char* sParam1;
		i32 nParam1;
		char* sParam2;
		i32 nParam2;
		char* sParam3;
		i32 nParam3;
		char* sParam4;
		i32 nParam4;
		char* sParam5;
		i32 nParam5;
		char* sParam6;
		i32 nParam6;
		char* sParam7;
		i32 nParam7;
		char* sParam8;
		i32 nParam8;
		char* sParam9;
		i32 nParam9;
		char* sParam10;
		i32 nParam10;
	};

	struct TDefaultMessage
	{
		i64 Recog;
		u16 Ident;
		u16 Param;
		u16 Tag;
		u16 Series;
	};

	struct TMagicACInfo
	{
		u16 wMagicId;
		bool boEnabled;
		u8 btHum;
		u8 btMon;
		u8 btHero;
		u8 btDefenceHum;
		u8 btDefenceMon;
		u8 btDefenceHero;
		char* sMagicName;                                       // Assuming string is a char pointer
	};

	struct TAbility
	{
		u64 Level;                                          // 0x198  //0x34  0x00
		u64 AC1;                                            // 0x19A  //0x36  0x02
		u64 AC2;                                            // 0x19A  //0x36  0x02
		u64 MAC1;                                           // 0x19C  //0x38  0x04
		u64 MAC2;                                           // 0x19C  //0x38  0x04
		u64 DC1;                                            // 0x19E  //0x3A  0x06
		u64 DC2;                                            // 0x19E  //0x3A  0x06
		u64 MC1;                                            // 0x1A0  //0x3C  0x08
		u64 MC2;                                            // 0x1A0  //0x3C  0x08
		u64 SC1;                                            // 0x1A2  //0x3E  0x0A
		u64 SC2;                                            // 0x1A2  //0x3E  0x0A
		u64 HP;                                             // 0x1A4  //0x40  0x0C
		u64 MP;                                             // 0x1A6  //0x42  0x0E
		u64 MaxHP;                                          // 0x1A8  //0x44  0x10
		u64 MaxMP;                                          // 0x1AA  //0x46  0x12
		u32 Exp;                                            // 0x1B0  //0x4C 0x18
		u32 MaxExp;                                         // 0x1B4  //0x50 0x1C
		i32 Weight;                                         // 0x1B8  //0x54 0x20
		i32 MaxWeight;                                      // 0x1BA  //0x56 0x22  背包
		i32 WearWeight;                                     // 0x1BC  //0x58 0x24
		i32 MaxWearWeight;                                  // 0x1BD  //0x59 0x25  负重
		i32 HandWeight;                                     // 0x1BE  //0x5A 0x26
		i32 MaxHandWeight;                                  // 0x1BF  //0x5B 0x27  腕力
		i32 CreditPoint;                                    // 声望
		u32 NewValue[30];
		// 0暴击几率增加 1增加攻击伤害  2物理伤害减少 3魔法伤害减少  4忽视目标防御
		// 5所有伤害反弹 6增加目标暴率 7人物体力增加  8人物魔力增加 9怒气恢复增加
		// 10合击攻击增加 11 怪物暴率 12 防暴几率 13 防麻痹 14 防护身 15 防复活
		// 16 防毒  17 防诱惑  18 防火墙  19 防冰冻  20 防蛛网
	};

	struct TAbilityNG
	{
		u16 Level;                                         // 内功等级
		u16 NH;                                            // 当前内力值
		u16 MaxNH;                                         // 内力值上限
		u32 Exp;                                           // 当前内功经验
		u32 MaxExp;                                        // 当前内功最高经验
	};

	struct TAbilityAlcohol
	{
		u16 Alcohol;                                       // 酒量
		u16 MaxAlcohol;                                    // 酒量上限
		u16 WineDrinkValue;                                // 醉酒度
		i32 MedicineLevel;                                 // 药力值等级
		u16 MedicineValue;                                 // 当前药力值
		u16 MaxMedicineValue;                              // 药力值上限
	};

	struct TUserItemProgress
	{
		bool boOpen;
		u8 btNameColor;
		u8 btCount;
		u8 btShowType;                                     // 进度上的值显示方式(0:不显示; 1:百分比; 2:数值;)
		u16 wMax;
		u16 wValue;
		u16 wLevel;
		char sName[32];                                    // Assuming string[31] is a 32-byte char array
	};

	struct TCustomProperty
	{
		u8 btColor;
		u8 btBindType;
		u8 btShowFlag;
		u8 btPercent;                                      // 0: 点数；1: 单件装备%； 2: 全身装备%
		u8 btHintModule;
		i32 nValues[ITEM_PROP_VALUES_COUNT];
	};

	struct TUserItemProperty
	{
		char sText[129];                                   // NND,从64又要整到128 2019-03-18 17:18:22
		u8 btTextColor;
		struct TCustomProperty Properties[ITEM_PROP_COUNT];
	};

	enum TItemFormType
	{
		ifUnknow,                                               // 未知
		ifGM,                                                   // GM制造
		ifScript,                                               // 脚本
		ifShopBuy,                                              // 商店购买
		ifMonDrop,                                              // 打怪掉落
		ifSysGive,                                              // 系统给予
		ifMine,                                                 // 挖矿得到
		ifBoxGive,                                              // 宝箱取得
		ifButchItem,                                            // 挖肉得到
		ifCaptureMon                                            // 捕捉得到
	};

	struct TUserItemFrom
	{
		enum TItemFormType ItemForm;
		char sMapName[MAP_NAME_LEN + 1];
		char sMonName[41];
		char sMakerName[ACTOR_NAME_LEN + 1];
		double DateTime;                                        // Assuming TDateTime is equivalent to double
	};

	struct TFluteInfo
	{
		u16 GemIndex;                                      // 宝石索引
		u16 GemCount;                                      // 宝石叠加数量
	};

	struct TUserItem
	{
		i32 MakeIndex;
		u16 wIndex;                                        // 物品id
		char Name[ITEM_NAME_LEN + 1];
		u16 Dura;                                          // 当前持久值
		u16 DuraMax;                                       // 最大持久值
		i32 btValue[14];

		u32 dwHeroM2DressEffect;                           // 特效编号 + boHeroM2DressNoBlend  MakeLong(btHeroM2DressEffect + boHeroM2DressNoBlend)

		u8 btUpgradeCount;                                 // 升级次数
		bool boStartTime;                                       // 是否开始计时
		i32 nLimitTime;                                     // 限时物品 分钟
		u8 btHeroM2Light;                                  // HeroM2 SetItemsLight
		u16 btNewValue[30];
		// 0 暴击几率增加   1 增加攻击伤害   2 物理伤害减少  3 魔法伤害减少  4 忽视目标防御
		// 5 所有伤害反弹   6 增加目标暴率   7 人物体力增加  8 人物魔力增加  9 怒气恢复增加
		// 10合击攻击增加
		u8 btColor;

		bool boIsBind;                                          // 是否绑定
		u8 btBindOption;
		// 绑定选项对应Bit位 TUserItemBindValueType
		// 1: 禁止扔
		// 2: 禁止交易
		// 3: 禁止存
		// 4: 禁止修
		// 5: 禁止出售
		// 6: 禁止爆出
		// 7: 丢弃消失

		u16 wEffect;                                       // 特效编号 新

		// 装备凹槽 chongchong 2015-01-02
		u8 btFluteCount;                                   // 凹槽数量             1
		struct TFluteInfo Flutes[MAX_FLUTE_COUNT];              // 凹槽宝石信息         16

		struct TUserItemProgress Progress[2];
		struct TUserItemProperty CustomProperty;

		struct TUserItemFrom ItemFrom;

		u16 wInsuranceCount;                               // 投保次数
		u16 wNewLooks;
		u16 wNewShape;

		u16 wNewExpand3;
		u16 wNewExpand4;

		u8 btAddDataByte[USER_ITEM_ADD_DATA_BYTE_COUNT];
		i32 nAddDataInt[USER_ITEM_ADD_DATA_INT_COUNT];
		char sAddDataText[USER_ITEM_ADD_DATA_TEXT_COUNT][21];   // Assuming string[20] is a 21-byte char array
	};

	struct TStdItemEffect
	{
		i16 FileIndex;                                      // 物品发光效果 文件编号 0
		u16 ImageStart;                                    // 物品发光效果 读取位置
		u8 ImageCount;                                     // 物品发光效果 读取张数
		bool IsDrawCenter;                                      // 居中播放
		bool IsDrawNoBlend;                                     // 非透明绘制
		bool IsDrawBelow;                                       // 底层绘制
		i16 OffsetX;                                        // 物品发光效果 微调X
		i16 OffsetY;                                        // 物品发光效果 微调Y
		u16 Time;                                          // 播放速度
	};

	struct TStdItem
	{
		char Name[ITEM_NAME_LEN + 1];
		char DBName[ITEM_NAME_LEN + 1];
		u8 StdMode;
		u16 Shape;
		u8 Weight;
		u16 AniCount;
		i32 Source;
		u8 Reserved;
		u8 NeedIdentify;
		u16 Looks;
		u16 DuraMax;
		u16 Reserved1;
		i32 HP;
		i32 MP;
		i32 AC1;
		i32 AC2;
		i32 MAC1;
		i32 MAC2;
		i32 DC1;
		i32 DC2;
		i32 MC1;
		i32 MC2;
		i32 SC1;
		i32 SC2;
		i32 Need;
		i32 NeedLevel;
		i32 Price;
		u16 OverLap;                                       // 是否是重叠物品
		u8 Color;                                          // 物品名称颜色
		i32 Stock;
		i32 Light;                                          // 数据库增加Light字段 piaoyun 2013-08-01

		i32 Horse;
		i32 Expand1;
		i32 Expand2;
		i32 Expand3;
		i32 Expand4;
		i32 Expand5;

		u16 Elements[24];

		i32 InsuranceCurrency;
		i32 InsuranceGold;

		struct TStdItemEffect BagEffect;                        // 包裹中的物品发光效果
		struct TStdItemEffect BodyEffect;                       // 内观中物品发光效果
		i64 Effect;                                         // 指针改为64位 2021-01-05
	};

	struct TClientItem
	{
		struct TStdItem s;
		i32 MakeIndex;
		u16 Dura;
		u16 DuraMax;

		bool IsBind;                                            // 是否绑定
		u8 btFluteCount;

		u8 btUpgradeCount;                                 // 升级次数
		u8 btHeroM2Light;                                  // HeroM2 SetItemsLight

		i32 btValue[14];                                    // 附加属性
		u16 NewValue[30];

		struct TFluteInfo Flutes[MAX_FLUTE_COUNT];              // 凹槽宝石信息         16

		struct TUserItemProgress Progress[2];

		struct TUserItemProperty CustomProperty;

		struct TUserItemFrom ItemFrom;
		u16 wInsuranceCount;
	};

	enum TMagicAttr
	{
		mtHum,
		mtHero,
		mtContinuous,
		mtDefense,
		mtAttack
	};

	struct TMagic
	{
		enum TMagicAttr MagicAttr;
		u16 wMagicId;
		char sMagicName[ITEM_NAME_LEN + 1];
		u8 btEffectType;
		u8 btEffect;
		u16 wSpell;
		u16 wPower;
		u8 TrainLevel[16];
		i32 MaxTrain[16];
		u8 btTrainLv;                                      // 最高可升级等级
		u8 btJob;
		u16 wMagicIdx;
		u32 dwMagicDelayTime;
		u16 wDefSpell;
		u16 wDefPower;
		u16 wMaxPower;
		u16 wDefMaxPower;
		char sDescr[19];
		i32 CanUpgrade;                                     // 是否允许升级 chongchong 2013-12-06
		i32 MaxUpgradeLevel;                                // 最高
	};

	struct TUserMagic
	{
		struct TMagic* MagicInfo;
		enum TMagicAttr MagicAttr;
		u16 wMagIdx;
		u8 btLevel;
		u8 btNewLevel;
		u8 btKey;
		i32 nTranPoint;
		bool boUsesItemAdd;                                     // 是否为装备触发
	};

	struct TMagic_C
	{
		enum TMagicAttr MagicAttr;
		u16 wMagicId;
		char sMagicName[ITEM_NAME_LEN + 1];
		u8 btEffectType;
		u8 btEffect;
		u16 wSpell;
		i32 MaxTrain[16];
		u8 btTrainLv;                                      // 最高可升级等级
		u32 dwMagicDelayTime;
		u16 wDefSpell;
		i32 CanUpgrade;                                     // 是否允许升级 chongchong 2013-12-06
		i32 MaxUpgradeLevel;                                // 最高
	};

	struct TClientMagic
	{                                       // 84
		char Key;
		u8 Level;
		u8 NewLevel;                                       // 九重
		i32 CurTrain;
		struct TMagic_C Def;
		u32 dwInterval;
		u32 dwRealInterval;
		u32 dwLastUseTick;
	};

	struct TActorIcon
	{
		i16 nFileIndex;                                     // WIL资源编号
		u16 nIconIndex;
		u8 nIconCount;
		i16 nX;
		i16 nY;
		bool boBlend;
		u8 btDrawOrder;                                    // 绘制顺序
		i16 nPlayTime;                                      // 播放速度
		bool boOnlySelfVisible;
	};
}
#endif // __LF_STRUCT_H__