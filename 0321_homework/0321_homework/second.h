#pragma once
#include <iostream>
#include "second_point.h"
using namespace std;

void main_second() {
	CMyPoint a(4, 5);
	CMyPoint b(1, 1);

	a.print();
	b.print();

	cout << "a �� b�� �Ÿ� : " << a.distance(b) << endl;
}