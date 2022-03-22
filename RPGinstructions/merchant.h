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
	Merchant(string n, int hp);
	Merchant(Merchant& M);
	void setStats(string name, int hitpoints);
	void setName(string name);
	void setHitpoints(int hitpoints);
	string getN();
	int getHP();
	void healPlayer(Player& p);
	void interaction(Player& p);

private:
	string n;
	int hp;
};
