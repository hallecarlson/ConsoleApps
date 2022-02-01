// morefortunes.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Problem:        Write a program or modify problem GS6-3 to have 20 different fortunes stored in a 
                    vector of strings. Output a fortune based on a random number which will be the index 
                    of the vector. Continue giving random fortunes until the user chooses to exit.
    Project name:   Problem GS10-02 (multiply vector values by scalar)
    File name:      more fortunes.cpp

    Pseudocode:         int main()
                        vector of string fortunes
                        variable for rerolling fortune
                        user recieves fortune
                        user chooses to reroll fortune or not

    Maintenance Log:
    Date: 2/1/22        Done:
                        Created project
                        Added code for program
                        Got help from Mr. Miyoshi
                        Fixed errors
                        Tested code
                        Added pseudocode
                        Pushed to GitHub

                        
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    vector<string> fortunes = { "1. You will dream about unicorns tonight",
                                "2. You will be hired to the next job you apply to",
                                "3. You will go see your favorite band in concert",
                                "4. You will get good grades in all of your classes this semester",
                                "5. You will have your favorite food for dinner tomorrow",
                                "6. You will receive a present in the mail",
                                "7. You will go on a lovely walk",
                                "8. You will go to a very interesting magician show",
                                "9. You will see a very funny commercial on TV tonight",
                                "10. You will complete your favorite video game next week",
                                "11. You will make a new friend",
                                "12.You will find buried teasure",
                                "13. You will not have cavities next time you go to the dentist",
                                "14. You will go on a safari and see beautiful animals",
                                "15. You will ace your math test",
                                "16. You will not get homework today",
                                "17. You will have a surprise party",
                                "18. You will win a competition",
                                "19. You will finish your next goal sheet very soon",
                                "20. You will understand vectors", };

    char retake;
    do
    {
        printf("Your fortune:\n");
        int i = rand() % fortunes.size();
        printf("%s", fortunes[i].c_str());

        printf("\nGet another fortune? (n for no)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake != 'n' && retake != 'N');

    return 0;
}