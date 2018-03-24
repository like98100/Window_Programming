#pragma once
#include <string>
#include <iostream>

using namespace std;

class CStudent {
public:
	string name;
	string ID;
	string major;
	string grade;

	CStudent(string inname, string inID, string inmajor, string ingrade);
	void ShowData();
};


CStudent::CStudent(string inname, string inID, string inmajor, string ingrade) {
	name = inname;
	ID = inID;
	major = inmajor;
	grade = ingrade;
}

void CStudent::ShowData() {
	cout << "이름 : " << name << "\t학번 : " << ID << "\t학과 : " << major << "\t학년 : " << grade << endl;
}
