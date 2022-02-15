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

    Pseudocode:     

    Maintenance Log:
    Date: 2/14/22   Done:
                    Created project
                    Added some code
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
    ifstream in;
    ofstream out("outputFile.txt");
    in.open("inputFile.txt");
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
    }
    
    out.close();
    in.close();
    _getch();
    return 0;









    
    /*printf("------------------------------------------------------------------------------------------------------------------------\n\n");
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
    _getch();*/

    return 0;
}