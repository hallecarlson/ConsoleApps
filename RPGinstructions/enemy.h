#pragma once
#include <string>
using namespace std;

class Enemy
{
public:
    Enemy Enemy(); 
    Enemy Enemy(int t, int r);
    int setType(); 
    int setRoll();
    int getType();
    int getRoll();
    
private:
    string name;

    int hp;
    int dp;
    int roll;
    int enemy_type;

};

