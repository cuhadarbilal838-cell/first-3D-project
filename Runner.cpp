#include "raylib.h"

int main(void)
{
    // Pencere oluşturma
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Raylib - 3D Kup Cizimi");

    // 3D Kamera tanımlama
    Camera3D camera = {0};
    camera.position = (Vector3){10.0f, 10.0f, 10.0f}; // Kameranın konumu
    camera.target = (Vector3){0.0f, 0.0f, 0.0f};      // Kameranın baktığı nokta (merkez)
    camera.up = (Vector3){0.0f, 1.0f, 0.0f};          // Yukarı vektörü
    camera.fovy = 45.0f;                              // Görüş açısı
    camera.projection = CAMERA_PERSPECTIVE;           // Perspektif modu
    Vector3 cubePosition = {0.0f, 0.0f, 0.0f};
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Çizim
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // 3D modunu başlat
        BeginMode3D(camera);

        // Referans için 3D ızgara (grid)
        DrawGrid(10, 1.0f);
        DrawCube(cubePosition, 2.0f , 2.0f, 2.0f, GREEN );
        EndMode3D();

        DrawText("Raylib 3D Kup Ornegi", 10, 10, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
