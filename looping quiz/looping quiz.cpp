// looping quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS04-01 (looping quiz)
    File Name:      looping quiz.cpp
    Purpose:        Start with one of the quizzes from goal sheet 3 and change the code so that each question must be
                    answered correctly to move on to the next question. You can remove the scoring or keep it. When the 
                    user finishes the quiz, they should have the option to run the program again. Make sure that if the 
                    user takes the quiz again, their score (if you include scoring) resets but their name does not.

    Pseudocode:     Title
                    Player inputs name
                    Instructions
                    Variables for the program
                    Screen cleared and score reset at beginning of quiz
                    Question 1 and answer choices outputted
                    Player inputs answer and program determines if answer is correct / incorrect / invalid
                    If answer is correct, player moves on to the next question
                    Otherwise, player repeats question
                    Process repeated for questions 2 & 3
                    Screen cleared and player name and final score outputted
                    Player chooses to retake or end quiz

    Maintenance Log:
    Date: 11/15/21  Done:
                    Created project
                    Added comments
                    Added code for quiz and looping each question
                    Formatted code and comments
                    Edited code
                    Pushed to GitHub

    Date: 11/16/21  Done:
                    Updated instructions
                    Added code for looping each question
                    Added code for looping the quiz
                    Added comments for organization
                    Formatted code, comments, and output
                    Added code to clear the screen after the player reads the instructions and finishes the quiz                   
                    Tested for errors
                    Fixed errors in looping
                    Added pseudocode
                    Pushed to GitHub
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>

int main()
{
    using namespace std;

    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                         Looping Computer Programming Quiz\n");
    printf("                                             Created By: Halle Carlson\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Please enter your name:\n>");
    string name;
    cin >> name;
    fseek(stdin, 0, SEEK_END);

    //introduction and instructions
    printf("\nHi, %s!\n", name.c_str()); 
    _getch();
    printf("You will be asked 3 multiple choice questions related to computer programming.\n\n");
    _getch();
    printf("Points are scored as follows:\n");
    _getch();
    printf("\tCorrect answer: +4 points\n");
    printf("\tIncorrect answer: -1 point\n");
    printf("\tInvalid answer: no change\n\n");
    _getch();

    printf("You must answer each question correctly to move on.\n");
    printf("If your answer is incorrect / invalid, you will have to answer the question again.\n");
    printf("ALL incorrect answers count towards your score, so it is possible for your score to be negative.\n\n");
    _getch();

    printf("Good luck!\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    _getch();

    int score;
    char q1;
    string ans1;
    char q2;
    string ans2;
    char q3;
    string ans3;
    char retake;
    
    //quiz
    do
    {
        system("cls");  //previous quiz output is cleared
        score = 0;      //score is reset

        printf("------------------------------------------------------------------------------------------------------------------------");

        do //question 1
        {
            printf("\nQuestion 1:\n");
            printf("%s, what is the binary value for the decimal number 8 ?\n", name.c_str());
            printf("\ta. 000\n");
            printf("\tb. 0100\n");
            printf("\tc. 1000\n");  //correct answer
            printf("\td. 1111\n\n");

            printf(">");
            scanf_s("%c", &q1);
            fseek(stdin, 0, SEEK_END);

            switch (q1)
            {
            case 'c': case 'C':
                printf("\tcorrect\n");
                ans1 = "correct";
                score = score + 4;
                break;
            case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
                printf("\tincorrect\n");
                printf("\ttry again\n");
                ans1 = "incorrect";
                score = score - 1;
                break;
            default:
                printf("\tinvalid input\n");
                printf("\ttry again\n");
                ans1 = "incorrect";
                break;
            }

        } while (ans1 != "correct");

        printf("------------------------------------------------------------------------------------------------------------------------");

        do //question 2
        {
            printf("\nQuestion 2:\n");
            printf("%s, what data type can be used for switch branching ?\n", name.c_str());
            printf("\ta. int\n");   //correct answer
            printf("\tb. float\n");
            printf("\tc. string\n");
            printf("\td. all of the above\n\n");

            printf(">");
            scanf_s("%c", &q2);
            fseek(stdin, 0, SEEK_END);

            switch (q2)
            {
            case 'a': case 'A':
                printf("\tcorrect\n");
                ans2 = "correct";
                score = score + 4;
                break;
            case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
                printf("\tincorrect\n");
                printf("\ttry again\n");
                ans2 = "incorrect";
                score = score - 1;
                break;
            default:
                printf("\tinvalid input\n");
                printf("\ttry again\n");
                ans2 = "incorrect";
                break;
            }

        } while (ans2 != "correct");

        printf("------------------------------------------------------------------------------------------------------------------------");

        do //question 3
        { 
            printf("\nQuestion 3:\n");
            printf("%s, what does ASCII stand for\n", name.c_str());
            printf("\ta. Assembled Standard Formatting International Index\n");
            printf("\tb. Actuated Sanctioning Frame for Implicit Inboxing\n");
            printf("\tc. Arrayed Subliminal Code for Imaginative Illustrations\n");
            printf("\td. American Standard Code for Information Interchange\n\n");  //correct answer

            printf(">");
            scanf_s("%c", &q3);
            fseek(stdin, 0, SEEK_END);

            switch (q3)
            {
            case 'd': case 'D':
                printf("\tcorrect\n");
                ans3 = "correct";
                score = score + 4;
                break;
            case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
                printf("\tincorrect\n");
                printf("\ttry again\n");
                ans3 = "incorrect";
                score = score - 1;
                break;
            default:
                printf("\tinvalid input\n");
                printf("\ttry again\n");
                ans3 = "incorrect";
                break;
            }

        } while (ans3 != "correct");

        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("                                         Looping Computer Programming Quiz\n");
        printf("                                             Created By: Halle Carlson\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("Congradulations, %s, you finished the quiz!\n\n", name.c_str());
        _getch();
        printf("\tThis game\n");
        printf("\tPlayer: %s\n", name.c_str());
        printf("\tScore:  %i\n\n", score);
        _getch();

        printf("Play again ?\n"); //player chooses to either retake or end the quiz
        printf("(enter 'y' to retake the quiz || enter any other key to end the quiz)\n");
        printf(">");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);

    } while (retake == 'y');

    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("Thanks for playing!\n");
    _getch();

    return 0;
}


