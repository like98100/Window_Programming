#pragma once
#include "fourth_Shape.h"
#include "fourth_Rectangle.h"
#include "fourth_Circle.h"

using namespace std;

void main_fourth()
{

	Shape * pShape1 = new Shape(10, 3);
	Shape * pShape2 = new Rectangle(3, 5, 7, 8);
	Shape * pShape3 = new Circle(4, 5, 1);
	pShape1->Draw();
	pShape2->Draw();
	pShape3->Draw();
	delete pShape1;
	delete pShape2;
	delete pShape3;
}