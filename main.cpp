#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
const int width =800, hight = 800;
//struct to store rbg values
struct Color{
    unsigned char r,b,g;
    Color(unsigned char r, unsigned char g, unsigned char b):r(r),g(g),b(b){}
};

//image buffer
vector<Color> frameBuffer(width*hight,Color(0,0,0));
void setPixel(int x,int y, Color color){
    if(x>=0 && x<hight && y>=0 && y<width){
        frameBuffer[y*width+x] = color; // y*width+x convert 2d to 1d since frame buffer is 1d

    }
}

