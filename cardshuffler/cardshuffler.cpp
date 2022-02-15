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

                        Pulled from GitHub
                        Added code for project
                        Pushed to GitHub

    Date: 2/14/22       Done:
                        Got help from Mr. Miyoshi
                        Added code for project
                        Fixed some errors adn made some minor adjustments
                        Pushed to GitHub

                        Pulled from GitHub
                        Got help from Ryan Carlson
                        Finished program 
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
    srand((unsigned)time(NULL));

    vector<Card> deck;
    vector<Card> shuffledeck;
    Card card;

    for (Suits s = clubs; s <= spades; s = Suits(s + 1)) //suit loop
    {
        for (Designation d = ace; d <= king; d = Designation(d + 1)) //designation loop
        {
            Card c;
            c.suit = s;
            c.designation = d;
            if (d == ace)
            {
                card.description = "Ace";
            }
            else if (d == two)
            {
                card.description = "Two";
            }
            else if (d == three)
            {
                card.description = "Three";
            }
            else if (d == four)
            {
                card.description = "Four";
            }
            else if (d == five)
            {
                card.description = "Five";
            }
            else if (d == six)
            {
                card.description = "Six";
            }
            else if (d == seven)
            {
                card.description = "Seven";
            }
            else if (d == eight)
            {
                card.description = "Eight";
            }
            else if (d == nine)
            {
                card.description = "Nine";
            }
            else if (d == ten)
            {
                card.description = "Ten";
            }
            else if (d == jack)
            {
                card.description = "Jack";
            }
            else if (d == queen)
            {
                card.description = "Queen";
            }
            else if (d == king)
            {
                card.description = "King";
            }

            if (s == clubs)
            {
                card.description += " of Clubs";
            }
            else if (s == diamonds)
            {
                card.description += " of Diamonds";
            }
            else if (s == hearts)
            {
                card.description += " of Hearts";
            }
            else if (s == spades)
            {
                card.description += " of Spades";
            }

            deck.push_back(card);
        }
    }

    for (int i = 0; i < deck.size(); i++)
    {
        printf("%s\n", deck[i].description.c_str());
    }

    while (deck.size() > 0) //shuffler
    {
        int index = rand() % deck.size();
        shuffledeck.push_back(deck[index]);
        deck.erase(deck.begin() + index);
    }

    printf("\nShuffled\n\n");

    for (int i = 0; i < shuffledeck.size(); i++)
    {
        printf("%s\n", shuffledeck[i].description.c_str());
    }

    printf("\n");

    vector<vector<Card>> hands;
    int x;
    int y;
    int index = 0;
    for (x = 0; x < 4; x = x + 1) //suit loop
    {
        vector<Card> hand;
        for (y = 0; y < 13; y = y + 1) //designation loop
        {
            hand.push_back(shuffledeck[index]);
            index = index + 1;
        }
        hands.push_back(hand);
    }
    printf("Hands\n");
    for (x = 0; x < 4; x = x + 1) //suit loop
    {
        printf("Hand %i\n", x + 1);
        for (y = 0; y < 13; y = y + 1) //designation loop
        {
            printf("%s\n", hands[x][y].description.c_str());
        }
    }

    return 0;
}