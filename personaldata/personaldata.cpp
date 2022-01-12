/*
    Author:         Halle Carlson
    Project Name:   Problem GS07-02
    File Name:      personaldata.cpp
    Purpose:        Write a program that gets personal data from the user. The personal data will 
                    be held in a struct that has first name, middle name, last name (all three strings), 
                    age, and phone number (also a string). You may add more data to your struct. Get the 
                    data from the user, then output the data to the user who will make sure it is correct.
                    If not correct, the user should input the data again. If the data is correct, you can
                    tell the user the data will be handled with the utmost care. As an extension, send the
                    data in a struct from a function to the calling function (main()).

    Pseudocode:         


    Notes:

    Maintenance Log:
    Date: 1/11/22       Done:
                        Created Project
                        Added code for struct, intro, player input, confirmation, and outro
                        Tested code
                        Found errors E0349 and C2679
                        Failed to fix errors
                        Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

struct Data
{
    string first, middle, last, phone;
    int age;
};

int main()
{
    Data first, middle, last, phone, age;
    char retake = 'n';

    printf("This program will store your personal data for totally legit purposes!\n");
    
    do
    {
        printf("\nPlease input your first name\n");
        printf(">");
        cin >> first;
        //scanf_s("%s", &phone);
        fseek(stdin, 0, SEEK_END);

        printf("%s... is this correct?\t(y for yes || else for no)\n", first);
        printf(">");
        scanf_s("%i", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'y');

    do
    {
        printf("\nPlease input your middle name\n");
        printf(">");
        cin >> middle;
        //scanf_s("%s", &phone);
        fseek(stdin, 0, SEEK_END);

        printf("%s... is this correct?\t(y for yes || else for no)\n", middle);
        printf(">");
        scanf_s("%i", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'y');

    do
    {
        printf("\nPlease input your last name\n");
        printf(">");
        cin >> last;
        //scanf_s("%s", &phone);
        fseek(stdin, 0, SEEK_END);

        printf("%s... is this correct?\t(y for yes || else for no)\n", last);
        printf(">");
        scanf_s("%i", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'y');

    do
    {
        printf("\nPlease input your age\n");
        printf(">");
        scanf_s("%i", &age);
        fseek(stdin, 0, SEEK_END);

        printf("%i... is this correct?\t(y for yes || else for no)\n", age);
        printf(">");
        scanf_s("%i", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'y');

    do
    {
        printf("\nPlease input your phone number\n");
        printf(">");
        cin >> phone;
        //scanf_s("%s", &phone);
        fseek(stdin, 0, SEEK_END);

        printf("%s... is this correct?\t(y for yes || else for no)\n", phone);
        printf(">");
        scanf_s("%i", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'y');

    printf("Your data:\n");
    printf("\tFirst name: %s\n\tMiddle name: %s\n\tLast name: %s\n\tAge: %i\n\tPhone number: %s\n", first, middle, last, age, phone);
    printf("\nYour data is totally in good hands ;)");
    _getch();

    return 0;
}