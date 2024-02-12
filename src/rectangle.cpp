#include <iostream>
#include <assert.h>
#include "../header/rectangle.hpp"

using namespace std;



Rectangle::Rectangle() {

	width = 0;
	height = 0;
}

Rectangle::Rectangle(int width, int height): 
	width{width}, height{height}   
{
	assert(height >= 0 && width >= 0 && "Sides cannot be negative");
	assert(height >= 0 && "Height cannot be negative");
	assert(width >= 0 && "Width cannot be negative");
}



void
Rectangle::set_width(int w) {
	assert(w >= 0 && "Width cannot be negative");
	width = w;
}

void
Rectangle::set_height(int h) {
	assert(h >= 0 && "Height cannot be negative");
	height = h;
}

int
Rectangle::area() {
	return width * height;
}

int 
Rectangle::perimeter() {
	return (width + height)*2;
}


/*

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h);

        void set_width(int w);
        void set_height(int h);
        int area();
        int perimeter();
};

#endif // RECTANGLE_HPP

*/
