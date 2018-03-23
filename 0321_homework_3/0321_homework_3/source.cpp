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
	//int exch_minute = 0;
	//int exch_second = 0;
	//while (1) {
	//	if (s >= 60) {
	//		exch_second = 1;
	//		s -= 60;
	//		m++;
	//	}

	//	if (m >= 60) {
	//		exch_minute = 1;
	//		m -= 60;
	//		h++;
	//	}

	//	if (exch_second == 1 && exch_minute == 1) break;
	//	else {
	//		exch_second = 0;
	//		exch_minute = 0;
	//	}
	//}

		if (s >= 60) {
			m += s / 60;
			s %= 60;
		}

		if (m >= 60) {
			h += m / 60;
			m %= 60;
		}
	
	hour = h;
	minute = m;
	second = s;
}

void CMyTime::add(CMyTime p) {
	hour += p.hour;
	minute += p.minute;
	second += p.second;

	if (second >= 60) {
		minute += second / 60;
		second %= 60;
	}

	if (minute >= 60) {
		hour += minute / 60;
		minute %= 60;
	}
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