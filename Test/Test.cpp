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
6/3/22		practice code for CT - File I/O
*/
using namespace std;
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <vector>

//FILE I/O
//CT - File I/O Q1
/*
void savenames(string name, int age, int height, int weight, string phone)
{
	ofstream out("names.txt");
	out << name << ',' << age << ',' << height << ',' << weight << ',' << phone << '\n';
}
*/

struct Names
{
	string name, phone;
	int age, height, weight;
};

int main()
{	
	vector<Names> names;
	bool found = false;
	char retake;

	ifstream in;
	ofstream out("namesout.txt");
	in.open("names.txt");

	string temp;

	if (!in.is_open())
	{
		printf("File not found...");
		_getch();
		return 0;
	}

	while (getline(in, temp, ','))
	{
		Names n;
		n.name = temp;

		getline(in, temp, ',');
		n.age = stoi(temp);

		getline(in, temp, ',');
		n.height = stoi(temp);

		getline(in, temp, ',');
		n.weight = stoi(temp);

		getline(in, temp);
		n.phone = temp;

		names.push_back(n);
		out << n.name << ',' << n.age << ',' << n.height << ',' << n.weight << ',' << n.phone << '\n';
		cout << n.name << '\t' << n.age << '\t' << n.height << '\t' << n.weight << '\t' << n.phone << '\n';
	}

	out.close();
	in.close();

	/*
	char choice = 'n';
	Names info;
	info.name = temp;
	do
	{		
		printf("\nPlease input a name\n>");
		cin >> n.name;
		fseek(stdin, 0, SEEK_END);		
		printf("\nPlease input an age\n>");
		scanf_s("%i", &n.age);
		fseek(stdin, 0, SEEK_END);		
		printf("\nPlease input a height\n>");
		scanf_s("%i", &n.heignt);
		fseek(stdin, 0, SEEK_END);
		printf("\nPlease input a weight\n>");
		scanf_s("%i", &n.weight);
		fseek(stdin, 0, SEEK_END);
		printf("\nPlease input a phone number\n>");
		cin >> n.phone;
		fseek(stdin, 0, SEEK_END);

		names.push_back(info);
		//savenames(name, age, height, weight, phone);

		printf("\nEnter more data?\n>");
		scanf_s("%c", &choice);
		fseek(stdin, 0, SEEK_END);
	} while (choice == 'y')
	*/

	/*
	char names;

	ofstream outfile;
	outfile.open("names.txt");

	cout << "Writing to file" << endl;
	cout << "Input name\n>";
	cin.getline(names, name);

	outfile << names << endl;

	outfile.close();

	ifstream infile;
	infile.open("names.txt");

	infile >> names;
	cout << names << endl;

	infile.close();

	void open(const char* filename, ios::openmode mode);
	fstream afile;
	afile.open("names.txt", ios::out || ios::in);

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
	*/

	_getch();
	return 0;
}


