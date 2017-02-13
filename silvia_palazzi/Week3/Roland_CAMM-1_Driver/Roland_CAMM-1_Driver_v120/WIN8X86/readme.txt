*********************************************************
   Roland CAMM-1 DRIVER for Windows(R) 8.1 / 8 32-bit
*********************************************************

We do recommend you to read through this document first for your better understanding of Roland CAMM-1 DRIVER. This "Readme" file provides some important information to install Roland CAMM-1 DRIVER.

Explanation here is assuming that you are already familiar with operations on Windows. The further information about operation on Windows, please refer the user's manual from Microsoft Corp.

If you are reading this file with Notepad, check 'WordWrap' in Edit menu so that you can read more easily.


< Table of Contents >

1. Overview
2. Installing the Driver
3. Uninstalling the Driver
4. Important Notes


* "Windows(R)" is registered trademark or trademark of Microsoft(R) Corporation in the United States and/or other countries.
* "TrueType" is a trademark of Apple Computer, Inc.
* Corel and CorelDRAW are registered trademarks or trademarks of Corel Corporation or Corel Corporation Limited.
Other company and product names appearing herein are trademarks or registered trademarks of their respective holders.

Copyright (C) 2012 - 2014 Roland DG Corporation

R3-141104


----------------------------------------

< 1. Overview >

This driver provides you the capability to output cutting to the Roland CAMM-1 series sign-making machine from your Windows graphics and drawing application software.


----------------------------------------

< 2. Installing the Driver >

NOTICE:
This section describes the installation of downloaded driver.
If you install the driver by using the media included machine, click "Installation Driver" on the launcher menu.


*	Log on as a user with administrator rights.
*	If an older version of the driver is installed, uninstall it before you install the new one. For more information about how to remove the driver, refer to the next section, "Uninstalling the Driver."

1.	Switch off the power to the machine, then detach the connector cable between the machine and the computer.
2.	Turn on the computer. After Windows has started, turn on the machine. At this time, do not attach the connector cable to the computer and the machine yet.
3.	Click [Desktop].
4.	Start Windows Explorer, then open the drive or folder where the driver is located. (*)
5.	Double-click "SETUP.EXE".
6.	The [User Account Control] appears, click [Allow].
7.	The Setup program for the driver starts.
8.	Click [Install] to choose it.
	Choose the machine and connection port you're using, then click [Start].
9.	After installation has finished, use the cable to make the connection between the computer and the machine.


----------------------------------------

< 3. Uninstalling the Driver >

*	Log on as a user with administrator rights.

1.	Switch off the power to the machine, then detach the connector cable between the machine and the computer.
2.	Start Windows.
3.	Click [Desktop].
4.	Move the mouse to the bottom right corner to display the Charm, then click [Settings].
5.	Click [ControlPanel], and then click [Uninstall a program].
6.	Click the driver for the machine to delete to select it, then click [Uninstall].
7.	A message prompting you to confirm deletion appears. Click [Yes].
8.	Click [Start]-[Desktop].
9.	Start Windows Explorer, then open the drive or folder where the driver is located. (*)
10.	Double-click "SETUP.EXE".
11.	The [User Account Control] appears, click [Allow].
12.	The Setup program for the driver starts.
13.	Click [Uninstall] to choose it.
	Select the machine to delete, then click [Start].
14.	If it is necessary to restart your computer, a window prompting you to restart it appears. Click [Yes].
15.	After the computer has restarted, start [ControlPanel], then click [View devices and printers].
16.	Right-click the icon when the icon of the machine you want to delete exists, and then click Remove Device.


(*) When using the CD-ROM, specify the folder as shown below (assuming your CD-ROM drive is the D drive).

	D:\Drivers\WIN8X86

If you're not using the CD-ROM, go to the Roland DG Corp. website (http://www.rolanddg.com/) and download the driver for the machine you want to delete, then specify the folder where you want to expand the downloaded file.


----------------------------------------

< 4. Important Notes >

- This driver does not support [Test Print].


- When you are outputting cutting data from CutStudio, select the [High Resolution] option.
Use the following method to make the setting for the [High Resolution] option.

1. Quit all running programs.
2. In Windows, click [Start].
   Open [Control Panel]-[Printer] folder.
3. Right click the Roland CAMM-1 icon to choose it.
4. Click [Printing Preferences].
5. For [Options] tab, select [High Resolution] to activate the setting.


- This driver does not support output any bitmap (raster) data. It is impossible to output texts or border lines etc. from such applications that output bitmap data, for example word processing softwares.
We recommend to use drawing softwares.


- Specify the line width for cutting lines as follows.
It may not be possible to cut lines of the specified width.

* Program Settings 
  CorelDRAW X7/X6/X5/X4/X3		-- Hairline


- Shading information inside shapes is not output to the CAMM-1.
This driver does not support shading for shapes. Shading information is interpreted as bitmap data and ignored.


- Some objects with Fill shapes are cut twice.
Going to the [Options] tab and clearing the selection for [Cut Polygons] can avoid double cutting in some cases.
Set lines you want to cut once to no Fill (note that white is not no Fill) and make the setting for only Contour Line.


- When you will output TrueType or OpenType fonts, you should generate 'outlines' of texts to convert them into vector data. Please refer to the manual of your application software for this function. If your software does not have the function to generate outline, it is impossible to output TrueType or OpenType fonts.


- Be sure to disable Rotate function (select RO-0) in your CAMM-1 machine.
To switch Rotate on and off, make the setting using the driver.


- Be sure to set driver's paper size before cutting with an accessory sheet.


##### Important Notes When Performing Output from CorelDRAW X7/X6/X5/X4/X3 #####

- Set a hairline width for the cutting line.
Cutting will not be performed if the line width is something other than hairline.

- At the [Layout]-[Page Setup] screen, [Set From Printer] is updated with driver-specified cutting-range lengths of up to 3,276.7 mm.


========================================================

If you have further questions or problem, please contact to your local vendor or Roland sales center.
