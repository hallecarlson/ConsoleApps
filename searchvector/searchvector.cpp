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

    Pseudocode:

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

bool searching(Data d)

int main()
{
    vector<Data> data;

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

    printf("Search a name, age, height, weight, or phone number.\n>");

    _getch();
    return 0;
}
/*
    Loretta,18,66,130,425.844.1231
    Mike,16,68,145,425.844.1232
    Charles,17,72,160,425.844.1233
    Gracie,15,74,205,425.844.1234
    Anna,19,73,170,425.844.1235
    George,15,62,115,425.844.1236
    */