#include <iostream>
#include <cmath>
using namespace std;

class CMyPoint {
public:
	int x;
	int y;
	CMyPoint();
	CMyPoint(int inx, int iny);
	void print();
	float distance(CMyPoint r);
};

CMyPoint::CMyPoint() {
	x = 0; y = 0;
}

CMyPoint::CMyPoint(int inx, int iny) {
	x = inx; y = iny;
}

void CMyPoint::print() {
	cout << "(" << x << ", " << y << ")"<< endl;
}

float CMyPoint::distance(CMyPoint r) {
	float sum_x = x - r.x;
	float sum_y = y - r.y;

	sum_x = pow(sum_x, 2);
	sum_y = pow(sum_y, 2);
	
	float sum = sum_x + sum_y;

	return sqrt(sum);
}

int main() {
	CMyPoint a(4, 5);
	CMyPoint b(1, 1);

	a.print();
	b.print();

	cout << "a 와 b의 거리 : " << a.distance(b) << endl;
	return 0;
}