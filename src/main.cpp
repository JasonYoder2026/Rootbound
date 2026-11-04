#include <iostream>
#include <raylib.h>

int main() {
	InitWindow(800, 600, "Rootbound");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Hello, Rootbound!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();


	return 0;
}