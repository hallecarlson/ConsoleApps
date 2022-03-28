#pragma once
#include <string>
using namespace std;

struct Player
{
    string name;
    int chara;

    int hp, hpmin, hpmax, hphealed;
    int dp, dpmin, dpmax;
    int roll;
    int lunchbox, potions;
    int item_weapon, item_misc;

    vector<bool> encountered_e;
    vector<bool> encountered_m;

};