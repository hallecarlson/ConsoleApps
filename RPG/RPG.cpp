// RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    std::cout << "Welcome to Nightmareland!\n";
    printf("an RPG (in progress) created by Halle Carlson\n\n");
    printf("the following commands are placeholders and have not been added to the code yet.\n\n");
    printf("[c] ---> open your inventory\n");
    printf("[x] ---> observe/interact with something in your sight / learn more about an item in your inventory\n");
    printf("[z] ---> stop observing/interacting with something in your sight / unselect an item in your inventory\n");
    printf("[spacebar] ---> scroll through text\n");
    printf("[number keys] ---> select specified commands\n\n");

    printf("the are a few instances in this code where the player is prompted to enter a command, including using the spacebar to scroll through text. ");
    printf("these are placeholders and you can press any key to move on. in instances where there are multiple options for commands, all options will print out ");
    printf("in the debug window in order.\n\n");
    _getch();

    printf("please enter your name\n\n");
    _getch();
    
    printf("> you find yourself in a mysterious, greyscale landscape.\n");
    printf("> you are unsure whether you are dreaming or you are awake.\n");
    printf("> what do you want to do?\n\n");
    _getch();

    printf("[option 1]\n");
    printf("> you take a look around.\n");
    _getch();
    printf("> there is no color in this world. the landscape is painted in every shade of grey imaginable. you think that color once belonged here... or will belong here.\n");
    _getch();
    printf("> it looks almost as if the scenery is imcomplete, like everything is in progess; stuck between existing and not existing.\n");
    _getch();
    printf("> you don't see any black or white...\n");
    _getch();
    printf("> you aren't sure you want to.\n");
    _getch();
    printf("> you don't recognize any of your surroundings, yet they feel so familiar...\n\n");
    _getch();
    printf("[you take a closer look] player pressed x key\n");
    printf("you're standing in a vast valley.\n");
    _getch();
    printf("the ground is covered in wheat, which has grown to your waist. upon closer inspection, this field of wheat extends through most of the valley.\n");
    _getch();
    printf("the valley rests at the bottom of a mountain range.\n");
    _getch();
    printf("the mountains aren't particularly tall, but they are covered with a blanket of snow.\n");
    _getch();
    printf("it's not just the peaks, either. the snow covers nearly all of the mountains themselves.\n");
    _getch();
    printf("the mountains encircle you from nearly every direction, except for behind you.\n");
    _getch();
    printf("about 100 yards behind you is a beach, littered with felled trees, pale and dry from the passage of time.\n");
    _getch();
    printf("another 100 yards down is the ocean, which appears to extend forever, ignoring the curvature of the earth.\n");
    _getch();
    printf("it seems you have no choice but to find a way past the mountains.\n");
    _getch();
    return 0;
}


