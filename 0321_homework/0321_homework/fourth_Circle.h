#pragma once
#include "fourth_Shape.h"

#include <iostream>
using namespace std;

class Circle :public Shape {
public:
	float _radius = 0;

	Circle(float inx, float iny, float inradius);
	void Draw() const;
};

Circle::Circle(float inx, float iny, float inradius) :Shape(inx, iny) {
	_x = inx; _y = iny;
	_radius = inradius;
}

void Circle::Draw() const {
	cout << "[MyCircle] (" << _x << ", " << _y << "), r:" << _radius << "" << endl;
}