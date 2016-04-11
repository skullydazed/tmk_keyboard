#include <avr/io.h>
#include "backlight.h"
#include "led.h"
#include "print.h"
#include "eeconfig.h"

#include "i2c_master.h"

#define PCA9634_ADDRESS 0x80

int pwm_level;

void init_backlight_pin(void) {
    xprintf("init_backlight_pin()\n");
    i2c_init();

    // Set Mode 1
    send_i2c_message(0x00, 0b00000000);
    xprintf("Set Mode 1.\n");

    // Set Mode 2
    send_i2c_message(0x01, 0b00010101);
    xprintf("Set Mode 2.\n");

    // Set all LED for individual PWM
    send_i2c_message(0x0C, 0xAA);
    xprintf("Set LEDOUT0 for individual PWM.\n");
    send_i2c_message(0x0D, 0xAA);
    xprintf("Set LEDOUT1 for individual PWM.\n");
}

void send_i2c_message(uint8_t addr, uint8_t value) {
    /* Set a one-byte register on the LED driver.
     */
    if (i2c_start(PCA9634_ADDRESS) == 1) {
        xprintf("Error starting i2c\n");
        return;
    }
    i2c_write(addr);
    i2c_write(value);
    i2c_stop();
}

void backlight_set(uint8_t level) {
    // Determine the PWM level
    switch (level) {
        case 0:
            pwm_level = 0x00;
            break;
        case 1:
            pwm_level = 0x20;
            break;
        case 2:
            pwm_level = 0x40;
            break;
        case 3:
            pwm_level = 0x60;
            break;
        case 4:
            pwm_level = 0x80;
            break;
        case 5:
            pwm_level = 0xA0;
            break;
        case 6:
            pwm_level = 0xC0;
            break;
        case 7:
            pwm_level = 0xE0;
            break;
        case 8:
            pwm_level = 0xFF;
            break;
        default:
            xprintf("Unknown backlight level: %d\n", level);
            pwm_level = 0x00;
            eeconfig_write_backlight(0);
    }

    // Set the LED levels
    send_i2c_message(0x02, pwm_level);  // LED0
    send_i2c_message(0x03, pwm_level);  // LED1
    send_i2c_message(0x04, pwm_level);  // LED2
    send_i2c_message(0x05, pwm_level);  // LED3
    send_i2c_message(0x09, pwm_level);  // LED7
}
