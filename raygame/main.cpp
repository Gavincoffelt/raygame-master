#include "Corpse.h"
#include "raylib.h"
#include "Barbarian.h"
int main()
{
	float timer=0.0f;

	int screenWidth = 800;
	int screenHeight = 450;
	

	InitWindow(screenWidth, screenHeight, "DungeonCrawler?");

	Knight bob;
	bob.position = { 200,200 };

	SetTargetFPS(60);



	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		bob.update(GetFrameTime());
			
		
		// TODO: Update your variables here
		

		// Draw

		BeginDrawing();
		ClearBackground(BLACK);
		
		
		bob.draw();

		

		EndDrawing();
		
	}

	   
	CloseWindow();        // Close window and OpenGL context
	

	return 0;
}