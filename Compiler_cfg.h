/**
  ******************************************************************************
  * @file       compiler_cfg.h
  * @version    1.0.0
  * @brief      Compiler Abstraction Header File for AUTOSAR
  *@details This file contains the configuration settings for the compiler used in the project.
            It provides CPU type definitions, compiler-specific definitions, and module-specific parameters
 * for different compilers.
  * @date       June 28, 2023
  * @author     Romany Sobhy
  ******************************************************************************
  *
  ******************************************************************************
  * project            :AUTOSAR 4.4.0 MCAL
  * platform           :ARM
  * peripheral         :STM32F401
  * Autosar version    :4.4.0
  * Autosar revision   :ASR_REL_4_0_REV_0000
  * swversion          :1.0.0
  ******************************************************************************
  */

#ifndef COMPILER_H
#define COMPILER_H

/**
*@brief  Macro definitions for the major, minor, and patch versions of the software.
*/

#define COMPILER_VENDOR_ID                  (122U)
#define COMPILER_AR_RELEASE_MAJOR_VERSION   (2U)
#define COMPILER_AR_RELEASE_MINOR_VERSION   (0U)
#define COMPILER_AR_RELEASE_REVISION        (0U)

#define COMPILER_SW_MAJOR_VERSION           (1U)
#define COMPILER_SW_MINOR_VERSION           (0U)
#define COMPILER_SW_PATCH_VERSION           (0U)

/**
* @brief PORT memory and pointer classes.
*/
#define PORT_CODE
#define PORT_CONST
#define PORT_APPL_DATA
#define PORT_APPL_CONST
#define PORT_APPL_CODE
#define PORT_CALLOUT_CODE
#define PORT_VAR_NOINT
#define PORT_VAR_POWER_ON_NOINT
#define PORT_VAR_FAST
#define PORT_VAR





#endif /* COMPILER_H */
