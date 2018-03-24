#pragma once
#include <iostream>
using namespace std;
class Shape {
public:
	float _x = 0, _y = 0;

	Shape(float inx, float iny);
	virtual void Draw() const;

};

Shape::Shape(float inx, float iny) {
	_x = inx;
	_y = iny;
}

void Shape::Draw() const {
	cout << "[MyShape] (" << _x << ", " << _y << ")" << endl;
}