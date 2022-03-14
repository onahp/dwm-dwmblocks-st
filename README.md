# dwm-dwmblocks-st
Windows manager set up using DWM and the dependencies for arch linux set up. 

## Requirements
All suckless projects must be installed and patched accordingly before they can be used. More modules and patches can be found on the follwing sites.
- [dwm - Dynamic Windows Manager](https://dwm.suckless.org/)
- [st - Simple Terminal](https://st.suckless.org/)
- [dwmblocks - Master Branch](https://github.com/torrinfail/dwmblocks)

## Patches
Patches found in each suckless project (excluding `dwmblocks`) can be patched using the following.
- Example : `patch < dwm-alpha-202081221-diff`
- You can insert your own patches if you want.

## Setup
Instructions to a full complete set up.
1. `git clone` repository or pull each folder in the repository of your choice.
2. Run patches individually within each directory and not all at once with `patch < {patchInDirectory}`
3. Override `config.h` of each directory AFTER patches by copying contents of the `config.def.h` like so -> `sudo cp config.def.h config.h`
4. Run `sudo make clean install` in each directory.

## Troubleshooting
Most likely bound into hunks not being successful due to incorrect patches installed requiring manual configuration. Needs to be sorted out manually.
