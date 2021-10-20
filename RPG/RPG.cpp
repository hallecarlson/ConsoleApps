// RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Author: Halle Carlson
   Projet Name: RPG Instructions
   File Name: RPG.cpp
   Purpose: Output a series of insructions for my RPG.
   Pseudocode: The code outputs a series of text including instructions and commands for my RPG, notes about 
   what has and hasn't ben added to the code, and narration that sets the scene for the beginning of the story.
   Maintenance Log:
   Date: 9/20/21    Done:
                    Began project
                    Added code to output text
                    Pushed to GitHub

   Date: 9/21/21    Done:
                    Added code to output text
                    Added code to format text so that it prints more neatly in the debug window and so that the 
                    player can press a key to print parts of dialogue one at a time
                    Tested the program as I added code to fix errors as they came
                    Pushed to GitHub

   Date: 9/22/21    Done:
                    Added pseudocode and comments
                    Pushed to GitHub

   Date: 9/24/21    Done:
                    Updated pseudodoce and comments
                    Pushed to GitHub

   Date: 10/19/21   Done:
                    Added code
                    Pushed to GitHub

   Date: 10/20/21   Done:
                    Added code to allow player to input their name
                    Added code to output random player hit points and damage points within a range
                    Fixed errors
                    Added comments
                    Formatted code
                    Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    //srand(0);
    srand((unsigned)time(NULL));
    
    // /*
    std::cout << "Welcome to Nightmareland!\n";
    printf("an RPG (in progress) created by Halle Carlson\n\n");
    printf("the following commands are placeholders and have not been added to the code yet.\n\n");
    printf("[c] -------------> open your inventory\n");
    printf("[x] -------------> observe/interact with something in your sight / learn more about an item in your inventory\n");
    printf("[z] -------------> stop observing/interacting with something in your sight / unselect an item in your inventory\n");
    printf("[spacebar] ------> scroll through text\n");
    printf("[number keys] ---> select specified commands\n");
    printf("[hp] ------------> current hit points\n");
    printf("[dp] ------------> damage points dealt per hit\n\n");
    _getch();

    /*
    printf("the are a few instances in this code where the player is prompted to enter a command, including using the spacebar to scroll through text. ");
    printf("these are placeholders and you can press any key to move on. in instances where there are multiple options for commands, all options will print out ");
    printf("in the debug window in order.\n\n");
    _getch();
    */

    int player_hp_max = 30;
    int player_hp_min = 20;
    int player_hp;

    int player_dp_max = 10;
    int player_dp_min = 0;
    int player_dp;

    printf("who are you? (input player name)");
    string player_name;
    cin >> player_name; 
    fseek(stdin, 0, SEEK_END);
    
    printf("> %s... ", player_name.c_str());
    _getch();
    printf("that's right\n\n");
    _getch();

    player_hp = player_hp_min + rand() % (player_hp_max - player_hp_min + 1);   //player hit points [20, 30] / 30 max

    printf("[player] --> %s\n", player_name.c_str());
    printf("[hp] ------> %i / %i\n", player_hp, player_hp_max);         //starting hp / 30 max
    printf("[dp] ------> %i - %i\n", player_dp_min, player_dp_max);     //0-10 dp


    /*
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
    printf("> you're standing in a vast valley.\n");
    _getch();
    printf("> the ground is covered in wheat, which has grown to your waist. upon closer inspection, this field of wheat extends through most of the valley.\n");
    _getch();
    printf("> the valley rests at the bottom of a mountain range.\n");
    _getch();
    printf("> the mountains aren't particularly tall, but they are covered with a blanket of snow.\n");
    _getch();
    printf("> it's not just the peaks, either. the snow covers nearly all of the mountains themselves.\n");
    _getch();
    printf("> the mountains encircle you from nearly every direction, except for behind you.\n");
    _getch();
    printf("> about 100 yards behind you is a beach, littered with felled trees, pale and dry from the passage of time.\n");
    _getch();
    printf("> another 100 yards down is the ocean, which appears to extend forever, ignoring the curvature of the earth.\n");
    _getch();
    printf("> it seems you have no choice but to find a way past the mountains.\n");
    _getch();
    */

    //Output an introduction to the screen(already done)
    //Create variables for hit points(your health), damage points(damage you give), and name
    //Choose maxand min for healthand hit pointsand randomly give them to the user
    //Address the user by name where appropriate

    return 0;
}


