# Random-Password-Generator-rpg-
A terminal based app that generates random passwords.

Who is this app for? With random passwords generators on many websites why would anyone need their own? This app is for those who either don't trust websites or don't feel comfortable giving up control to a website. There's also the use case where some websites don't have a password generator and you may feel like you need one for security reasons. 

## Use

This app is coded in c++ and is small and pretty simple to use. All you do is call it up in your terminal or windows terminal. It will ask you how many characters you want your password to be. It generates it for you. You copy that and past it where you need to. The app will ask you if you want another. If you say "n" it will shutdown. If you say "y" it will go through the process again.

## Install

### On Linux

All you have to do is to open the terminal/windows terminal in the folder where you have the rpg.cpp file. Then execute the following lines:

gcc rpg.cpp -o rpg
chmod +x rpg

The only dependencies is the GNU C++ compiler.

### On Windows

There's an rpg.exe included. But dependencies are needed. An easy way to get the dependencies/libraries is to download and install [MinGW](https://www.mingw-w64.org/downloads/). After install just go into windows terminal and run the rpg.exe.

### On Mac
