// periodictable.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Author:         Halle Carlson
    Project Name:   Problem GS11-05 (periodic table)
    File Name:      periodictable.cpp
    Purpose:        Your task is to: Write a program that will read in the elements of the periodic table 
                    from a file called chem.dat (this file is given). The file holds the element symbol, 
                    element name, atomic number, and atomic weight all separated by commas (no spaces in 
                    the delimiting). The data for each element is on a single line. Create a structure to 
                    hold the data for each element. The longest symbol is 3 characters and there are a few 
                    names with spaces. Other than that all the data is only separated by commas, and each set 
                    of data is on its own line. Create a vector of structures to hold the data after being 
                    read from the file. Then create functions that will search for an element based on the 
                    symbol, name, or atomic number.

    Pseudocode:         

    Maintenance Log:
    Date: 2/27/22       Done:
                        Created project
                        Created text file
                        Added code for project
                        Pushed to GitHub

    Date: 2/28/22       Done:
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
    string symbol;
    string name;
    int number;
};

bool Search(string input_symbol, string input_name, int input_number, Data d)
{
    bool found = false;
    if (input_symbol == d.symbol)
    {
        found = true;
    }
    if (input_name == d.name)
    {
        found = true;
    }
    if (input_number == d.number)
    {
        found = true;
    }
    
    return found;
}

int main()
{
    vector<Data> data;
    bool found = false;
    char retake;

    ifstream in;
    ofstream out("table.txt");
    in.open("periodictable.txt");

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
        d.symbol = temp;

        getline(in, temp);
        d.name = temp;

        getline(in, temp, ',');
        d.number = stoi(temp);

        data.push_back(d);
        cout << d.symbol << '\t' << d.name << '\t' << d.number << '\n  ';
    }

    out.close();
    in.close();

    do
    {
        string input;
        printf("\nAre you searching a 1. chemical symbol 2. element name 3. atomic number?\n>");
        cin >> input;
        fseek(stdin, 0, SEEK_END);

        if (input == "1")
        {
            string input_symbol;
            printf("Search a chemical symbol\n>");
            getline(cin, input_symbol);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nSymbols matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                bool f = Search(input_symbol, d.symbol);
                if (f = true)
                {
                    printf("%s\n", data[i].symbol.c_str());
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no elements with that chemical symbol.\n");
            }
        }

        if (input == "2")
        {
            string input_name;
            printf("Search an element name\n>");
            getline(cin, input_name);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nElements matching your search:\n");
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
                printf("There are no elements by that name.\n");
            }
        }

        if (input == "3")
        {
            string input_number;
            printf("Search an atomic number\n>");
            getline(cin, input_number);
            fseek(stdin, 0, SEEK_END);
            found = false;
            printf("\nAtomic numbers matching your search:\n");
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i].number == stoi(input_number))
                {
                    printf("%i\n", data[i].number);
                    found = true;
                }
            }
            if (!found)
            {
                printf("There are no elements with that atomic number.\n");
            }
        }

        printf("\nSearch again? (y for yes, else for no)\n>");
        scanf_s("%c", &retake);
        fseek(stdin, 0, SEEK_END);
    } while (retake == 'y');

    _getch();
    return 0;
}

/*
H,Hydrogen,1,1.00794
He,Helium,2,4.00260
Li,Lithium,3,6.941
Be,Beryllium,4,9.0122
B,Boron,5,10.811
C,Carbon,6,12.011
N,Nitrogen,7,14.0067
O,Oxygen,8,15.9994
F,Fluorine,9,18.9984
Ne,Neon,10,20.179
Na,Sodium,11,22.9898
Mg,Magnesium,12,24.305
Al,Aluminum,13,26.9815
Si,Silicon,14,28.0855
P,Phosphorus,15,30.9738
S,Sulfur,16,32.066
Cl,Chlorine,17,35.453
Ar,Argon,18,39.948
K,Potassium,19,39.0983
Ca,Calcium,20,40.078
Sc,Scandium,21,44.9559
Ti,Titanium,22,47.88
V,Vanadium,23,50.9415
Cr,Chromium,24,51.9661
Mn,Manganese,25,54.9380
Fe,Iron,26,55.847
Co,Cobalt,27,58.9332
Ni,Nickel,28,58.69
Cu,Copper,29,63.546
Zn,Zinc,30,65.39
Ga,Gallium,31,69.723
Ge,Germanium,32,72.59
As,Arsenic,33,74.9216
Se,Selenium,34,78.96
Br,Bromine,35,79.904
Kr,Krypton,36,83.8
Rb,Rubidium,37,85.4678
Sr,Strontium,38,87.62
Y,Yttrium,39,88.9059
Zr,Zirconium,40,91.224
Nb,Niobium,41,92.9064
Mo,Molybdenum,42,95.94
Tc,Technetium,43,97.9072
Ru,Ruthenium,44,101.07
Rh,Rhodium,45,102.9055
Pd,Palladium,46,106.42
Ag,Silver,47,107.8682
Cd,Cadmium,48,112.41
In,Indium,49,114.82
Sn,Tin,50,118.710
Sb,Antimony,51,121.75
Te,Tellurium,52,127.6
I,Iodine,53,126.9045
Xe,Xenon,54,131.29
Cs,Cesium,55,132.9054
Ba,Barium,56,137.33
La,Lanthanum,57,138.9055
Ce,Cerium,58,140.12
Pr,Praseodymium,59,140.9077
Nd,Neodymium,60,144.24
Pm,Promethium,61,144.9128
Sm,Samarium,62,150.36
Eu,Europium,63,151.96
Gd,Gadolinium,64,157.25
Tb,Terbium,65,158.9254
Dy,Dysprosium,66,162.50
Ho,Holmium,67,164.9304
Er,Erbium,68,167.26
Tm,Thulium,69,168.9342
Yb,Ytterbium,70,173.04
Lu,Lutetium,71,174.967
Hf,Hafnium,72,178.49
Ta,Tantalum,73,180.9479
W,Tungsten,74,183.85
Re,Rhenium,75,186.207
Os,Osmium,76,190.2
Ir,Iridium,77,192.22
Pt,Platinum,78,195.08
Au,Gold,79,196.9665
Hg,Mercury,80,200.59
Tl,Thallium,81,204.383
Pb,Lead,82,207.2
Bi,Bismuth,83,208.9804
Po,Polonium,84,208.9824
At,Astatine,85,209.9871
Rn,Radon,86,222.0176
Fr,Francium,87,223.0197
Ra,Radium,88,226.0254
Ac,Actinium,89,227.0278
Th,Thorium,90,232.0381
Pa,Protactinium,91,231.0359
U,Uranium,92,238.0289
Np,Neptunium,93,237.0482
Pu,Plutonium,94,244.0642
Am,Americium,95,243.0614
Cm,Curium,96,247.0703
Bk,Berkelium,97,247.0703
Cf,Californium,98,251.0796
Es,Einsteinium,99,252.0828
Fm,Fermium,100,257.0951
Md,Mendelevium,101,258.0986
No,Nobelium,102,259.1009
Lr,Lawrencium,103,260.1054
Rf,Ruthefordium,104,261
Db,Dubnium,105,262
Sg,Seaborgium,106,263
Bh,Bohrium,107,262
Hs,Hassium,108,265
Mt,Meitnerium,109,266
Uun,Ununnilium *,110,273
Uuu,Unununium *,111,272
Uub,Ununbium *,112,277
*/