#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 600;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "NBN");

    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {

        BeginDrawing();

            ClearBackground(RAYWHITE);
            
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
