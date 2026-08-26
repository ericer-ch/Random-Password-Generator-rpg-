# Random-Password-Generator-rpg

Under GNU GPLv3.

A terminal based app that generates random passwords.

Who is this app for? With random passwords generators on many websites why would anyone need their own? This app is for those who either don't trust websites or don't feel comfortable giving up control to a website. There's also the use case where some websites don't have a password generator and you may feel like you need one for security reasons. 

## Disclaimer

Random Password Generator (rpg) does not record any passwords. It assumes the user will take ownership, control, and responsibility of any and all passwords generated. It is up to the user to record the passwords as they see fit or not at all.  

## Use

This app is coded in c++ and is small and pretty simple to use. All you do is call it up in your terminal or windows terminal. It will ask you how many characters you want your password to be. It generates it for you. You copy that and past it where you need to. The app will ask you if you want another. If you say "n" it will shutdown. If you say "y" it will go through the process again.

## Install

### On Linux

All you have to do is to open the terminal in the folder where you have the rpg.cpp file. Then execute the following lines:

gcc rpg.cpp -o rpg
chmod +x rpg

The only dependencies is the GNU C++ compiler. Most Linux systems already have that compiler.


### On Windows

There's an rpg.exe included. But dependencies are needed. An easy way to get the dependencies/libraries is to download and install [MinGW](https://www.mingw-w64.org/downloads/). Please make sure to run the mingwvars.bat after downloading. After that, just go to the windows terminal and run the rpg.exe.

### On Mac

Before you do anything, make sure you have GNU C++ compiler, the only dependencies. [This article](https://osxdaily.com/2023/05/02/how-install-gcc-mac/) gives instructions on how to install the compiler.

After that, use the terminal in the folder where you have the rpg.cpp file. Then execute the following lines:

gcc rpg.cpp -o rpg
chmod +x rpg

You should get a file called rpg. That's your executable. To run it type "./rpg" when you are in the same folder as the file.
