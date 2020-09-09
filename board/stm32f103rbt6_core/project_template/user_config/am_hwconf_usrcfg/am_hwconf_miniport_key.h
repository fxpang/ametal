/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief MiniPort-Key �û������ļ�
 *
 * ����ʹ�� Miniport-KEY ʱʹ�ø��ļ��ṩ��ʵ����ʼ������
 *
 * \internal
 * \par Modification history
 * - 1.00 15-07-13  tee, first implementation
 * \endinternal
 */

#ifndef __AM_HWCONF_MINIPORT_KEY_H
#define __AM_HWCONF_MINIPORT_KEY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ametal.h"

/**
 * \brief MiniPort-KEY ʵ����ʼ��
 *
 * \retval  AW_OK  ��ʼ���ɹ�
 * \retval   < 0   ��ʼ��ʧ�ܣ����C�ļ��и��������Ƿ�Ϸ�
 */
int am_miniport_key_inst_init (void);

#ifdef __cplusplus
}
#endif

#endif

/* end of file */