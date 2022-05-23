// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 10/29/21:	coded ASCII art bat
// 1/13/22:		practice code for a looping competency test
// 1/17/22		practice code for string competency test
// 5/22/22		practice code for vectors, file I/O, and classes competency tests
using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>

#include "square.h"

//CLASSES
//CT - Classes Q1
/*int main()
{
	square S;
	S.setDimensions(7);
	R.perimiter();
	R.area();
	printf("side length = %f\n", S.getS());
	printf("perimiter = %f\narea = %f\n", S.perimiter(), S.area());

	return 0;
}*/

int main()
{
	//VECTORS
	//CT - Vectors Q1
	vector<int> integers;
	for (int i = 0; i < 100; i++)
	{
		integers.push_back(i);
		printf("%i\t", integers.at(i));
	}
	//CT - Vectors Q2
	vector<vector<int> > table;
	for (int a = 1; a < 6; a++)
	{
		vector<int> temp;
		for (int b = 1; b < 6; b++)
		{
			temp.push_back(a * b);
		}
		table.push_back(temp);
	}
	for (int a = 0; a < table.size(); a++)
	{
		for (int b = 0; b < table.at(a).size(); b++)
		{
			printf("%i\t", table.at(a).at(b));
		}
		printf("\n");
	}

	//FILE I/O
	//CT - File I/O Q1 //UNFINISHED
	ifstream in;
	ofstream out("outputnames.txt");
	in.open("names.txt");
	
	string temp;
	string name;
	int age;
	int height;
	int weight;
	string phone;

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

		out << name << '\t' << age << '\t' << height << '\t' << weight << '\t' << phone << '\n';
		cout << name << '\t' << age << '\t' << height << '\t' << weight << '\t' << phone << '\n';
	}

	out.close();
	in.close();

	_getch();
	return 0;
	
}


