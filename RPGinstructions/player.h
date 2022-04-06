#pragma once
#include <string>
#include <vector>
using namespace std;

struct Player
{
    string user;
    int chara;

    int hp, hpmin, hpmax, hphealed;
    int dp, dpmin, dpmax; 
    int roll; 
    int lunchbox, potions;  
    int item_weapon, item_misc;
    int score;

    vector<bool> encountered_e;
    vector<bool> encountered_m;

};