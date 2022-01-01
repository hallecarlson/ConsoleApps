// word reverser.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS06-05
    File Name:      word reverser.cpp
    Purpose:        Write a program that reverses the characters in a string. While there is a function 
                    that does this, using it does not count as writing a function. Your function should
                    pass one or two strings to it. The first function has two arguments, the first argument
                    is where the reversed string ends up and the second is where the original is passed.
                    The second function gets passed the original string and returns the reversed string. 
                    Make sure to keep the original string unchanged in the calling function (presumably 
                    main()). Output the original and reversed strings in the calling function.

    Pseudocode:


    Notes:

    Maintenance Log:
    Date: 12/7/21       Done:
                        Created project
                        Added comments
                        Added basic starting code
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

string wordreverser(string word, string word_reversed)
{
    word;
    word_reversed = "";

    for (int i = word.length() - 1; i >= 0; i--)
    {
        word_reversed += word[i];
    }

    return word_reversed;
}

int main()
{
    string word;
    string word_reversed;

    printf("Welcome to my word reverser game!\nBy: Halle Carlson\n");
    printf("Please input a word to be reversed\n>");
    scanf_s("%s", &word);
    fseek(stdin, 0, SEEK_END);

    printf("\n\nYour word: %s", word.c_str());
    printf("\nReversed word: %s", word_reversed.c_str());

    return 0;
}
