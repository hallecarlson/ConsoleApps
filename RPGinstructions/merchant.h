#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include "player.h"
using namespace std;

class Merchant
{
public:
	Merchant();
	Merchant(string n, int hp, int d);
	Merchant(Merchant& M);
	void setStats(string name, int hitpoints, int damagepoints);
	void setName(string name);
	void setHitpoints(int hitpoints);
	void setDamagepoints(int damagepoints);
	string getN();
	int getHP();
	int getDP();
	void healPlayer(Player& p);
	void interaction(Player& p);

private:
	string n;
	int hp;
	int dp;
};
