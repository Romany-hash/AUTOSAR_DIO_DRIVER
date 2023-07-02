/**
  ******************************************************************************
  * @file       DIO.h
  * @version    1.0.0
  * @brief      Digital Input/Output (DIO) Header File
  * @details    This file contains the declarations and definitions for the Digital
  *             Input/Output (DIO) module in AUTOSAR.
  * @date       June 28, 2023
  * @author     Romany Sobhy
  ******************************************************************************
  *
  ******************************************************************************
  * project            : AUTOSAR 4.4.0 MCAL
  * platform           : ARM
  * peripheral         : STM32F401
  * Autosar version    : 4.4.0
  * Autosar revision   : ASR_REL_4_0_REV_0000
  * swversion          : 1.0.0
  ******************************************************************************
  */

  #ifndef DIO_H
#define DIO_H

/*=======================================================================================
 *                           INCLUDES SECTION
 *=======================================================================================*/
 #include "Std_Types.h"
#include "DIO_cfg.h"


/**
*@brief  Macro definitions for the major, minor, and patch versions of the software.
*/

#define DIO_VENDOR_ID                  (122U)
#define DIO_MODULE_ID                  (120U)

#define DIO_AR_RELEASE_MAJOR_VERSION   (2U)
#define DIO_AR_RELEASE_MINOR_VERSION   (0U)
#define DIO_AR_RELEASE_REVISION        (0U)

#define DIO_SW_MAJOR_VERSION           (1U)
#define DIO_SW_MINOR_VERSION           (0U)
#define DIO_SW_PATCH_VERSION           (0U)



/*=======================================================================================
                                 File Version Checks 
========================================================================================*/

/* Check AUTOSAR version compatibility between Dio.h and Std_Types.h */
#if (DIO_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION) || \
    (DIO_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)
  #error "The AUTOSAR version of Dio.h is not compatible with Std_Types.h"
#endif

/* Check AUTOSAR version compatibility between Dio.h and Dio_Cfg.h */
#if (DIO_AR_RELEASE_MAJOR_VERSION != DIO_CFG_AR_RELEASE_MAJOR_VERSION) || \
    (DIO_AR_RELEASE_MINOR_VERSION != DIO_CFG_AR_RELEASE_MINOR_VERSION)
  #error "The AUTOSAR version of Dio.h is not compatible with Dio_Cfg.h"
#endif

/* Check software version compatibility between Dio.h and Dio_Cfg.h */
#if (DIO_SW_MAJOR_VERSION != DIO_CFG_SW_MAJOR_VERSION) || \
    (DIO_SW_MINOR_VERSION != DIO_CFG_SW_MINOR_VERSION) || \
    (DIO_SW_PATCH_VERSION != DIO_CFG_SW_PATCH_VERSION)
  #error "The software version of Dio.h is not compatible with Dio_Cfg.h"
#endif



/*=======================================================================================
                                         Constants
=======================================================================================*/

/**
 * @brief Macro definition for the invalid channel requested development error.
 * @implements DIO_E_PARAM_INVALID_CHANNEL_ID
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID       ((uint8_t)0x0AU)

/**
 * @brief Macro definition for the invalid port requested development error.
 * @implements DIO_E_PARAM_INVALID_PORT_ID
 */
#define DIO_E_PARAM_INVALID_PORT_ID       ((uint8_t)0x14U)

/**
 * @brief Macro definition for the invalid channel group requested development error.
 * @implements DIO_E_PARAM_INVALID_GROUP
 */
#define DIO_E_PARAM_INVALID_GROUP       ((uint8_t)0x1FU)

/**
 * @brief Macro definition for the API service called with a NULL pointer development error.
 * @implements DIO_E_PARAM_POINTER
 */
#define DIO_E_PARAM_POINTER          ((uint8_t)0x20U)

/**
 * @brief Macro definition for the service Dio_ReadChannel.
 * @implements Dio_ReadChannel
 */
#define Dio_ReadChannel       ((uint8_t)0x00U)

/**
 * @brief Macro definition for the service Dio_WriteChannel.
 * @implements Dio_WriteChannel
 */
#define Dio_WriteChannel       ((uint8_t)0x01U)

/**
 * @brief Macro definition for the service Dio_ReadPort.
 * @implements Dio_ReadPort
 */
#define Dio_ReadPort       ((uint8_t)0x02U)

/**
 * @brief Macro definition for the service Dio_WritePort.
 * @implements Dio_WritePort
 */
#define Dio_WritePort       ((uint8_t)0x03U)

/**
 * @brief Macro definition for the service Dio_ReadChannelGroup.
 * @implements Dio_ReadChannelGroup
 */
#define Dio_ReadChannelGroup       ((uint8_t)0x04U)

/**
 * @brief Macro definition for the service Dio_WriteChannelGroup.
 * @implements Dio_WriteChannelGroup
 */
#define Dio_WriteChannelGroup       ((uint8_t)0x05U)

/**
 * @brief Macro definition for the service Dio_GetVersionInfo.
 * @implements Dio_GetVersionInfo
 */
#define Dio_GetVersionInfo       ((uint8_t)0x12U)

/**
 * @brief Macro definition for the service Dio_FlipChannel.
 * @implements Dio_FlipChannel
 */
#define        ((uint8_t)0x11U)



/*=======================================================================================
                                         FUNCTION PROTOTYPES
=======================================================================================*/

#define DIO_START_SEC_CODE

#include "MemMap.h"




 FUNC(Dio_LevelType, DIO_CODE) Dio_ReadChannel
 (
      CONST(Dio_LevelType, Automatic)
 );

 

FUNC(void, DIO_CODE) Dio_WriteChannel
 (
      CONST(Dio_ChannelType, Automatic)
 );

 
 /*** More functions implementations to be added**/ 

 /*** dont forget to add types ***/
 
 
 /** revise last lecture again**/

 

#define DIO_STOP_SEC_CODE
#include "MemMap.h"

#define FUNC(rettype, memclass) rettype

#endif /* DIO_H */

