/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <util/delay.h>
#include <avr/io.h>
#include "stdint.h"
#include "led.h"
#include "light_ws2812.h"

struct cRGB led[1];

void led_set(uint8_t usb_led)
{
    led[0].r=255;led[0].g=00;led[0].b=0;    // Write red to array
    ws2812_setleds(led,1);
    _delay_ms(50);                         // wait for 50ms.

    led[0].r=0;led[0].g=255;led[0].b=0;			// green
    ws2812_setleds(led,1);
    _delay_ms(50);

    led[0].r=0;led[0].g=00;led[0].b=255;		// blue
    ws2812_setleds(led,1);
    _delay_ms(50);
}
