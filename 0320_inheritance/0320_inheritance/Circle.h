#pragma once
#include "Shape.h"

#include <iostream>
using namespace std;

class Circle :public Shape {
public:
	float _radius;

	Circle(float inx, float iny, float inradius);
	void Draw() const;
};

Circle::Circle(float inx, float iny, float inradius) :Shape(inx, iny) {
	_x = inx; _y = iny;
	_radius = inradius;
}

void Circle::Draw() const {
	cout << "[Circle] Position :: (" << _x << ", " << _y << "), radius :: (" << _radius << ")" << endl;
}