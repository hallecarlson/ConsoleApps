// cardshuffler.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Use the playing card program from goal sheet 7 as a starting point. Create and place 52 cards into a deck 
                    (vector). So you will have a vector of playing cards numbered from 0-51 (which is why having the values 
                    go from 0-51 was suggested in the goal sheet 7 problem). You will need to create a function that shuffles 
                    the cards. That function will give you a random number between 0 and 51 (inclusive), which will be used as 
                    the index for a card in the vector to be switched with the last card in the deck. Then, you exclude the last 
                    card in the deck (essentially making the unshuffled deck smaller each iteration) and do the same process 
                    until you have swapped all the cards. This is a well-known shuffling algorithm (which I forget the name of right now).

                    Once you have created the shuffling function, you will deal the deck into four hands. These hands will be held in 
                    a two-dimensional vector (also called an array). The first dimension will be the number of hands (4) and the second 
                    dimension will be the number of cards each hand holds (13). Make sure to deal the cards into the hands one card at a 
                    time from the deck. When you are finished dealing the cards, output each hand to the screen. Your deck may be full 
                    or empty when you are finished, but make sure that you output the deck in the shuffled order as well as outputting 
                    each hand. Label your output appropriately.
    Project name:   Problem GS10-05 (card shuffler and dealer)
    File name:      cardshuffler.cpp

    Pseudocode:         

    Maintenance Log:
    Date: 2/9/22        Done:
                        Created project
                        Added code for project
                        Got help from Mr. Miyoshi
                        Pushed to GitHub


    Date: 2/10/22       Done:
                        Pulled from GitHub
                        Got help from Ryan Carlson

    Date: 2/11/22       Done:
                        Pushed to GitHub

                        Pulled from GitHub
                        Added code for project
                        Got help from Mr. Miyoshi
                        Pushed to GitHub
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

enum Suits { clubs, diamonds, hearts, spades };
enum Designation { ace = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

struct Card
{
    Suits suit;
    Designation designation;
    string description;
};

int main()
{
    Card card;
    
    //example
    card.suit = clubs;
    card.designation = ace;
    card.description = "Ace of Clubs";

    vector<Card> deck;

    for (Suits s = clubs; s <= spades; s = Suits(s + 1))
    {
        for (Designation d = ace; d <= king; d = Designation(d + 1))
        {
            Card c;
            c.suit = s;
            c.designation = d;
            if (d == ace)
            {
                card.description = "Ace";
            }
            else if (d = two)
            {
                card.description = "Two";
            }
            else if (d = three)
            {
                card.description = "Three";
            }
            else if (d = four)
            {
                card.description = "Four";
            }
            else if (d = five)
            {
                card.description = "Five";
            }
            else if (d = six)
            {
                card.description = "Six";
            }
            else if (d = seven)
            {
                card.description = "Seven";
            }
            else if (d = eight)
            {
                card.description = "Eight";
            }
            else if (d = nine)
            {
                card.description = "Nine";
            }
            else if (d = ten)
            {
                card.description = "Ten";
            }
            else if (d = jack)
            {
                card.description = "Jack";
            }
            else if (d = queen)
            {
                card.description = "Queen";
            }
            else if (d = king)
            {
                card.description = "King";
            }
        }
    }



    /*for (int i = 51; i >= 0; i--)
    {
        deck.push_back(i);

        if (i >= 0 && i <= 12)
        {
            card.suit = clubs;
        }
        else if (i >= 13 && i <= 25)
        {
            card.suit = diamonds;
        }
        else if (i >= 26 && i <= 38)
        {
            card.suit = hearts;
        }
        else if (i >= 39 && i <= 51)
        {
            card.suit = spades;
        }
    }*/

   
    /*
    define all elements of array as different cards

    to create the vector:

    for loop of 52 iterations:
    if between 1 and 13, suit type 1
    13-26ish, suit type 2
    26ish-39? suit type 3
    39-52 suit type 4


    for loop to go through vector, random number generated that swaps with vector[i] and reduces loop
    
    hand out cards by using random numbers
    */



/*int shuffler(vector<int> cards, int rn)
{
    for (int s = 52; s >= 1; s--)
    {
        int rn = 1 + rand() % (cards.size());
        
    }

    return;
}

int main()
{
    srand((unsigned)time(NULL));
    vector<int> cards;
    int rn;

    for (int c = 1; c <= 52; c++)
    {
        cards.push_back(c);
        printf("%i\t", cards[c - 1]);
        //Sleep(50);
    }*/

    return 0;
}