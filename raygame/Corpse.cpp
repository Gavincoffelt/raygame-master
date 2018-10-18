#include "Corpse.h"


void corpse::draw()
{

}

corpse::corpse(Knight a)
{
	if (a.hasHealth == false) {
		corpsegold = a.gold;
		corpsename = a.name;
		position = a.position;
	}
}

corpse::corpse(Wizard a)
{
	corpsegold = a.gold;
	corpsename = a.name;
	position = a.position;
}

