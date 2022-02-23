// charactersfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS11-02 (delimited files)
    File Name:      delimitedfiles.cpp
    Purpose:        Create a comma-delimited file with an int, a float, a character array (no spaces), 
                    and a character (in that order) on each of 10 rows. Write a program to get in the data 
                    and then output it into a tab-delimited file.

    Pseudocode:     

    Maintenance Log:
    Date: 2/22/22       Done:
                        Created project
                        Added code for project
                        Pushed to GitHub

                        Pulled from GitHub
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
    in.open("delimitedfiles.txt");
    string temp;
    string name;
    int i;
    float f;
    char c;


    if (!in.is_open())
    {
        printf("File not found...");
        _getch();
        return 0;
    }

    while (getline(in, name, ','))
    { 
        getline(in, temp);
        i = temp.at(0);
        getline(in, temp);
        f = temp.at(0);
        getline(in, temp, ',');
        c = temp.at(0);
        
        out << name << '\t' << c << '\t' << '\n' << f << '\n';
        cout << name << '\t' << c << '\t' << i << '\n' << f << '\n';
    }

    out.close();
    in.close();

    _getch();
    return 0;
}