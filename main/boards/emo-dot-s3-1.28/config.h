#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

// EMO Dot S3 configuration

#include <driver/gpio.h>

#define DISPLAY_WIDTH   240
#define DISPLAY_HEIGHT  240
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false

#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0

#define DISPLAY_SPI_SCLK_HZ     (40 * 1000 * 1000)

#define DISPLAY_SPI_MOSI_PIN    GPIO_NUM_13
#define DISPLAY_SPI_SCLK_PIN    GPIO_NUM_12
#define DISPLAY_SPI_CS_PIN      GPIO_NUM_11
#define DISPLAY_SPI_DC_PIN      GPIO_NUM_10
#define DISPLAY_SPI_RESET_PIN   GPIO_NUM_NC

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_9
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#define AUDIO_CODEC_I2C_SCL_PIN  GPIO_NUM_1
#define AUDIO_CODEC_I2C_SDA_PIN  GPIO_NUM_2

#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_3
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_4
#define AUDIO_I2S_GPIO_WS   GPIO_NUM_5
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_6
#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_NC

#define BOOT_BUTTON_GPIO        GPIO_NUM_7
#define AUDIO_CODEC_PA_PIN       GPIO_NUM_8

#define AUDIO_INPUT_SAMPLE_RATE  24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_CODEC_ES8311_ADDR  ES8311_CODEC_DEFAULT_ADDR

#define BUILTIN_LED_GPIO        GPIO_NUM_48

#endif // _BOARD_CONFIG_H_
