#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
using namespace std;

class Grey
{
public:
	Grey();
	Grey(string n, int hp, int d);
	Grey(Grey& G);
	void setStats(string name, int hitpoints, int damagepoints);
	void setName(string name);
	void setHitpoints(int hitpoints);
	void setDamagepoints(int damagepoints);
	string getN();
	int getHP();
	int getDP();

private:
	string n;
	int hp;
	int dp;
};
