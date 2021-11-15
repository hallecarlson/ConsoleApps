// looping quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-01 (looping quiz)
    File Name:      looping quiz.cpp
    Purpose:        Start with one of the quizzes from goal sheet 3 and change the code so that each question must be
                    answered correctly to move on to the next question. You can remove the scoring or keep it. When the 
                    user finishes the quiz, they should have the option to run the program again. Make sure that if the 
                    user takes the quiz again, their score (if you include scoring) resets but their name does not.

    Pseudocode:

    Maintenance Log:
    Date: 11/15/21  Done:
                    Created project
                    Added comments
                    Added code for quiz and looping each question
                    Formatted code and comments
                    Edited code
                    Pushed to GitHub

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                         Looping Computer Programming Quiz\n");
    printf("                                             Created By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Please enter your name:\n>");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    char retake;

    //instructions need to be tweaked for code changes and project conditions
    printf("\nHi, %s!\n", name.c_str());
    _getch();
    printf("You will be asked 3 multiple choice questions related to computer programming.\n");
    _getch();
    printf("Points are scored as follows:\n"); //do I want to change this?
    _getch();
    printf("\tCorrect answer: +1 point\n");
    printf("\tIncorrect answer: -0.25 point\n");
    printf("\tUnlisted answer: no change\n\n");
    _getch();
    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int score;
    score = 0;

    
    do //question 1
    {
        printf("Question 1:\n");
        printf("%s, what is the binary value for the decimal number 8 ?\n", name.c_str());
        printf("\ta. 000\n");
        printf("\tb. 0100\n");
        printf("\tc. 1000\n");  //correct answer
        printf("\td. 1111\n\n");

        printf("\tAnswer:");
        char q1;
        scanf_s("%c", &q1);
        fseek(stdin, 0, SEEK_END);

        switch (q1)
        {
        case 'c': case 'C':
            printf("\tcorrect\n");
            score = score + 4;  //score is first calculated as an int, and then typecasted as a float and divided by 4.0 at the end of the quiz
            break;
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            printf("\tincorrect\n");
            printf("\ttry again\n");
            score = score - 1;
            break;
        default:
            printf("\tinvalid input\n");  
            printf("\ttry again\n");
            break;
        }

    } while (q1 != 'c' || q1 != 'C');

    do
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("Question 2:\n");
        printf("%s, what data type can be used for switch branching ?\n", name.c_str());
        printf("\ta. int\n");   //correct answer
        printf("\tb. float\n");
        printf("\tc. string\n");
        printf("\td. all of the above\n\n");

        printf("\tAnswer:");
        char q2;
        scanf_s("%c", &q2);
        fseek(stdin, 0, SEEK_END);

        switch (q2)
        {
        case 'a': case 'A':
            printf("\tcorrect\n");
            score = score + 4;
            break;
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            printf("\tincorrect\n");
            printf("\ttry again\n");
            score = score - 1;            
            break;
        default:
            printf("\tinvalid input\n");
            printf("\ttry again\n");
            break;
        }

    } while (q2 != 'a' || q2 != 'A');

    do
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("Question 3:\n");
        printf("%s, what does ASCII stand for\n", name.c_str());
        printf("\ta. Assembled Standard Formatting International Index\n");
        printf("\tb. Actuated Sanctioning Frame for Implicit Inboxing\n");
        printf("\tc. Arrayed Subliminal Code for Imaginative Illustrations\n");
        printf("\td. American Standard Code for Information Interchange\n\n");  //correct answer

        printf("\tAnswer:");
        char q3;
        scanf_s("%c", &q3);
        fseek(stdin, 0, SEEK_END);

        switch (q3)
        {
        case 'd': case 'D':
            printf("\tcorrect\n");
            score = score + 4;
            break;
        case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
            printf("\tincorrect\n");
            printf("\ttry again\n");
            score = score - 1;
            break;
        default:
            printf("\tinvalid input\n");
            printf("\ttry again\n");
            break;
        }

    } while (q3 != 'd' || q3 != 'D');


    //add scoring and looping at end of quiz
    return 0;
}


