/*
* Copyright (c) 2013, 武汉华中数控股份有限公司
* All rights reserved.
* 
* 文件名称：hnctool.h
* 文件标识：根据配置管理计划书
* 摘    要：刀具接口
* 运行平台：Linux/Windows
* 
* 版    本：1.00
* 作    者：HNC-8 Team
* 日    期：2013年9月25日
* 说    明：
*/

#ifndef __HNC_TOOL_H__
#define __HNC_TOOL_H__

#include "hncdatatype.h"

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolMagSave(Bit16 clientNo)
//
//    功能：
//            保存刀库表
//
//    参数：
//            clientNo	网络连接号
//
//    描述：
//            保存刀库表即为保存B寄存器
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolMagSave(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetMaxMagNum(Bit16 clientNo)
//
//    功能：
//            获取系统最大刀库数目
//
//    参数：
//
//    描述：
//
//    返回：
//            返回系统定义的最大刀库数目
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetMaxMagNum(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetMagHeadBase(Bit16 clientNo)
//
//    功能：
//            获取系统刀库表头起始地址
//
//    参数：
//
//    描述：
//            刀库的表头数据存储于B寄存器，返回值为B寄存器的起始地址
//
//    返回：
//            返回系统刀库表头的起始地址
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetMagHeadBase(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetPotDataBase(Bit16 clientNo)
//
//    功能：
//            获取系统刀位数据起始地址
//
//    参数：
//
//    描述：
//			  刀位数据存储于B寄存器，返回值为B寄存器的起始地址
//    返回：
//            返回系统刀位数据的起始地址
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetPotDataBase(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolSetMagBase(Bit32 magNo, Bit32 index, Bit32 val, Bit16 clientNo)
//
//    功能：
//            设置刀库数据(刀库表头数据，magNo从1开始)
//
//    参数：		  
//			  magNo		刀库号(从1开始计算)
//			  index		索引号；enum MagzHeadIndex
//			  val		设置的刀库数据
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolSetMagBase(Bit32 magNo, Bit32 index, Bit32 val, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetMagBase(Bit32 magNo, Bit32 index, Bit32 *val, Bit16 clientNo)
//
//    功能：
//            获取刀库数据(刀库表头数据，magNo从1开始)
//
//    参数：		  
//			  magNo		刀库号(从1开始计算)
//			  index		索引号；enum MagzHeadIndex
//			  val		取得的刀库数据
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetMagBase(Bit32 magNo, Bit32 index, Bit32 *val, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolMagSetToolNo(Bit32 magNo, Bit32 potNo, Bit32 toolNo, Bit16 clientNo)
//
//    功能：
//            设置刀库中刀位的刀具号
//
//    参数：			  
//			  magNo		刀库号(从1开始计算)
//			  potNo		刀位号
//			  toolNo	刀具号
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolMagSetToolNo(Bit32 magNo, Bit32 potNo, Bit32 toolNo, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolMagGetToolNo(Bit32 magNo, Bit32 potNo, Bit32 *toolNo, Bit16 clientNo)
//
//    功能：
//            获取刀库中刀位的刀具号
//
//    参数：			  
//			  magNo		刀库号(从1开始计算)
//			  potNo		刀位号
//			  toolNo	刀具号
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolMagGetToolNo(Bit32 magNo, Bit32 potNo, Bit32 *toolNo, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolSetPotAttri(Bit32 magNo, Bit32 potNo, Bit32 potAttri, Bit16 clientNo)
//
//    功能：
//            设置刀库中刀位的刀位属性
//
//    参数：		  
//			  magNo		刀库号(从1开始计算)
//			  potNo		刀位号
//			  potAttri	设置的刀位属性
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolSetPotAttri(Bit32 magNo, Bit32 potNo, Bit32 potAttri, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetPotAttri(Bit32 magNo, Bit32 potNo, Bit32 *potAttri, Bit16 clientNo)
//
//    功能：
//            获取刀库中刀位的刀位属性
//
//    参数：		  
//			  magNo		刀库号(从1开始计算)
//			  potNo		刀位号
//			  potAttri	返回的刀位属性
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetPotAttri(Bit32 magNo, Bit32 potNo, Bit32 *potAttri, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolLoad(void)
//
//    功能：
//            刀具文件导入
//
//    参数：
//
//    描述：
//            优先载入原文件，如果原文件损坏将载入备份文件
//	
//    返回：
//            0：成功；-1：原文件损坏，载入备份文件，需要进行数据检查；-2：载入失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolLoad(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolSave(Bit16 clientNo)
//
//    功能：
//            刀具文件保存
//
//    参数：
//            clientNo	网络连接号
//
//    描述：
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolSave(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetMaxToolNum(Bit16 clientNo)
//
//    功能：
//            获取系统最大刀具数目
//
//    参数：
//
//    描述：
//
//    返回：
//			  系统的刀具最大数目
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetMaxToolNum(Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolSetToolPara(Bit32 toolNo, Bit32 index, void *val, Bit16 clientNo)
//
//    功能：
//            设置刀具参数
//
//    参数：
//			 toolNo		刀具号
//			 index		索引号；enum ToolParaIndex
//			 val		参数值
//           clientNo	网络连接号
//
//    描述：
//            
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolSetToolPara(Bit32 toolNo, Bit32 index, void *val, Bit16 clientNo = 0);

//////////////////////////////////////////////////////////////////////////
//
//    Bit32 HNC_ToolGetToolPara(Bit32 toolNo, Bit32 index, void *val, Bit16 clientNo)
//
//    功能：
//            获取刀具参数
//
//    参数：
//			 toolNo		刀具号
//			 index		索引号；enum ToolParaIndex
//			 val		参数值
//           clientNo   网络连接号
//
//    描述：
//            
//
//    返回：
//            0		成功
//			  -1	失败
//
//////////////////////////////////////////////////////////////////////////
HNCAPI Bit32 HNC_ToolGetToolPara(Bit32 toolNo, Bit32 index, void *val, Bit16 clientNo = 0);

#endif // __HNC_TOOL_H__
