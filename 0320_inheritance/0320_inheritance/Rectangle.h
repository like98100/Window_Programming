#pragma once
#include "Shape.h"

#include <iostream>
using namespace std;

class Rectangle :public Shape {
public:
	float _width = 0, _height = 0;

	Rectangle(float inx, float iny, float inwidth, float inheight);
	void Draw() const;
};

Rectangle::Rectangle(float inx, float iny, float inwidth, float inheight) :Shape(inx, iny) {
	_x = inx; _y = iny;
	_width = inwidth; _height = inheight;
}

void Rectangle::Draw() const {
	cout << "[Rectangle] Position :: (" << _x << ", " << _y << "), size :: (" << _width << ", " << _height << ")" << endl;
}