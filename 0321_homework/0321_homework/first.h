#pragma once
#include <iostream>
#include <string>
#include "first_student.h"

using namespace std;

void main_first() {
	CStudent s("LeeMinSu", "10010", "Elect", "2");
	s.ShowData();
	cout << "" << endl;

	CStudent* student[3];

	string inname, inID, inmajor, ingrade;
	for (int i = 0; i < 3; i++) {
		cout << "�̸� �й� �а� �г� ������ �Է��� �ֽʽÿ� : ";
		cin >> inname >> inID >> inmajor >> ingrade;
		student[i] = new CStudent(inname, inID, inmajor, ingrade);
	}

	cout << "" << endl;

	for (int i = 0; i < 3; i++) {
		student[i]->ShowData();
	}
}