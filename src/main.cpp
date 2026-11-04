#include <iostream>
#include <raylib.h>

int main() {
	/*
	* Sets trace log level based on build configuration. 
	* In debug builds, it will log info messages, while in 
	* release builds, it will only log warnings and errors.
	*/
	#ifdef _DEBUG
		SetTraceLogLevel(LOG_INFO);
	#else 
		SetTraceLogLevel(LOG_WARNING);
	#endif

	InitWindow(800, 600, "Rootbound");
	SetTargetFPS(60);

	// Game loop
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Hello, Rootbound!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();


	return 0;
}