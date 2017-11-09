# About this Firmware

## About this Firmware

This Firmware is based on the original Prusa i3 MK2 Firmware, but it includes some changes like:
- Hyperfine Bed Tuning. PR was created, but not yet merged in Prusa i3 MK2
- PLA 1st in Preheat menu. PR is created, but not yet merged in Prusa i3 MK2
- Filament Runout Sensor is activated. No PR created yet.
- Updated German translation. PR was created, but not yet merged in Prusa i3 MK2
- Modified English to get rid of most warnings using langtool.pl perl script
- New Dutch translation by 3d-gussner. PR was created but revoked by ATmega 2560 limits
- New Portuguese translation by @nfsmedeiros BIG thanks
- Started with French translation, **Help needed

## Disclaimer

Please note that this is not the original Prusa i3 MK2 Firmware and if you decide to use it you will do it at your own risk!


## Having some issues?

If you have an issue, please check first if it also happens with the original Prusa i3 MK2 Firmware. If the problem persists, open an issue on the original firmware branch.
If not, feel free to open an issue here. This will help debugging all the PRs that are in queue at the original firmware branch.


## Download of precompiled .hex files

Original Prusa i3 MK2 Firmware

General instructions

Pre-compiled hex files for all printers by PRUSA RESEARCH are available in hex_files folder.

Just clone the repo and flash it to the firmware.

Build instructions

Step 1 - Download and Install/Unpack Arduino

Download and install Arduino:
https://www.arduino.cc/en/Main/Software

Step 2 - Download PRUSA i3 MK2 Firmware

Clone the prusa3d/Prusa-Firmware (Branch: MK2) repository to a local path.

If you are not an expert git user, it is suggested to Download it as ZIP from:
https://github.com/prusa3d/Prusa-Firmware/tree/MK2

Step 3 - Prepare the Arduino
- Add in Arduino IDE under File->Preferences at Additional Board URL https://raw.githubusercontent.com/ultimachine/ArduinoAddons/master/package_ultimachine_index.json
- Search, install 'Rambo' under Tools->Board->Board Manager
- restart Arduino IDE

Step 4 - Prepare the Arduino Firmware

Copy and rename the file Prusa-Firmware/Firmware/variants/1_75mm_MK2-RAMBo13a-E3Dv6full.h file to Firmware/Configuration_prusa.h (note that you may have to use the 1_75mm_MK2-RAMBo10a-E3Dv6full.h if you have an older RAMBo board.

Step 5 - Load and configure the Arduino IDE

Load the Arduino IDE and select the RAMBo as target board from the Tools submenu. You are now ready to modify and build the firmware!

Step 6 [Optional] - Edit the Firmware

Make some modifications to the firmware.

For example, edit the Configuration_prusa.h file and edit (at your own risk):

Extruder PID tuning: DEFAULT_Kp, DEFAULT_Ki and DEFAULT_Kd values
Bed PID tuning: DEFAULT_bedKp, DEFAULT_bedKi, DEFAULT_bedKd values
Extruder fan noise: reduce EXTRUDER_AUTO_FAN_SPEED from 255 to 96 (experiment a bit)

Step 7 - Build the Firmware

You can now build the firmware:

Compile the firmware with Sketch -> Build (CTRL-R).
Export the compiled binary with Sketch -> Export compiled sketch (CTRL-ALT-S).
You will find the exported binary in the Prusa-Firmware/Firmware directory:

Firmware.ino.with_bootloader.rambo.hex (with Rambo board version < 1.0.1) or Firmware.ino.rambo.hex (with Rambo board version 1.0.1)

Step 7a - Known errors

If you are using Linux AND using a cloned git repo, you'll encounter the "generate_version_header_for_marlin execute file not found in $path" error; download and install the script from the following website:
Wackerbarth/Marlin#1
You'll also have to make the script executable (chmod a+x path/to/file)

Step 8 - Upload the Firmware

Upload the new firmare to the printer using the standard firmware update tool included in original Prusa firmware:
http://manual.prusa3d.com/Guide/Upgrading+firmware/66#_ga=1.48414886.1605935719.1473440900
