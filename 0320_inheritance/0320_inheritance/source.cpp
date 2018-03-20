#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Shape sha(100, 40);
	sha.Draw();

	Rectangle rec(120, 40, 50, 20);
	rec.Draw();

	Circle cir(200, 100, 50);
	cir.Draw();

	Shape* shapes[5] = { NULL };
	shapes[0] = new Circle(100, 100, 50);
	shapes[1] = new Rectangle(300, 300, 100, 100);
	shapes[2] = new Rectangle(200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);
	for (int i = 0; i < 5; ++i)
		shapes[i]->Draw();
	for (int i = 0; i < 5; ++i)
	{
		delete shapes[i];
		shapes[i] = NULL;
	}
	return 0;
}