// Computer Programming Quiz Using Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS03-03 (Computer Programming Quiz using switch)
    File Name:      Computer Programming Quiz Using Switch.cpp
    Purpose:        Write a program that gives a student a multiple choice computer programming quiz. The program should use switch 
                    to determine whether the player's answers are correct or not, and add 1 point for correct answers, subtract 0.25 point 
                    for incorrect answers, and neither add nor subtract points for answers that are not listed.

    Pseudocode:     The program prompts the player to input their name. Then, instructions are given to explain how the quiz works.
                    The questions and multiple choice answers are outputted to the screen and the player is prompted to input either
                    a, b, c, or d. The program outputs a message telling the player whether their answer was correct or incorrect, 
                    determined through switch, and then proceeds to the next question. Once the player has answered all 3 questions, 
                    the program outputs their name and score.

    Maintenance Log:
    Date: 11/1/21   Done:
                    Created project
                    Added code for player name input
                    Added code for introduction'
                    Added code for questions
                    Added comments
                    Pushed GitHub
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
    printf("Computer Programming Quiz\nCreated By: Halle Carlson\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Please enter your name:\n\tPlayer:");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    printf("\nHi, %s!\n", name.c_str());
    _getch();
    printf("You will be asked 3 multiple choice questions related to computer programming.\n");
    _getch();
    printf("Points are scored as follows:\n");
    _getch();
    printf("\tCorrect answer: +1 point\n");
    printf("\tIncorrect answer: -0.25 point\n");
    printf("\tUnlisted answer: no change\n\n");
    _getch();
    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int score;
    score = 0;  //REMEMBER TO TURN INTO FLOAT AT END AND DIVIDE BY 4

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
            score = score + 4;
            break;
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            printf("\tincorrect\n");
            score = score - 1;
            printf("\tcorrect answer: c\n");
            break;
        default:
            printf("\tinvalid input\n");
            printf("\tcorrect answer: c\n");
            break;
    }

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Question 2:\n");
    printf("%s, \n", name.c_str());
    printf("\ta. \n");
    printf("\tb.\n");
    printf("\tc.\n");
    printf("\td.\n\n"); 

    printf("\tAnswer:");
    char q2;
    scanf_s("%c", &q2);
    fseek(stdin, 0, SEEK_END);

    switch (q2)
    {
    case '': case '':
        printf("\tcorrect\n");
        score = score + 4;
        break;
    case '': case '': case '': case '': case '': case '':
        printf("\tincorrect\n");
        score = score - 1;
        printf("\tcorrect answer: \n");
        break;
    default:
        printf("\tinvalid input\n");
        printf("\tcorrect answer: \n");
        break;
    }

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Question 3:\n");
    printf("%s, \n", name.c_str());
    printf("\ta.\n");
    printf("\tb.\n");    
    printf("\tc.\n");
    printf("\td.\n\n");

    printf("\tAnswer:");
    char q3;
    scanf_s("%c", &q3);
    fseek(stdin, 0, SEEK_END);

    switch (q3)
    {
    case '': case '':
        printf("\tcorrect\n");
        score = score + 4;
        break;
    case '': case '': case '': case '': case '': case '':
        printf("\tincorrect\n");
        score = score - 1;
        printf("\tcorrect answer: \n");
        break;
    default:
        printf("\tinvalid input\n");
        printf("\tcorrect answer: \n");
        break;
    }

    char final_score;
    final_score = (float)score / 4;
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Congradulations, %s, you finished the quiz!\n\n", name.c_str());
    _getch();
    printf("\tThis game\n");
    printf("\tPlayer: %s\n", name.c_str());
    printf("\tScore:  %f\n\n", final_score);

    printf("Thanks for playing!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    return 0;
}

