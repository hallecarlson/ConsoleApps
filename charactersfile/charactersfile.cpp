// charactersfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-03
    File Name:      charactersfile.cpp
    Purpose:        Modify GS04-03 to read the data of a text file and count the number of digits (0-9), tabs, spaces, 
                    newlines, and total characters (not just letters but all characters). Make sure that the counting 
                    routine runs until the end of the file is reached. One way to do this is read each line into a string, 
                    then check each character in the string one by one (but you cannot count newlines in the string, you 
                    will need to count the number of times you read lines). If you decide to modify the old code, copy the 
                    .cpp file or the whole project. Create a text file for testing the data. (You can do so with any text 
                    editor, even your compiler.) Make sure the text file has a known number of digits, tabs, spaces, and 
                    newlines (for testing). The total number of characters should just be the number of times your code 
                    runs through the inner loop (if you read each line), not the number of letters (you do not need to 
                    count letters).    

    Pseudocode:     Intro
                    Variables
                    File accessed
                    Characters counted
                    Character numbers printed to screen
                    Player thanked

    Maintenance Log:
    Date: 2/14/22   Done:
                    Created project
                    Added some code
                    Pushed to GitHub

    Date:  2/16/22  
    +.04101Done:
                    Got help from Mr. Miyoshi
                    Added code
                    Added pseudocode
                    Pushed to GitHub
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{    
    
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                                Character Counter\n");
    printf("                                            Created By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nThis program gets text file data and counts:\n");
    printf("- spaces\n");
    printf("- tabs\n");
    printf("- newlines\n");
    printf("- single-digit numbers\n\n");
    _getch();

        system("cls");

        int space = 0;
        int tab = 0;
        int newline = 0;
        int number = 0;

        ifstream in;
        ofstream out("outputFile.txt");
        in.open("charactersfile.txt");
        string temp;

        if (!in.is_open())
        {
            printf("File not found...");
            _getch();
            return 0;
        }

        while (getline(in, temp))
        {
            printf("%s\n", temp.c_str());
            out << temp << '\n';

            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] == ' ')
                {
                    space++;
                }
                if (temp[i] == '\t')
                {
                    tab++;
                }
                
                if (temp[i] == '0' || temp[i] == '1' || temp[i] == '2' || temp[i] == '3' || temp[i] == '4' || temp[i] == '5' || temp[i] == '6' || temp[i] == '7' || temp[i] == '8' || temp[i] == '9')
                {
                    number++;
                }
            }
                newline++;          
        }

        printf("\n");
        printf("spaces:   %i\n", space);
        printf("tabs:     %i\n", tab);
        printf("newlines: %i\n", newline);
        printf("numbers:  %i\n\n", number);
        _getch();

        out.close();
        in.close();
        _getch();

    printf("\nThanks for using my character counter!\n");
    _getch();

    return 0;
}