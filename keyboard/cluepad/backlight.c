#include <avr/io.h>
#include "backlight.h"
#include "led.h"

#include "print.h"

int pwm_level;

void led_set(uint8_t usb_led)
{
    print("led_set\n");
}

void init_backlight_pin(void)
{
    ICR1 = 0xFFFF;  // Use 16-bit resolution.
    DDRC |= (1<<7);
    TC4H = 0x03;
    OCR4C = 0xFF;
    TCCR4A = 0b10000010;
    TCCR4B = 0b00000001;
}

void backlight_set(uint8_t level)
{
    switch (level)
    {
        case 0:
            pwm_level = 0x000;
            TC4H = pwm_level >> 8;
            OCR4A = 0xFF & pwm_level;
            break;
        case 1:
            pwm_level = 0x00F;
            TC4H = pwm_level >> 8;
            OCR4A = 0xFF & pwm_level;
            break;
        case 2:
            pwm_level = 0x0F0;
            TC4H = pwm_level >> 8;
            OCR4A = 0xFF & pwm_level;
            break;
        case 3:
            pwm_level = 0xF00;
            TC4H = pwm_level >> 8;
            OCR4A = 0xFF & pwm_level;
            break;
        default:
            xprintf("Unknown level: %d\n", level);
    }
}
