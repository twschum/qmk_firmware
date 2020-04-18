Levinpad
========

Using one half of the Levinson rev2 PCB by [Keebio](https://keeb.io) as a numpad/macropad. This firmware exists to support Proton C as a controller option.

Keyboard Maintainer: [Bakingpy/nooges](https://github.com/nooges)
Hardware Supported: Pro Micro, Elite-C, Proton C
Hardware Availability: [Keebio](https://keeb.io)

Make example for this keyboard (after setting up your build environment):

    make levinpad:default

Example of flashing this keyboard with Pro micro:

    make levinpad:default:avrdude

Example of flashing this keyboard with Elite-C:

You'll need to add `BOOTLOADER = atmel-dfu` to your `rules.mk` to ensure that resetting the board works properly.

Hold the reset button on the Elite-C board, or the reset button on the keyboard if already assembled, then release the button and run:

    make levinson/rev2:default:dfu

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

A build guide for this keyboard can be found here: [Levinson Build Guide](https://docs.keeb.io)
