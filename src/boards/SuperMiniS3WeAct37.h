#pragma once

#include <Arduino.h>

// ============================================================================
// Board Profile: ESP32-S3 SuperMini + WeAct Studio 3.7" E-Paper (UC8253C)
// ============================================================================

// Display Resolution
#ifndef EPD_WIDTH
#define EPD_WIDTH 240
#endif
#ifndef EPD_HEIGHT
#define EPD_HEIGHT 416
#endif

// Primary Shared Hardware SPI Bus
#ifndef EPD_SCLK
#define EPD_SCLK 10   // Shared SPI Clock (SCK / CLK)
#endif
#ifndef EPD_MOSI
#define EPD_MOSI 12   // Shared SPI MOSI (DIN / MOSI)
#endif
#ifndef SPI_MISO
#define SPI_MISO 11   // MicroSD Data Out (DOUT / MISO; Display DOUT is NC)
#endif

// Display Control Lines
#ifndef EPD_CS
#define EPD_CS 4      // Display Chip Select
#endif
#ifndef EPD_DC
#define EPD_DC 5      // Display Data / Command
#endif
#ifndef EPD_RST
#define EPD_RST 6     // Display Reset
#endif
#ifndef EPD_BUSY
#define EPD_BUSY 7    // Display Busy (Active-LOW for UC8253C)
#endif

// MicroSD Control Lines
#ifndef SD_CS
#define SD_CS 8       // MicroSD Chip Select
#endif

// Navigation Buttons (Active-LOW, Internal Pull-Up, RTC wake-up capable)
#ifndef BTN_PREV
#define BTN_PREV 1    // Previous Page / Nav Up (GPIO 1, RTC_GPIO 1)
#endif
#ifndef BTN_NEXT
#define BTN_NEXT 2    // Next Page / Nav Down (GPIO 2, RTC_GPIO 2)
#endif
#ifndef BTN_MENU
#define BTN_MENU 3    // Menu / Confirm / Back / Power (GPIO 3, RTC_GPIO 3)
#endif

// SPI Speeds
#define DISPLAY_SPI_SPEED 10000000  // 10 MHz limit for UC8253C
#define SD_SPI_SPEED 20000000       // 20 MHz for MicroSD
