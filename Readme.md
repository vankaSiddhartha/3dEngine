# 3dEngine - Software Rendering from Scratch

## Overview
Tiny Renderer is a simple software-based rendering engine implemented in C++. The goal is to understand how OpenGL and 3D rendering work at a low level by building everything from scratch.

## Features
- Basic framebuffer and pixel manipulation
- Drawing lines and triangles
- Implementing a simple 3D pipeline
- Loading and rendering 3D models (e.g., `.obj` files)
- Rasterization and barycentric coordinates
- Depth buffering (Z-buffer)
- Basic shading techniques (Flat shading, Gouraud shading, Phong shading)
- Texture mapping
- Perspective projection and camera controls

## Technologies Used
- C++
- Standard Template Library (STL)
- Basic file handling for loading 3D models
- PPM format for image output

## Getting Started
### Prerequisites
- A C++ compiler (GCC, Clang, or MSVC)
- CMake (optional, for project setup)

### Compilation
```sh
g++ main.cpp -o renderer
./renderer
```

### Output
- The generated image will be saved as `output.png`.
- Example output: ![Triangle rendering](https://github.com/vankaSiddhartha/3dEngine/blob/main/output/triangle.png?raw=true)

## Future Enhancements
- Implementing anti-aliasing techniques
- Adding real-time rendering capabilities
- Supporting additional 3D model formats
- Advanced shading (Blinn-Phong, Normal Mapping, etc.)

## References
- [Tiny Renderer Wiki](https://github.com/ssloy/tinyrenderer/wiki)
- Computer graphics books and resources
