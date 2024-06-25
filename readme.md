# Quick setup for esp32-s3-devkitc-1-n16r8v board

## Configure the board

This guide is for board like the one in [Aliexpress](https://es.aliexpress.com/item/1005006266375800.html). This board is not supported by the official espressif32 platform, so we need to add it manually.

If espressif32 platform is not installed, open PlatformIO home and go to platforms. Click on the advanced button and search for `espressif32`. Install it.

Download the [board configuration file](https://github.com/handledexception/platform-espressif32/blob/esp32-s3-devkitc-1-n16r8v/boards/esp32-s3-devkitc-1-n16r8v.json) and copy it to `C:\Users\<username>\.platformio\platforms\espressif32\boards`.

Open PlatformIO home and create a new project. Select the board `Espressif ESP32-S3-DevKitC-1-N16R8V (16 MB QD, 8MB PSRAM)` and the framework `arduino`.

## Upload the code

There are three ways to upload the code to the board, depending on which USB port is used.

### USB port

Press the `rst` button while pressing the `boot` button to enter upload mode. "A fatal error occurred: No serial data received" error message will appear if the board is not in upload mode.

Press the `rst` button once to reset the board and run the code.

Click the `PlatformIO: Serial Monitor` button (not the one in the top bar) to read the serial data. It has to be reopened every time the board is reset.

### COM port

Click the upload button and wait for the code to be uploaded. No need to press any button on the board. No serial data is sent to the computer.

### Both ports, with two USB cables (recommended)

Go to the Platformio home and click on the `Devices` button. Find the COM port described as `USB-Enhanced-SERIAL CH343` and copy the number. Open the `platformio.ini` file and add (or uncomment) the following line:

```ini
upload_port = COMX
``` 

where `X` is the number of the COM port.

Click the upload button and wait for the code to be uploaded. No need to press any button on the board. Open the `PlatformIO: Serial Monitor` to read the serial data.
