# Raylib 3D Cube Rendering

A basic 3D scene built with C++ and Raylib. This project demonstrates how to set up a 3D perspective camera, render a 3D grid, and draw a primitive 3D object (a green cube) in a 60 FPS window.

## 🚀 Features
*   **3D Camera Setup:** Configured a perspective camera looking at the world origin.
*   **3D Object Rendering:** Draws a 2x2x2 green cube at the center.
*   **Reference Grid:** Includes a 10x10 floor grid for spatial awareness.
*   **Frame Rate:** Locked at 60 FPS for smooth rendering.

## 🛠️ Tech Stack
*   **Language:** C++
*   **Library:** [Raylib](https://www.raylib.com/)
*   **Graphics API:** OpenGL (handled by Raylib under the hood)

## 💻 How to Run
1. Make sure you have a C++ compiler (like MinGW/g++) and Raylib installed on your system.
2. Compile the code using the following command (Windows example):
   ```bash
   g++ main.cpp -o runner -lraylib -lopengl32 -lgdi32 -lwinmm
   
