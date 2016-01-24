#!/bin/sh

if ! [ -d $1 ]; then
	echo "Usage: $1 <keyboard> [keymap]"
	echo
	echo "This script waits for a keyboard to enter the atmega32u4 bootloader."
	echo "When it sees this happen it flashes the keyboard firmware specified."
	echo "You can also specify a keymap if you want something other than the"
	echo "default."
	exit 1
fi

cd $1

if [ -z "$2" ]; then
	dfu_cmd="make dfu"
else
	dfu_cmd="make KEYMAP=$2 dfu"
fi

while true; do
    sleep 1 # Wait a second so we don't inadvertently consume tons of resources
	# Wait until we see an atmel mcu ready to program
	case $(uname) in
		Darwin)
			ioreg -p IOUSB | grep -q ATm32U4DFU || continue
		;;
		*)
			# If you're looking at this because you can't use it on your OS why
			# not submit a pull request?
			echo "Unsupported OS! Sorry. :("
			exit
		;;
	esac

	# Flash the keyboard
	$dfu_cmd && echo "Successfully flashed $1!"
	sleep 5
	clear
done
