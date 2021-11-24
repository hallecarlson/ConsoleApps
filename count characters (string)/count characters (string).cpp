// count characters (string).cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-03
    File Name:      count characters (string).cpp
    Purpose:        Get user input and count the amount of spaces, tabs, newlines, and numbers. Use looping.

    Pseudocode:     Title printed to screen
                    List of characters that are counted from player input
                    Screen is cleared and title is printed again so that it's still at the top of the output window
                    Variables for characters 
                    Computer gets player input
                    Counter loop begins
                    Results printed to screen
                    Player chooses to play again or end the program

    Maintenance Log:
    Date: 11/15/21  Done:
                    Created project  

    Date: 11/19/21  Done:
                    Added code and comments for setup
                    Pushed to GitHub

    Date: 11/22/21  Done:
                    Minor changes
                    Pushed to GitHub

    Date: 11/23/21  Done:
                    Added code for output
                    Added variables
                    Added code for input and calculations
                    Formatted code and output
                    Pushed to GitHub

    Date: 11/24/21  Done:
                    Added code
                    Tested code
                    Fixed small errors
                    Formatted code and output
                    Tested code again
                    Added comments
                    Added pseudocode
                    Pushed to GitHub

*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int main()
{ 
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                Character Counter\n");
    printf("                                            Created By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nThis program gets user input and counts:\n");
    printf("- spaces\n");
    printf("- tabs\n");
    printf("- newlines\n");
    printf("- single-digit numbers\n\n");
    _getch();

    char retake;

    do
    {
        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("                                                Character Counter\n");
        printf("                                            Created By: Halle Carlson\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        int space = 0;
        int tab = 0;
        int newline = 0;
        int number = 0;
       
        printf("End your input with a tilde (~)\n");
        printf(">");
        string input;
        getline(cin, input, '~');
        fseek(stdin, 0, SEEK_END);

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == ' ')
            {
                space++;
            }
            if (input[i] == '\t')
            {
                tab++;
            }
            if (input[i] == '\n')
            {
                newline++;
            }
            if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9')
            {
                number++;
            }           
        }

        printf("\n");
        printf("spaces:   %i\n", space);
        printf("tabs:     %i\n", tab);
        printf("newlines: %i\n", newline);
        printf("numbers:  %i\n\n", number);
        _getch();

        printf("Input again ?\n(y for yes || any other key for no)\n");
        printf(">");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);

    } while (retake == 'y');

    printf("\nThanks for using my character counter!\n");
    _getch();

    return 0;
}
