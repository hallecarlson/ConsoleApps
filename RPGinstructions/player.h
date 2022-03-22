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
    int lunchbox;
};