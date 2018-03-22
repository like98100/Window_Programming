#include <iostream>

using namespace std;

class CMyTime {
public:
	int hour;
	int minute;
	int second;

	CMyTime(int h, int m, int s);

	add(CMyTime p);
	void print();
};

CMyTime::CMyTime(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}

CMyTime::add(CMyTime p) {

}

void CMyTime::print() {

}
int main() {

	CMyTime a(0, 70, 90);
	CMyTime b(0, 0, 3630);
	a.print();
	b.print();
	a.add(b);
	a.print();
	return 0;
}