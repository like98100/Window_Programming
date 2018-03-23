#include <iostream>

using namespace std;

class CMyTime {
public:
	int hour;
	int minute;
	int second;

	CMyTime(int h, int m, int s);

	void add(CMyTime p);
	void print();
};

CMyTime::CMyTime(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
	//int exch_minute = 0;
	//int exch_second = 0;
	//while (1) {
	//	if (second != 0 && second % 60 == 0) {
	//		exch_second = 1;
	//		second -= 60;
	//		minute++;
	//	}

	//	if (minute != 0 && minute % 60 == 0) {
	//		exch_minute = 1;
	//		minute -= 60;
	//		hour++;
	//	}

	//	if (exch_second == 1 && exch_minute == 1) break;
	//	else {
	//		exch_second == 0;
	//		exch_minute == 0;
	//	}
	//}
}

void CMyTime::add(CMyTime p) {

}

void CMyTime::print() {
	cout << hour << " : " <<  minute << " : " << second << endl;
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