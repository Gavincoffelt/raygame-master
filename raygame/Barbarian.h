#pragma once
#include <iostream>
#include "raylib.h"
#include <string>
class Knight {
public:
	Texture2D knightIdle[4];
	Knight();
	std::string name;
	int health = 25;
	int gold;
	int armor;
	Vector2 position;
	bool hasHealth = true;
	int curFrame = 0;

	float timer;

	void update(float frameTime);
	void draw();
	//bool loaded;
	//int knightsprites = 0;
	void onDeath(Knight a);


};