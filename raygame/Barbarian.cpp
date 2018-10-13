#include "Barbarian.h"

Knight::Knight()
{
	curFrame = 0;

	timer = 0;

	knightIdle[0] = LoadTexture("knightIdle/knightIdle0.png");
	knightIdle[1] = LoadTexture("knightIdle/knightIdle1.png");
	knightIdle[2] = LoadTexture("knightIdle/knightIdle2.png");
	knightIdle[3] = LoadTexture("knightIdle/knightIdle3.png");
}




void Knight::update(float frameTime)
{
	timer += frameTime;

	if (timer >= (0.1f)) {
		timer = 0.0f;
		curFrame++;
		if (curFrame == 4) {
			curFrame = 0;
		}
	}
}

void Knight::draw()
{
	DrawTextureEx(knightIdle[curFrame], position, 0.0f, 5.0f, WHITE);
}

//void Knight::draw()
//{
//	if (knightsprites == 4) 
//	{
//		knightsprites = 0;
//	}
//	if (knightsprites <= 3) {
//		
//		if (loaded) {
//			UnloadTexture(knightIdle);
//			loaded = false;
//		}
//		if (!loaded) {
//			Texture2D knightIdle = LoadTexture(("knightIdle/knightIdle" + std::to_string(knightsprites) + ".png").c_str());
//			DrawTextureEx(knightIdle, { 100, 100 }, 0, 5, WHITE);
//			loaded = true;
//		}
//		++knightsprites;
//	}
//}
