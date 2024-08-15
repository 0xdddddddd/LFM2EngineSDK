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
#define ACTOR_NAME_LEN 14                                   // ��ɫ����
#define ITEM_PROP_COUNT 20
#define ITEM_PROP_VALUES_COUNT 3
#define MAX_FLUTE_COUNT 8                                   // ��󰼲�����
#define USER_ITEM_ADD_DATA_BYTE_COUNT 20
#define USER_ITEM_ADD_DATA_INT_COUNT 10
#define USER_ITEM_ADD_DATA_TEXT_COUNT 2
#define ACTORNAMELEN 14                                     // ��ɫ����

// ������BindTypeȡֵ
#define BINDTYPE_NODROP 0                                   // ��ֹ��
#define BINDTYPE_NODEAL 1                                   // ��ֹ����
#define BINDTYPE_NOSTORAGE 2                                // ��ֹ��
#define BINDTYPE_NOREPAIR 3                                 // ��ֹ��
#define BINDTYPE_NOSELL 4                                   // ��ֹ��
#define BINDTYPE_NOSCATTER 5                                // ��ֹ����
#define BINDTYPE_DROPDELETE 6                               // ������ʧ

// �ڴ���ָ�붨λSeekOriginȡֵ
#define SEEKORIGN_BEGIN 0                                   // ��ͷ��ʼ
#define SEEKORIGN_CURRENT 1                                 // �ӵ�ǰλ�ÿ�ʼ
#define SEEKORIGN_END 2                                     // ���ʼ

// ������Ϣ�����Ϣ���� MsgType ȡֵ
#define MSGTYEPE_NOTICE 0                                   // ����
#define MSGTYEPE_HINT 1                                     // ��ʾ
#define MSGTYEPE_SYSTEM 2                                   // ϵͳ
#define MSGTYEPE_SAY 3                                      // ??
#define MSGTYEPE_MON 4                                      // ??
#define MSGTYEPE_GM 5                                       // GM
#define MSGTYEPE_CUST 6                                     // ף��
#define MSGTYEPE_CASTLE 6                                   // ����
#define MSGTYEPE_CHAR 7                                     // ??

// �������� MagAttr ȡֵ
#define MAGATTR_HUM 0                                       // ���＼��
#define MAGATTR_HERO 1                                      // Ӣ�ۼ���
#define MAGATTR_CONTINUOUS 2                                // ��������
#define MAGATTR_Defense 3                                   // ��֮����
#define MAGATTR_Attack 4                                    // ŭ֮����

// TM2Engine_GetGlobalIniFile����M2IniTypeȡֵ
#define M2INI_SETUP 0                                       // !Setup.txt
#define M2INI_STRING 1                                      // String.ini

// TM2Engine_GetOtherFileDir����M2FileTypeȡֵ
#define M2FILE_ENVIR_DIR 0                                  // ENVIRĿ¼
#define M2FILE_PLUG_DIR 1                                   // ���Ŀ¼
#define M2FILE_GUILD_DIR 2                                  // �л�Ŀ¼
#define M2FILE_GUILD_FILE 3                                 // �л��ļ�
#define M2FILE_CASTLE_DIR 4                                 // �Ǳ�Ŀ¼
#define M2FILE_CASTLE_FILE 5                                // �Ǳ��ļ�
#define M2FILE_MAP_DIR 6                                    // ��ͼĿ¼
#define M2FILE_NOTICE_DIR 7                                 // ����Ŀ¼
#define M2FILE_BOX_DIR 8                                    // ����Ŀ¼
#define M2FILE_BOX_FILE 9                                   // �����ļ�
#define M2FILE_CUSTOM_MON 10                                // �Զ������Ŀ¼
#define M2FILE_CUSTOM_MAGIC 11                              // �Զ��弼��Ŀ¼
#define M2FILE_CUSTOM_NPC 12                                // �Զ���NPCĿ¼
#define M2FILE_ITEMDROP_DIR 13                              // ��Ʒ�������Ŀ¼
#define M2FILE_ITEMDROPLOG_DIR 14                           // ��Ʒ���������־Ŀ¼
#define M2FILE_CONLOG_DIR 15                                // ��¼��־Ŀ¼

#endif // __LF_TYPEDEF_H__