/*
 *  TOPPERS/ASP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Advanced Standard Profile Kernel
 * 
 *  Copyright (C) 2008-2011 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *  Copyright (C) 2017-2017 by TOPPERS PROJECT Educational Working Group.
 * 
 *  Lメ(1)(4)C
 *   
 *  D
 *  (1) CL
 *      ヲK
 *      
 *  (2) ョ 
 *      C
 *      メLヲ
 *      K
 *  (3)  
 *      C 
 *      
 *    (a) メL
 *        ヲK
 *    (b) TOPPERS
 *        
 *  (4) 
 *      LメTOPPERS
 *      
 *      LメTOPPERS
 *      
 * 
 *  DLメ
 *  TOPPERS 
 *  s
 *  
 *  
 * 
 *  @(#) $Id: target_config.h 698 2017-02-11 16:48:40Z roi $
 */

/*
 *  stm32f769-discovery
 *
 *  kernel_impl.h
 *  
 */

#ifndef TOPPERS_TARGET_CONFIG_H
#define TOPPERS_TARGET_CONFIG_H

/*
 *   
 */
#include "stm32f7xx.h"

/*
 *  `SIL
 */
#define SIL_DLY_TIM1    100
#define SIL_DLY_TIM2    9

/*
 *  
 */
#ifdef TOPPERS_ENABLE_TRACE
#include "logtrace/trace_config.h"
#endif /* TOPPERS_ENABLE_TRACE */

/*
 *  stm32f7xx
 */
#include "arm_m_gcc/stm32f7xx/chip_config.h"

#endif /* TOPPERS_TARGET_CONFIG_H */
