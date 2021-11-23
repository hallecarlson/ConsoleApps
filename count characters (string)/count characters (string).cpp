// count characters (string).cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-03
    File Name:      count characters (string).cpp
    Purpose:        

    Pseudocode:     

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

    char retake;
    
    do
    {
        int space;
        int tab;
        int newline;
        int number;

        printf("\nThis program gets user input and counts numbers, spaces, tabs, and newlines.\n");
        printf("Please type something. When you are ready to input what you have typed, type a tilde (~) and hit the enter key.\n");
        printf(">\n");
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

        printf("\nSpaces:   %i\n", space);
        printf("Tabs:     %i\n", tab);
        printf("Newlines: %i\n", newline);
        printf("Numbers:  %i\n\n", number);
        printf("Input again ?\n (y for yes || any other key for no)");

    } while (retake == 'y');


    return 0;
}
