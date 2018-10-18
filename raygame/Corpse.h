#pragma once
#include <iostream>
#include "raylib.h"
#include <string>
#include "Barbarian.h"
#include "Wizard.h"
class corpse {
public:
	std::string corpsename;
	int corpsegold;
	Vector2 position;
	void draw();
	corpse(Knight a);
	corpse(Wizard a);


};