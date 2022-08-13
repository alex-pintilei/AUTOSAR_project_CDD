/**
 *   @file           Platform_Types.h
 *   @implements     Platform_Types.h_Artifact
 *   @version 0.9.0
 *
 *   @brief   AUTOSAR Base - Platform dependend data type definitions.
 *   @details AUTOSAR platform types header file. It contains all
 *            platform dependent types and symbols. Those types must be abstracted in order to
 *            become platform and compiler independent.
 *
 *   @addtogroup BASE_COMPONENT
 *   @{
 */
/*==================================================================================================
==================================================================================================*/

#define NULL_PTR (void *)0

/**
 * @note         It is not allowed to add any extension to this file. Any extension invalidates the
 *               AUTOSAR conformity
 */

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#define TRUE 1U
#define FALSE 0U

#define E_OK 0x00
#define E_NOT_OK 0x01

/*==================================================================================================
                                        ENUMS
==================================================================================================*/

/*==================================================================================================
                            STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief The standard AUTOSAR type boolean shall be implemented on basis of an eight bits long
 *        unsigned integer.
 * @implements boolean_type
 */
typedef unsigned char boolean; /* PRQA S 3205 EOF*/

/**
 * @brief Unsigned 8 bit integer with range of 0 ..+255 (0x00..0xFF) -
 *        8 bit
 * @implements uint8_type
 */
typedef unsigned char uint8;

/**
 * @brief Unsigned 16 bit integer with range of 0 ..+65535 (0x0000..0xFFFF) -
 *        16 bit
 * @implements uint16_type
 */
typedef unsigned short uint16;

/**
 * @brief Unsigned 32 bit integer with range of 0 ..+4294967295 (0x00000000..0xFFFFFFFF) -
 *        32 bit
 * @implements uint32_type
 */
typedef unsigned long uint32;

/**
 * @brief Signed 8 bit integer with range of -128 ..+127 (0x80..0x7F) -
 *        7 bit + 1 sign bit
 * @implements sint8_type
 */
typedef signed char sint8;

/**
 * @brief Signed 16 bit integer with range of -32768 ..+32767 (0x8000..0x7FFF) -
 *        15 bit + 1 sign bit
 * @implements sint16_type
 */
typedef signed short sint16;

/**
 * @brief Signed 32 bit integer with range of -2147483648.. +2147483647 (0x80000000..0x7FFFFFFF) -
 *        31 bit + 1 sign bit
 * @implements sint32_type
 */
typedef signed long sint32;

/**
 * @brief Unsigned integer at least 8 bit long. Range of at least 0 ..+255 (0x00..0xFF) -
 *        8 bit
 * @implements uint8_least_type
 */
typedef unsigned long uint8_least;

/**
 * @brief  Unsigned integer at least 16 bit long. Range of at least 0 ..+65535 (0x0000..0xFFFF) -
 *         16 bit
 * @implements uint16_least_type
 */
typedef unsigned long uint16_least;

/**
 * @brief Unsigned integer at least 32 bit long. Range of at least 0 ..+4294967295
 *       (0x00000000..0xFFFFFFFF) - 32 bit
 * @implements uint32_least_type
 */
typedef unsigned long uint32_least;

/**
 * @brief Signed integer at least 8 bit long. Range - at least -128 ..+127.
 *        At least 7 bit + 1 bit sign
 * @implements sint8_least_type
 */
typedef signed long sint8_least;

/**
 * @brief Signed integer at least 16 bit long. Range - at least -32768 ..+32767.
 *        At least 15 bit + 1 bit sign
 * @implements sint16_least_type
 */
typedef signed long sint16_least;

/**
 * @brief Signed integer at least 32 bit long. Range - at least -2147483648.. +2147483647.
 *       At least 31 bit + 1 bit sign
 * @implements sint32_least_type
 */
typedef signed long sint32_least;

/**
 * @brief 32bit long floating point data type
 * @implements float32_type
 */
typedef float float32;

/**
 * @brief 64bit long floating point data type
 * @implements float64_type
 */
typedef double float64;

#endif /* #ifndef PLATFORM_TYPES_H */

/** @} */
