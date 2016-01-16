Monarch keyboard firmware
=========================
DIY compact keyboard designed by koalapear, PCB designed by skullY.

## Monarch Resources
- [GeekHack Thread](https://geekhack.org/index.php?topic=75786.0)


## LED Support

After routing the matrix the Monarch had 2 pins left over. This allows for controllable lighting for two of the LED's. There are 3 possible LED's to turn on:

* Underlighting
* Capslock
* Numlock

There are two configurations available out of the box. You can switch between them by setting or commenting out the BACKLIGHT_ENABLE line in the Makefile. You must comment it out to disable it, changing it to NO will not work.


### Underlighting

To add underlighting to your Monarch you will need to solder on 16 SMD LED's and 16 matched resistors. For the LED's you can use anything from 0805 to 1206. If you have questions about whether your chosen LED/resistor combo will work post on the geekhack thread. Once you have added the components you will need to wire up the LED's.

There are 3 possible ways to wire underlighting:

* Always On
* Physical toggle switch
* Controllable brightness

To have your underlighting always on solder a jumper between GND and UNDERLIGHT, and another one between the FET bypass. This is the simplest way to enable underlighting.

If you would like to be able to turn off your underlighting, wire a physical toggle switch between the two contacts at the FET bypass.

To have controllable brightness connect C6 to UNDERLIGHT, and add a MOSFET and 10K resistor to the pads on the board. Make sure that the FET bypass is not connected. With BACKLIGHT_ENABLE set in the Makefile you can press Fn+Numlock to cycle through brightness levels.


### Capslock and Numlock

By default the firmware assumes you have CAPSLOCK wired to B6. If you have commented out BACKLIGHT_ENABLE it will assume that NUMLOCK is connected to C6. You can change this in [led.c](led.c).


## Build
Move to this directory then just run `make` like:

    $ make


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[default|<name>]


### 1  default
[keymap_default.c](keymap_default.c) Default monarch layout


#### 1.0 Default ANSI layer
    FIXME


#### 1.1 Default Fn Layer
    FIXME
