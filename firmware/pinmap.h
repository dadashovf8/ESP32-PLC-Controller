// ESP32 PLC Controller Board - pin and address map
// Extracted from the EasyEDA Pro netlist. ESP32-DevKitC (38-pin) assumed.
#pragma once

// ---------------- I2C (PCF8574A expanders) ----------------
#define PIN_I2C_SDA        21
#define PIN_I2C_SCL        22

#define PCF_ADDR_IN        0x38  // U29: P0-P7 = IN_0..IN_7
#define PCF_ADDR_OUT       0x39  // U31: P0-P7 = relay O0..O7
#define PCF_ADDR_MIX       0x3A  // U30: P0-P1 = IN_8..IN_9, P2-P3 = relay O8..O9, P4-P7 free

// Inputs are inverted: input active -> bit reads 0.

// ---------------- I2S speaker (MAX98357A) ----------------
#define PIN_SPK_BCLK       14
#define PIN_SPK_LRCLK      27
#define PIN_SPK_DIN        32

// ---------------- I2S microphone (ICS-43434, left channel) ----------------
#define PIN_MIC_BCLK       26
#define PIN_MIC_WS         25
#define PIN_MIC_SD         35   // input-only pin

// ---------------- Display UART (JST UART_SCREEN, 5 V supply) ----------------
#define PIN_SCREEN_TX      13
#define PIN_SCREEN_RX      34   // input-only pin

// ---------------- Expansion UART (JST UART) ----------------
#define PIN_UART1_TX       17
#define PIN_UART1_RX       16

// ---------------- SPI (JST SPI, VSPI pins) ----------------
#define PIN_SPI_SCLK       18
#define PIN_SPI_MISO       19
#define PIN_SPI_MOSI       23
#define PIN_SPI_SS         33
