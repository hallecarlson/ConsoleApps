/* Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
 
CT File I/O steps
a.
- open a new file for writing (names.txt)
- loop to get data from user - use appropriate data types
- end loop by asking if user is done entering data
- tell what type of delimiting i'm using (can be a comment on the test paper)
- output data accordingly ^^^
b.
- write what data would look like in file (with \n or ,, no extra spaces)
c.
- write code to get data from file and output to screen
- use loop that doesn't assume there are only 6 pieces of data

10/29/21:	coded ASCII art bat
1/13/22:	practice code for a looping competency test
1/17/22		practice code for string competency test
5/22/22		practice code for vectors, file I/O, and classes competency tests
5/30/22		wrote some practice code for file I/O competency test (can't run program on this laptop for some reason??)
5/31/22		listed steps to CT - File I/O
*/
using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>

//FILE I/O
//CT - File I/O Q1
void savenames(string name, int age, int height, int weight, string phone)
{
	ofstream out("names.txt");
	out << name << ',' << age << ',' << height << ',' << weight << ',' << phone << '\n';
}

int main()
{	
	string name;
	int age;
	int height;
	int weight;
	string phone;
	string temp;

	char choice = 'n';
	do
	{
		printf("\nPlease input a name\n>");
		cin >> name;
		fseek(stdin, 0, SEEK_END);		
		printf("\nPlease input an age\n>");
		scanf_s("%i", &age);
		fseek(stdin, 0, SEEK_END);		
		printf("\nPlease input a height\n>");
		scanf_s("%i", &age);
		fseek(stdin, 0, SEEK_END);
		printf("\nPlease input a weight\n>");
		scanf_s("%i", &age);
		fseek(stdin, 0, SEEK_END);
		printf("\nPlease input a phone number\n>");
		cin >> name;
		fseek(stdin, 0, SEEK_END);

		savenames(name, age, height, weight, phone);

		printf("\nEnter more data?\n>");
		scanf_s("%c", &choice);
		fseek(stdin, 0, SEEK_END);
	} while (choice == 'y');


	ifstream in;
	ofstream out("outputnames.txt");
	in.open("names.txt");

	if (!in.is_open())
	{
		printf("File not found...");
		_getch();
		return 0;
	}

	while (getline(in, temp, ','))
	{
		name = temp;
		getline(in, temp, ',');
		age = stoi(temp);
		getline(in, temp, ',');
		height = stoi(temp);
		getline(in, temp, ',');
		weight = stoi(temp);
		getline(in, temp, ',');
		phone = temp;

		out << name << ',' << age << ',' << height << ',' << weight << ',' << phone << '\n';
		cout << name << ',' << age << ',' << height << ',' << weight << ',' << phone << '\n';
	}

	out.close();
	in.close();

	_getch();
	return 0;
}


