#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include <vector>

const int width = 500, height = 500;
std::vector<unsigned char> framebuffer(width *height * 3, 0); // RGB image

void setPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b)
{
    if (x >= 0 && x < width && y >= 0 && y < height)
    {
        int index = (y * width + x) * 3;
        framebuffer[index] = r;
        framebuffer[index + 1] = g;
        framebuffer[index + 2] = b;
    }
}

void drawLine(int x0, int y0, int x1, int y1, unsigned char r, unsigned char g, unsigned char b)
{
    int dx = abs(x1 - x0), dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1, sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;

    while (true)
    {
        setPixel(x0, y0, r, g, b);
        if (x0 == x1 && y0 == y1)
            break;
        int e2 = 2 * err;
        if (e2 > -dy)
        {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            y0 += sy;
        }
    }
}

void drawTriangle()
{
    drawLine(100, 400, 400, 400, 255, 0, 0); // Red base
    drawLine(100, 400, 250, 100, 0, 255, 0); // Green left side
    drawLine(250, 100, 400, 400, 0, 0, 255); // Blue right side
}

int main()
{
    drawTriangle();
    stbi_write_png("triangle.png", width, height, 3, framebuffer.data(), width * 3);
    return 0;
}
