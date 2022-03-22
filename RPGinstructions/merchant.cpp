#include "merchant.h"
#include "player.h"

Merchant::Merchant()
{
	n = "";
	hp = 0;
	dp = 0;
}
Merchant::Merchant(string name, int hitpoints)
{
	n = name;
	hp = hitpoints;
}
Merchant::Merchant(Merchant(&M))
{
	n = M.n;
	hp = M.hp;
}
void Merchant::setStats(string name, int hitpoints)
{
	n = name; 
	hp = hitpoints;
}
void Merchant::setName(string name)
{
	n = name;
}
void Merchant::setHitpoints(int hitpoints)
{
	hp = hitpoints;
}
string Merchant::getN()
{
	return n;
}
int Merchant::getHP()
{
	return hp;
}
void Merchant::healPlayer(Player& p)
{
	p.hpmin = 10;
	p.hpmax = 29;

	p.hphealed = p.hpmin + rand() % (p.hpmax - p.hpmin + 1);
	p.hp = p.hp + p.hphealed;
	if (p.hp > 30) 
	{
		p.hp = 30;
	}
}
void Merchant::interaction(Player& p)
{	

	if (chara == 1)
	{
		printf("Cobalt encountered a merchant!\n");
		printf("The merchant spots her and smiles, waving Cobalt over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		printf("The merchant healed Cobalt by %i! Cobalt now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Cobalt a treat for her lunchbox\n");
		lunchbox++;
		printf("'Safe travels!'\n");
	}
	else if (chara == 2)
	{
		printf("Magenta encountered a merchant!\n");
		printf("The merchant spots him and smiles, waving Magenta over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		printf("The merchant healed Magenta by %i! Magenta now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Magenta a treat for his lunchbox\n");
		lunchbox++;
		printf("'Safe travels!'\n");
	}
	else if (chara == 3)
	{
		printf("Sunflower encountered a merchant!\n");
		printf("The merchant spots her and smiles, waving Sunflower over to them\n");
		printf("'You look weary from your travels, young one'\n'come, let me heal you and send you on your way with a treat\n");
		printf("The merchant healed Sunflower by %i! Sunflower now has %i hp\n", p.hphealed, p.hp);
		printf("The merchant gave Sunflower a treat for her lunchbox\n");
		lunchbox++;
		printf("'Safe travels!'\n");
	}
}