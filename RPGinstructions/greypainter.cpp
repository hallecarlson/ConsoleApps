#include "greypainter.h"

Grey::Grey();
{
	n = "";
	hp = 0;
	dp = 0;
}
Grey::Grey(string name, int hitpoints, int damagepoints)
{
	n = name;
	hp = hitpoints;
	dp = damagepoints;
}
Grey::Grey(Grey(&G))
{
	n = G.n;
	hp = G.hp;
	dp = G.dp;
}
void Grey::setStats(string name, int hitpoints, int damagepoints)
{
	n = name; 
	hp = hitpoints;
	dp = damagepoints;
}
void Grey::setName(string name)
{
	n = name;
}
void Grey::setHitpoints(int hitpoints)
{
	hp = hitpoints;
}
void Grey::setDamagepoints(int damagepoints)
{
	dp = damagepoints;
}
string Grey::getN()
{
	return n;
}
int Grey::getHP()
{
	return hp;
}
int Grey::getDP()
{
	return dp;
}