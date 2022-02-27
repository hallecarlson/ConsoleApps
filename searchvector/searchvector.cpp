// searchvector.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS11-03 (search a vector)
    File Name:      searchvector.cpp
    Purpose:        Write a program that will read the data from the File I/O competency test here. You will 
                    need to create a comma or tab delimited file with the data. Then, read the data into a vector 
                    of structs. You want to search the data in the vector for any of the specific data (i.e. name, 
                    age, etc.). Make sure that you get all the data that matches. For instance, if you search for 
                    age 15, you ought to output both lines of data that have age 15 (Tom and Yuki). You can choose 
                    to output all the data in a line or let the user choose which columns (but at least the name 
                    and searched for data).

    Pseudocode:         Struct with variables for data
                        int main()
                        Variables
                        File opened
                        File not found text
                        File scanned
                        Data pushed into a vector
                        File closed
                        User inputs the type of data they're searching
                        User inputs the value they're searching
                        Vector scanned for matches
                        Data found and printed or not found and data not found message printed
                        Option to input again

    Maintenance Log:
    Date: 2/23/22       Done:
                        Created project
                        Added comments
                        Added code for project
                        Pushed to GitHub

    Date: 2/25/22       Done:
                        Added code for project
                        Got help from Mr. Miyoshi
                        Pushed to GitHub

                        Pulled from GitHub

    Date: 2/26/22       Done:
                        Got help from Ryan Carlson
                        Added code for project
                        Tested code
                        Fixed minor errors
                        Added pseudocode
                        Pushed to GitHub
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Data
{
    string name;
    int age;
    int height;
    int weight;
    string phone;
};

int main()
{
    vector<Data> data;
    bool found = false;
    char retake;

    ifstream in;
    ofstream out("vectorsearch.txt");
    in.open("searchvector.txt");

    string temp;

    if (!in.is_open())
    {
        printf("File not found...");
        _getch();
        return 0;
    }

    while (getline(in, temp, ','))
    {
        Data d;
        d.name = temp;

        getline(in, temp, ',');
        d.age = stoi(temp);

        getline(in, temp, ',');
        d.height = stoi(temp);

        getline(in, temp, ',');
        d.weight = stoi(temp);

        getline(in, temp);
        d.phone = temp;

        data.push_back(d);
        cout << d.name << '\t' << d.age << '\t' << d.height << '\t' << d.weight << '\t' << d.phone << '\n';
    }

    out.close();
    in.close();

    do
    {
        string input;
        printf("\nAre you searching a 1. name, 2. age, 3. height, 4. weight, or 5. phone number?\n>");
        cin >> input;
        fseek(stdin, 0, SEEK_END);

        if (input == "1")
        {
            string input_name;
            printf("Search a name\n>");
            getline(cin, input_name);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nNames matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].name == input_name)
                {
                    printf("%s\n", data[i].name.c_str());
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no people by that name.\n");
            }
        }

        if (input == "2")
        {
            string input_age;
            printf("Search an age\n>");
            getline(cin, input_age);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nAges matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].age == stoi(input_age))
                {
                    printf("%i\n", data[i].age);
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no people with that age.\n");
            }
        }

        if (input == "3")
        {
            string input_height;
            printf("Search a height (in inches)\n>");
            getline(cin, input_height);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nAges matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].height == stoi(input_height))
                {
                    printf("%i\n", data[i].height);
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no people with that height.\n");
            }
        }

        if (input == "4")
        {
            string input_weight;
            printf("Search a weight\n>");
            getline(cin, input_weight);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nWeights matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].age == stoi(input_weight))
                {
                    printf("%i\n", data[i].weight);
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no people with that weight.\n");
            }
        }

        if (input == "5")
        {
            string input_phone;
            printf("Search a phone number\n>");
            getline(cin, input_phone);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nPhone numbers matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].phone == input_phone)
                {
                    printf("%s\n", data[i].phone.c_str());
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no people with that phone number.\n");
            }
        }

        printf("\nSearch again? (y for yes, else for no)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');

    _getch();
    return 0;
}