#include <avr/io.h>
#include "backlight.h"
#include "led.h"

void backlight_init_ports()
{
    DDRC |= 0b10000000; // Enable PC7 for output (backlight/switch)
}

void led_set(uint8_t usb_led)
{
    (usb_led & (1<<USB_LED_CAPS_LOCK)) ? backlight_caps_enable() : backlight_caps_disable();
}

void backlight_set(uint8_t level)
{
    (level & BACKLIGHT_SWITCH) ? backlight_switch_enable() : backlight_switch_disable();
    (level & BACKLIGHT_PCB) ? backlight_pcb_enable() : backlight_pcb_disable();
}

void backlight_switch_enable()
{
    PORTC |= 0b10000000;
}

void backlight_switch_disable()
{
    PORTC &= ~0b10000000;
}

void backlight_switch_invert()
{
    PORTC ^= 0b10000000;
}

void backlight_pcb_enable()
{
    PORTC |= 0b10000000;
}

void backlight_pcb_disable()
{
    PORTB &= ~0b10000000;
}

void backlight_pcb_invert()
{
    PORTB ^= 0b10000000;
}

void backlight_caps_enable()
{
}

void backlight_caps_disable()
{
}

void backlight_caps_invert()
{
}
