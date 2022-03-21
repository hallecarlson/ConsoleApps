#include "Merchant.h"

Merchant::Merchant()
{
	n = "";
	hp = 0;
	dp = 0;
}
Merchant::Merchant(string name, int hitpoints, int damagepoints)
{
	n = name;
	hp = hitpoints;
	dp = damagepoints;
}
Merchant::Merchant(Merchant(&M))
{
	n = M.n;
	hp = M.hp;
	dp = M.dp;
}
void Merchant::setStats(string name, int hitpoints, int damagepoints)
{
	n = name; 
	hp = hitpoints;
	dp = damagepoints;
}
void Merchant::setName(string name)
{
	n = name;
}
void Merchant::setHitpoints(int hitpoints)
{
	hp = hitpoints;
}
void Merchant::setDamagepoints(int damagepoints)
{
	dp = damagepoints;
}
string Merchant::getN()
{
	return n;
}
int Merchant::getHP()
{
	return hp;
}
int Merchant::getDP()
{
	return dp;
}
void Merchant::healPlayer(Player& p)
{
	p.hp = 30;
}
void Merchant::interaction(Player& p)
{
	//interaction write in here
}