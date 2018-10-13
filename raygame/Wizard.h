#pragma once
#include <iostream>
#include "raylib.h"
#include <string>
class Wizard {
public:
	Wizard();
	std::string name;
	int mana = 50;
	int health = 25;
	int gold;
	Vector2 position;
	void draw();




};