#pragma once
#include "third_time.h"

void main_third() {

	CMyTime a(0, 70, 90);
	CMyTime b(0, 0, 3630);
	a.print();
	b.print();
	a.add(b);
	a.print();
}