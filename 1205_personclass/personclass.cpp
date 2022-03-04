// personclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS12-05 (person class)
    File Name:      personclass.cpp
    Purpose:        Write a person class. This class must contain a person’s first, middle, and last 
                    names as well as the person’s age and phone number. Make methods to change and get 
                    data. Then create a program that uses the class. As an extension, use a text file 
                    to store the data. Make sure that you can retrieve and modify the data from the file.

    Pseudocode:         person.h
                        Headers
                        Person and their elements declared
                        Method to set characteristics of me
                        Method to reset characteristics of person via user input
                        Variables
                        Characteristics

                        person.cpp
                        Header
                        Characteristics set to "a" and 0
                        fn, mn, ln, a, and p set to firstname, middlename, lastname, age, and phonenumber
                        characteristics set to A's characteristics
                        Set again
                        Reset via user input
                        Characteristics returned

                        personclass.cpp
                        Headers
                        Person P declared
                        Characteristics set to values of me
                        Values printed
                        Do-while loop to reset characteristics as many times as player wants

    Maintenance Log:
    Date: 3/4/22        Done:
                        Created project
                        Added code to project
                        Pushed to GitHub
*/
#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "person.h"
using namespace std;

int main()
{
    char retake;
    person P;
    P.setCharacteristics("Halle", "Rose", "Carlson", 18, "425.213.7928");
    printf("first name = %s\nmiddle name = %s\nlast name\nage = %i\nphone number = %s\n", P.getFN().c_str(), P.getMN().c_str(), P.getMN().c_str(), P.getA(), P.getP().c_str());

    do
    {
        string i_fn;
        printf("\nChange the first name\n");
        getline(cin, i_fn);
        fseek(stdin, 0, SEEK_END);
        P.setFN(i_fn);

        string i_mn;
        printf("\nChange the middle name\n");
        getline(cin, i_mn);
        fseek(stdin, 0, SEEK_END);
        P.setMN(i_mn);

        string i_ln;
        printf("\nChange the last name\n");
        getline(cin, i_ln);
        fseek(stdin, 0, SEEK_END);
        P.setLN(i_ln);

        int i_a;
        printf("\nChange the age\n");
        scanf_s("%i", &i_a);
        fseek(stdin, 0, SEEK_END);
        P.setA(i_a);

        string i_p;
        printf("\nChange the phone number\n");
        getline(cin, i_p);
        fseek(stdin, 0, SEEK_END);
        P.setP(i_p);

        P.setCharacteristics(i_fn, i_mn, i_ln, i_a, i_p);
        printf("\nfirst name = %s\nmiddle name = %s\nlast name = %s\nage = %i\nphone number = %s\n", P.getFN().c_str(), P.getMN().c_str(), P.getLN().c_str(), P.getA(), P.getP().c_str());
        
        printf("\nDo you want to change the values again (y for yes, n for no)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');
}