#pragma once
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
	cout.width(2); cout.fill('0');
	cout << hour << ":";
	cout.width(2); cout.fill('0');
	cout << minute << ":";
	cout.width(2); cout.fill('0');
	cout << second << endl;
}