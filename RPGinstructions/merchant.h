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
	Merchant(string n, int hp, int hpmin, int hpmax, int hphealed);
	void setStats(string name, int hitpoints, int minhitpoints, int maxhitpoints, int healedhitpoints);
	void setName(string name);
	void setHitpoints(int hitpoints);
	void setMinhitpoints(int minhitpoints); 
	void setMaxhitpoints(int maxhitpoints);
	void setHealedhitpoints(int healedhitpoints);
	string getN();
	int getHP();
	int getHPMIN();
	int getHPMAX();	
	int getHPHEALED();
	void healPlayer(Player& p);
	void interaction(Player& p);

private:
	string n;
	int hp;
	int hpmin;
	int hpmax;
	int hphealed;
};
