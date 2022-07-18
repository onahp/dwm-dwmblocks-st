#!/bin/sh

# Start Programs
if [-d /etc/X11/xinit/xinitrc.d ] ; then
	for f in /etc/X11/xinit/xinitrc.d/?*.sh ; do
		[ -x "$f" ] && "$f"
	done
	unset f
fi

# Compositor
picom -f &

# Wallpaper
nitrogen --restore &

# Window Manager Status Bar [Right Corner]
dwmblocks &

# Create Loop
while true; do
	dwm > /dev/null 2>&1
done

# Execute DWM
exec dwm
