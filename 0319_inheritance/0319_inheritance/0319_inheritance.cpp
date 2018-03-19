// 0319_inheritance.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Shape {
	public :
		float _x, _y;

		Shape(float inx, float iny);
		void Draw();
		
};

Shape::Shape(float inx, float iny) {
	_x = inx;
	_y = iny;
}

void Shape::Draw() {
	cout << "[Shape] Position :: (" << _x << ", " << _y << ")"<< endl;
}

class Rectangle {
	public:
		float _x, _y;
		float _width, _height;

		Rectangle(float inx, float iny, float inwidth, float inheight);
		void Draw();
};

Rectangle::Rectangle(float inx, float iny, float inwidth, float inheight) {
	_x = inx; _y = iny;
	_width = inwidth; _height = inheight;
}

void Rectangle::Draw() {
	cout << "[Rectangle] Position :: (" << _x << ", " << _y << "), size :: (" << _width << ", " << _height << ")" << endl;
}

class Circle {
	public:
		float _x, _y;
		float _radius;

		Circle(float inx, float iny, float inradius);
		void Draw();
};

Circle::Circle(float inx, float iny, float inradius) {
	_x = inx; _y = iny;
	_radius = inradius;
}

void Circle::Draw() {
	cout << "[Circle] Position :: (" << _x << ", " << _y << "), radius :: (" << _radius << ")" << endl;
}

int main()
{
	Shape sha(1, 2);
	sha.Draw();

	Rectangle rec(1, 2, 3, 4);
	rec.Draw();

	Circle cir(1, 2, 3.141592);
	cir.Draw();
    return 0;
}

