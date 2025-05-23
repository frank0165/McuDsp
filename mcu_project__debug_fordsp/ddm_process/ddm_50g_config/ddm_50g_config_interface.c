/***********************************************************************************

 * 文 件 名   : ddm_50g_config_interface.c
 * 负 责 人   : fz
 * 创建日期   : 2025年1月14日
 * 文件描述   : 50g ddm统一接口
 * 版权说明   : Copyright (C) 2000-2025   烽火通信科技股份有限公司
 * 其    他   : 
 * 修改日志   : 

***********************************************************************************/

#include "user_config.h"
#include "ddm_50g_config_interface.h"





#if (MODULE_50G_10G_1G_OPTICAL == CFG_YES ||\
	MODULE_50G_10G_OPTICAL == CFG_YES ||\
	MODULE_50G_OPTICAL == CFG_YES)	\
	&& (OPTICAL_MODELE_VERSION == A_SOFTWARE_VERSION)
	
	
#include "dac_comm.h"
//#include "sgm41295_ea_soa.h"
#include "sgm41282c_apd.h"
//#include "gn7161.h"

#include "sgm2508_ea.h"
#include "dsp_fsl.h"
#include "sff_8472.h"
#include "adc_sample_interface.h"


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ld_ibias
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  :  设置50G激光器驱动电流值
 * 输入参数  : uint16_t ibias  
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部接口
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_ld_ibias(uint16_t ibias)
{
//	gn7161_set_ld_ibias(ibias);
	return;
}



/*****************************************************************************
 * 函 数 名  : ddm_50g_get_ld_ibias
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 获取驱动电流
 * 输入参数  : float *ibias  adfasd
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 

*****************************************************************************/
void ddm_50g_get_ld_ibias(float *ibias)
{
//	gn7161_get_ld_ibias(ibias);
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_soa_ild
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g设置soa电流
 * 输入参数  : float ild
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_soa_ild(float ild)
{
	//sgm41295_set_ld(ild);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ea
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g负压
 * 输入参数  : float vea_vcc  asdfa
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_ea(float vea_vcc)
{
	//sgm41295_set_vea(vea_vcc);
	sgm2508_set_vea_50g(vea_vcc);
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_tx_ld_cpa
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 充置50g交叉点
 * 输入参数  : uint8_t value  交流点值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_tx_ld_cpa(uint8_t value)
{
	//gn7161_set_tx_ld_cpa(value);
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ld_imod
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g调制电压
 * 输入参数  : uint16_t imod  调制电压
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_ld_imod(uint16_t imod)
{
//	gn7161_set_ld_imod(imod);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_tx_ld_deempth
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50G预加重值
 * 输入参数  : uint16_t imod_de  预加重值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_tx_ld_deempth(uint16_t imod_de)
{
//	gn7161_set_tx_ld_deemph(imod_de);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_swing
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g接收摆幅值
 * 输入参数  : uint16_t value  摆幅值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_swing(uint16_t value)
{
//	gn7161_set_rx_swing(value);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_eq_boost
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置接收均衡值
 * 输入参数  : uint16_t value  均衡值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_eq_boost(uint16_t value)
{
//gn7161_set_rx_eq_boost(value);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_drv_deemph
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设直50G接收预加重值
 * 输入参数  : uint8_t level_de  设置50G接收预加重值
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rx_drv_deemph(uint8_t level_de)
{
//	gn7161_set_rx_drv_deemph(level_de);
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_los_threshold
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g sda值
 * 输入参数  : uint8_t los_th  sda值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_los_threshold(uint8_t los_th)
{
//	gn7161_set_rx_los_threshold(los_th);
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_los_hyst
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g的sd值
 * 输入参数  : uint8_t los_hyst  设置10g的sd值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_los_hyst(uint8_t los_hyst)
{
	//gn7161_set_rx_los_hyst(los_hyst);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_vapd
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g接收端的vapd值
 * 输入参数  : float apd_vcc  设置50g的接收端的vapd值
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rx_vapd(float apd_vcc)
{
	sgm41282c_set_apd(apd_vcc,SFF_50G_TYPE);
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_apc_target_voltage
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g的apc目标电压
 * 输入参数  : float voltage_target  设置50g的apc目标电压
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_apc_target_voltage(float voltage_target)
{
	//gn7161_apc_target_voltage(voltage_target);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_apc_auto_enable
 * 负 责 人  : fz
 * 创建日期  : 2024年9月14日
 * 函数功能  : 使用默认值，启用apc自动使能
 * 输入参数  :uint8_t ctrl_enable  1-使能；0-去使能
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_apc_auto_enable(uint8_t ctrl_enable)
{
	//gn7161_apc_auto_enable_ctrl(ctrl_enable);
	return;
}



/*****************************************************************************
 * 函 数 名  : ddm_50g_soft_txdsbl_ctrl
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g soft txdsbl关断激光器
 * 输入参数  : uint8_t ctrl_enable  1-使能；0-关闭
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 接口统一1:使能; 0:去使能。芯片内部处理可能正好相反

*****************************************************************************/
void ddm_50g_soft_txdsbl_ctrl(uint8_t ctrl_enable)
{
#if 0
	if(ctrl_enable > 0)
	{
		gn7161_soft_txdsbl_ctrl(0);
		sgm41295_ld_ctrl(1);
	}
	else
	{
		gn7161_soft_txdsbl_ctrl(1);
		sgm41295_ld_ctrl(0);
	}
#endif

	return;
}

/***********************************************************************
	** 函 数 名： gn7161_get_voltage
	** 输    入： float* voltage
	** 输    出： 无
	** 返 回 值： void
	** 功能描述： 50g获取电压值
	** 作    者： gqhuan
	** 日    期： 
************************************************************************/
void ddm_50g_get_voltage(float* vcc)
{
	//gn7161_get_voltage(vcc);
	return;
}

/***********************************************************************
	** 函 数 名： ddm_50g_get_mpd_ibias
	** 输    入： float* ibias
	** 输    出： 无
	** 返 回 值： void
	** 功能描述： 50g获取激光器背光电流值
	** 作    者： gqhuan
	** 日    期： 
************************************************************************/
void ddm_50g_get_mpd_ibias(float* ibias)
{
	//gn7161_get_mpd_ibias(ibias);
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rssi_value
 * 负 责 人  : fz
 * 创建日期  : 2025年1月15日
 * 函数功能  : 设置50g的rssi
 * 输入参数  : uint16_t rssi   ad值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rssi_value(uint16_t rssi)
{
	ddm_adc_out_val.rx_power_adc_out_0 = rssi;
	
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_get_rssi_value
 * 负 责 人  : fz
 * 创建日期  : 2025年1月15日
 * 函数功能  : 50g获取的rssi
 * 输入参数  : 无
 * 输出参数  : uint16_t *rssi adc值
 * 返 回 值  : 无
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_get_rssi_value(uint16_t *rssi)
{
	if(NULL == rssi)
	{
		return;
	}
	*rssi = ddm_adc_out_val.rx_power_adc_out_0;
	return;
	
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_rssi_start_sample_adc_action
 * 负 责 人  : fz
 * 创建日期  : 2025年2月19日
 * 函数功能  : 50G rssi采样
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部触发中断调用，注入组采样
 * 其    它  : 

*****************************************************************************/
void ddm_50g_rssi_start_sample_adc_action()
{

	uint16_t adc_data = 0;
	adc_data |= 
	adc_inserted_channel_sample_average(RXPW_RSSI_ADC_50G_RANK_INSERT_ID,RSSI_ADC_IN_50G);
	ddm_50g_set_rssi_value(adc_data);

	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_dev_init
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g芯片初始化
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_dev_init()
{
	//gn7161_init();	
	//sgm41295_init();
	dsp_fsl_init();
	sgm41282c_init();

    //调试代码临时添加
    
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_get_monitor_adc
 * 负 责 人  : fz
 * 创建日期  : 2025年3月11日
 * 函数功能  : 获取50G的监控值
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
uint16_t ddm_50g_get_monitor_adc()
{
	uint16_t adc_value = 0;

//	adc_value  = adc_dma_channel_sample_average(LD_50G_MON_ADC_IN);
	return adc_value;
}

#else


#error "not define ddm_50g !"

#if 0

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ld_ibias
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  :  设置50G激光器驱动电流值
 * 输入参数  : uint16_t ibias  
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部接口
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_ld_ibias(uint16_t ibias)
{
	
	return;
}



/*****************************************************************************
 * 函 数 名  : ddm_50g_get_ld_ibias
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 获取驱动电流
 * 输入参数  : float *ibias  adfasd
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 

*****************************************************************************/
void ddm_50g_get_ld_ibias(float *ibias)
{
	
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_soa_ild
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g设置soa电流
 * 输入参数  : float ild
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_soa_ild(float ild)
{	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ea
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g负压
 * 输入参数  : float vea_vcc  asdfa
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_ea(float vea_vcc)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_tx_ld_cpa
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 充置50g交叉点
 * 输入参数  : uint8_t value  交流点值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_tx_ld_cpa(uint8_t value)
{
	
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_ld_imod
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g调制电压
 * 输入参数  : uint16_t imod  调制电压
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_ld_imod(uint16_t imod)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_tx_ld_deempth
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50G预加重值
 * 输入参数  : uint16_t imod_de  预加重值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_tx_ld_deempth(uint16_t imod_de)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_swing
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g接收摆幅值
 * 输入参数  : uint16_t value  摆幅值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_swing(uint16_t value)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_eq_boost
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置接收均衡值
 * 输入参数  : uint16_t value  均衡值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_eq_boost(uint16_t value)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_drv_deemph
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设直50G接收预加重值
 * 输入参数  : uint8_t level_de  设置50G接收预加重值
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rx_drv_deemph(uint8_t level_de)
{
	
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_los_threshold
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g sda值
 * 输入参数  : uint8_t los_th  sda值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_los_threshold(uint8_t los_th)
{
	
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_los_hyst
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g的sd值
 * 输入参数  : uint8_t los_hyst  设置50g的sd值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_set_rx_los_hyst(uint8_t los_hyst)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rx_vapd
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g接收端的vapd值
 * 输入参数  : float apd_vcc  设置50g的接收端的vapd值
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rx_vapd(float apd_vcc)
{
	
	return;
}


/*****************************************************************************
 * 函 数 名  : ddm_50g_apc_target_voltage
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 设置50g的apc目标电压
 * 输入参数  : float voltage_target  设置50g的apc目标电压
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_apc_target_voltage(float voltage_target)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_apc_auto_enable
 * 负 责 人  : fz
 * 创建日期  : 2024年9月14日
 * 函数功能  : 使用默认值，启用apc自动使能
 * 输入参数  :uint8_t ctrl_enable  1-使能；0-去使能
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 无

*****************************************************************************/
void ddm_50g_apc_auto_enable(uint8_t ctrl_enable)
{
	
	return;
}



/*****************************************************************************
 * 函 数 名  : ddm_50g_soft_txdsbl_ctrl
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g soft txdsbl关断激光器
 * 输入参数  : uint8_t ctrl_enable  1-使能；0-关闭
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 外部调用
 * 其    它  : 接口统一1:使能; 0:去使能。芯片内部处理可能正好相反

*****************************************************************************/
void ddm_50g_soft_txdsbl_ctrl(uint8_t ctrl_enable)
{
	
	return;
}

/***********************************************************************
	** 函 数 名： gn7161_get_voltage
	** 输    入： float* voltage
	** 输    出： 无
	** 返 回 值： void
	** 功能描述： 50g获取电压值
	** 作    者： gqhuan
	** 日    期： 
************************************************************************/
void ddm_50g_get_voltage(float* vcc)
{
	
	return;
}

/***********************************************************************
	** 函 数 名： ddm_50g_get_mpd_ibias
	** 输    入： float* ibias
	** 输    出： 无
	** 返 回 值： void
	** 功能描述： 50g获取激光器背光电流值
	** 作    者： gqhuan
	** 日    期： 
************************************************************************/
void ddm_50g_get_mpd_ibias(float* ibias)
{
	
	return;
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_set_rssi_value
 * 负 责 人  : fz
 * 创建日期  : 2025年1月15日
 * 函数功能  : 设置50g的rssi
 * 输入参数  : uint16_t rssi   ad值
 * 输出参数  : 无
 * 返 回 值  : 无
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_set_rssi_value(uint16_t rssi)
{	
	
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_get_rssi_value
 * 负 责 人  : fz
 * 创建日期  : 2025年1月15日
 * 函数功能  : 50g获取的rssi
 * 输入参数  : 无
 * 输出参数  : uint16_t *rssi adc值
 * 返 回 值  : 无
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_get_rssi_value(uint16_t *rssi)
{
	
	
}

/*****************************************************************************
 * 函 数 名  : ddm_50g_dev_init
 * 负 责 人  : fz
 * 创建日期  : 2025年1月14日
 * 函数功能  : 50g芯片初始化
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : 
 * 调用关系  : 
 * 其    它  : 

*****************************************************************************/
void ddm_50g_dev_init()
{	
	return;
}

#endif

#endif


