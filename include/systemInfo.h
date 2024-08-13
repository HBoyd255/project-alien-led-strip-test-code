/**
 * @file systemInfo.h
 * @brief Definition for constant values related to the hardware setup for the
 * WS2812B LEDs.
 *
 * @author Harry Boyd - https://github.com/HBoyd255
 * @date 2024-08-13
 * @copyright Copyright (c) 2024
 */

#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H

// Serial
#define SERIAL_BAUD_RATE 230400

// Pixels
// The pin that D1 of the LED strip is connected to.
#define PIXELS_DATA_PIN D5
// The number of Ws2812 LEDs on the robot.
#define LED_COUNT 16

#endif  // SYSTEM_INFO_H