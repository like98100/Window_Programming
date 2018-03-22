#include <iostream>
#include <string>

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

int main() {
	CStudent s("LeeMinSu", "10010", "Elect", "2");
	s.ShowData();
	cout << "" << endl;

	CStudent* student[3];

	string inname, inID, inmajor, ingrade;
	for (int i = 0; i < 3; i++) {
		cout << "이름 학번 학과 학년 순으로 입력해 주십시오 : ";
		cin >> inname >> inID >> inmajor >> ingrade;
		student[i] = new CStudent(inname, inID, inmajor, ingrade);
	}

	cout << "" << endl;

	for (int i = 0; i < 3; i++) {
		student[i]->ShowData();
	}
	return 0;
}