# BlueDOS
One of the first Bluetooth drivers for DOS. Tested on MS-DOS 6.22.

# Compatibility
BlueDOS has been tested on MS-DOS 6.22, and will also work on any Windows version installed on top of DOS 6.22 (e.g., Windows 3.1).

# How to Use
BlueDOS allows you to pair modern Bluetooth devices with your DOS computer. When you start the driver (by typing its executable file name and hitting the Enter key), it will immediately enable Bluetooth and attempt to detect active devices in range. If BlueDOS does detect a device, it will automatically pair the device.

Currently, BlueDOS always automatically pairs the first device it detects. Because of this, please make sure the Bluetooth device you want to use is the only device with pairing mode active, if possible. If this is not possible, place your Bluetooth device as close to the computer as you can to ensure that it's the first detected device.

**Note**: Pairing a device while another device is already paired will unpair the initial device, if that makes sense. 

If you want to use BlueDOS while in a DOS-based Windows version, such as Windows 3.1, you can either:

- Pair your Bluetooth device in DOS before opening Windows
- Open an MS-DOS Prompt (`COMMAND.COM`) window from within Windows and pair your device

# Build Instructions
1. Download the source code file (`BLUEDOS.C`) and place it somewhere on your DOS hard drive.
2. Install [Borland Turbo C 2.x](https://winworldpc.com/product/borland-turbo-c/2x) from WinWorldPC.
3. Launch Turbo C, go to `File >> Open`, and browse to wherever you put the source code file.
4. Now is the time to make any desired changes to the code.
5. Create an executable file (EXE) by going to `Compile >> Make EXE File`. If you've made changes to the code, you should test it first by going to `Run >> Run`.

Alternatively, if you don't want to build BlueDOS yourself, you can just download a premade executable from the Releases page.

# License
BlueDOS is released under the MIT license.
