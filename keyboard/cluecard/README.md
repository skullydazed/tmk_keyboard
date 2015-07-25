Cluecard keyboard firmware
==========================
For the cluecard, skullY's business card.

Q: Where can I get one?

A: This is something skullY gives out to his friends and business acquaintances. For something you can buy go checkout techkeys.us.

## Clueboard Resources
- [FIXME](http://link/some/stuff/already)


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
One keymap is available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[cmd_tab|esc|<name>]


### 1  cmd_tab
[keymap_cmd_tab.c](keymap_cmd_tab.c) Sends cmd-tab when the key is pressed.

#### 1.0 Default cmd-tab
    ,---
    |C-T|
    `---

### 2  Escape
[keymap_esc.c](keymap_esc.c) Sends Esc when the key is pressed.

#### 1.0 Default Escape
    ,---
    |Esc|
    `---

