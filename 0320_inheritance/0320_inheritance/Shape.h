#pragma once
#include <iostream>
using namespace std;
class Shape {
public:
	float _x, _y;

	Shape(float inx, float iny);
	virtual void Draw() const;

};

Shape::Shape(float inx, float iny) {
	_x = inx;
	_y = iny;
}

void Shape::Draw() const {
	cout << "[Shape] Position :: (" << _x << ", " << _y << ")" << endl;
}