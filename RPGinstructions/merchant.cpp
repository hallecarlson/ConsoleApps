#include "merchant.h"
#include "player.h"
#include <time.h>

Merchant::Merchant()
{
	n = "";
	hp = 0;
	hpmin = 0;
	hpmax = 0;
	hphealed = 0;
} 
Merchant::Merchant(string name, int hitpoints, int minhitpoints, int maxhitpoints, int healedhitpoints)
{
	n = name;
	hp = hitpoints;
	hpmin = minhitpoints;
	hpmax = maxhitpoints;
	hphealed = healedhitpoints;
}
void Merchant::setStats(string name, int hitpoints, int minhitpoints, int maxhitpoints, int healedhitpoints)
{
	n = name;
	hp = hitpoints;
	hpmin = minhitpoints;
	hpmax = maxhitpoints;
	hphealed = healedhitpoints;
}
void Merchant::setName(string name)
{
	n = name;
}
void Merchant::setHitpoints(int hitpoints)
{
	hp = hitpoints;
}
void Merchant::setMinhitpoints(int minhitpoints)
{
	hpmin = minhitpoints;
}
void Merchant::setMaxhitpoints(int maxhitpoints)
{
	hpmax = maxhitpoints;
}
void Merchant::setHealedhitpoints(int healedhitpoints)
{
	hphealed = healedhitpoints;
}
string Merchant::getN()
{
	return n; 
}
int Merchant::getHP()
{
	return hp;
}
int Merchant::getHPMIN()
{
	return hpmin;
}
int Merchant::getHPMAX()
{
	return hpmax;
}
int Merchant::getHPHEALED()
{
	return hphealed;
}
void Merchant::healPlayer(Player& p) //calculates how much the merchant will heal the player
{ 
	p.hpmin = 8;
	p.hpmax = 15;

	p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
	p.hp = p.hp + p.hphealed;
	if (p.hp > 30)  
	{
		p.hp = 30;
	} 
}
void Merchant::interaction(Player& p)
{	
	if (p.chara == 1)
	{
		printf("\nCobalt encountered a merchant!\n");
		printf("The merchant spots her and smiles, waving Cobalt over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		healPlayer(p);
		printf("The merchant healed Cobalt by %i! Cobalt now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Cobalt a treat for her lunchbox\n");
		p.lunchbox++;
		printf("'Safe travels!'\n\n");
	}
	else if (p.chara == 2) 
	{
		printf("\nMagenta encountered a merchant!\n");
		printf("The merchant spots him and smiles, waving Magenta over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		healPlayer(p);
		printf("The merchant healed Magenta by %i! Magenta now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Magenta a treat for his lunchbox\n\n");
		p.lunchbox++;
		printf("'Safe travels!'\n\n");
	}
	else if (p.chara == 3)
	{
		printf("\nSunflower encountered a merchant!\n");
		printf("The merchant spots her and smiles, waving Sunflower over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		healPlayer(p);
		printf("The merchant healed Sunflower by %i! Sunflower now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Sunflower a treat for her lunchbox\n\n");
		p.lunchbox++;
		printf("'Safe travels!'\n\n");
	}
}