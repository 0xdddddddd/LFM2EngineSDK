#ifndef __LF_CRC32_H__
#define __LF_CRC32_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include "lf_platform.h"


/*******************************************************
 *                                                     *
 *       32位CRC循环冗余校验码实现                     *
 *       CRC For C                                     *
 *                                                     *
 *       Copyright (R) 2001                            *
 *                                                     *
 *******************************************************/

/*
    说明:
        使用的多项式($EDB88200)：
        x^32+x^26+x^23+x^22+x^16+x^12+x^11+x^10+x^8+x^7+x^5+x^4+x^2+x^1+x^0
        这是由Ethernet/ADCCP等协议推荐的多项式.
*/

// 全局变量
static bool DynamicMakeCRCTableFlag = false; // 是否动态产生CRC表

// CRC表预设静态表,可以加快校验速度
static uint32_t crc_table[256] = {
    0x00000000, 0x77073096, 0xEE0E612C, 0x990951BA, 0x076DC419,
    0x706AF48F, 0xE963A535, 0x9E6495A3, 0x0EDB8832, 0x79DCB8A4,
    0xE0D5E91E, 0x97D2D988, 0x09B64C2B, 0x7EB17CBD, 0xE7B82D07,
    0x90BF1D91, 0x1DB71064, 0x6AB020F2, 0xF3B97148, 0x84BE41DE,
    // ... (省略其余表项以节省空间)
    0xB40BBE37, 0xC30C8EA1, 0x5A05DF1B, 0x2D02EF8D
};

void make_crc_table(void)
{
    uint32_t c, n, k, poly;
    const uint8_t p[14] = { 0, 1, 2, 4, 5, 7, 8, 10, 11, 12, 16, 22, 23, 26 };

    poly = 0;
    for (n = 0; n < sizeof(p) / sizeof(uint8_t); n++)
        poly |= (1 << (31 - p[n]));

    for (n = 0; n <= 255; n++)
    {
        c = n;
        for (k = 0; k <= 7; k++)
        {
            if (c & 1)
                c = poly ^ (c >> 1);
            else
                c = c >> 1;
        }
        crc_table[n] = c;
    }
}

uint32_t Crc32(const uint8_t* Buf, uint32_t Len)
{
    uint32_t n;

    if (Buf == NULL || Len <= 0)
    {
        return 0;
    }
    else
    {
        n = 0xDBC66688;
        if (DynamicMakeCRCTableFlag)
            make_crc_table();

        n ^= 0xFFFFFFFF;
        while (Len >= 8)
        {
            // 一次处理8个再循环来加快处理速度
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
            n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);

            Len -= 8;
        }

        if (Len != 0)
        {
            do
            {
                // 剩余的不足8个字节，则单个处理
                n = crc_table[(n ^ *Buf++) & 0xFF] ^ (n >> 8);
                Len--;
            } while (Len != 0);
        }

        return n ^ 0xFFFFFFFF;
    }
}

#endif // __LF_CRC32_H__