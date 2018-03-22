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
	cout << "�̸� : " << name << "\t�й� : " << ID << "\t�а� : " << major << "\t�г� : " << grade << endl;
}

int main() {
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
	return 0;
}