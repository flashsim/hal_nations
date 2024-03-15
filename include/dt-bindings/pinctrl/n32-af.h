/*
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 

#ifndef DT_BINDINGS_PINCTRL_N32_AF_H_
#define DT_BINDINGS_PINCTRL_N32_AF_H_

/**
 * @name N32 AFs
 * @{
 */

/** AF0 */
#define N32_AF0 0U
/** AF1 */
#define N32_AF1 1U
/** AF2 */
#define N32_AF2 2U
/** AF3 */
#define N32_AF3 3U
/** AF4 */
#define N32_AF4 4U
/** AF5 */
#define N32_AF5 5U
/** AF6 */
#define N32_AF6 6U
/** AF7 */
#define N32_AF7 7U
/** AF8 */
#define N32_AF8 8U
/** AF9 */
#define N32_AF9 9U
/** AF10 */
#define N32_AF10 10U
/** AF11 */
#define N32_AF11 11U
/** AF12 */
#define N32_AF12 12U
/** AF13 */
#define N32_AF13 13U
/** AF14 */
#define N32_AF14 14U
/** AF15 */
#define N32_AF15 15U
/** ANALOG */
#define N32_ANALOG 16U

/** @} */

/**
 * @name N32 pinmux bit field mask and positions.
 * @{
 */

/** Port field mask. */
#define N32_PORT_MSK 0xFU
/** Port field position. */
#define N32_PORT_POS 0U
/** Pin field mask. */
#define N32_PIN_MSK 0xFU
/** Pin field position. */
#define N32_PIN_POS 4U
/** AF field mask. */
#define N32_AF_MSK 0x1FU
/** AF field position. */
#define N32_AF_POS 8U

/** @} */

/**
 * Obtain port field from pinmux configuration.
 * 
 * @param pinmux Pinmux bit field value.
 */
#define N32_PORT_GET(pinmux) \
	(((pinmux) >> N32_PORT_POS) & N32_PORT_MSK)

/**
 * Obtain pin field from pinmux configuration.
 * 
 * @param pinmux Pinmux bit field value.
 */
#define N32_PIN_GET(pinmux) \
	(((pinmux) >> N32_PIN_POS) & N32_PIN_MSK)

/**
 * Obtain AF field from pinmux configuration.
 * 
 * @param pinmux Pinmux bit field value.
 */
#define N32_AF_GET(pinmux) \
	(((pinmux) >> N32_AF_POS) & N32_AF_MSK)

/**
 * @brief Remap configuration bit field.
 * 
 * Fields:
 *
 * - 0..3: port
 * - 4..7: pin
 * - 8..12: af
 * 
 * @param port Port ('A'..'P')
 * @param pin Pin (0..15)
 * @param af Alternate function (ANALOG, AFx, x=0..15).
 */
#define N32_PINMUX_AF(port, pin, af)					\
	(((((port) - 'A') & N32_PORT_MSK) << N32_PORT_POS) |		\
	 (((pin) & N32_PIN_MSK) << N32_PIN_POS) |			\
	 (((N32_ ## af) & N32_AF_MSK) << N32_AF_POS))

#endif /* DT_BINDINGS_PINCTRL_N32_AF_H_ */

 
 
 
 
 
 
 
 