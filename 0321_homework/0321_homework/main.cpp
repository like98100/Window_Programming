#include <iostream>
#include "first.h"
#include "second.h"
#include "third.h"
#include "fourth.h"

using namespace std;

int main() {
	int sel;	//select
	
	while (1) {
		cout << "---------------------------------" << endl;
		cout << "�޴��� �����Ͽ� �ֽʽÿ�." << endl;
		cout << "---------------------------------" << endl;
		cout << "1.�л� �����Է�" << endl;
		cout << "2.��ǥ �Ÿ�" << endl;
		cout << "3.�ð� ǥ��" << endl;
		cout << "4.���� ���� ǥ��" << endl;
		cout << "5.����" << endl;
		cout << "---------------------------------" << endl;
		cin >> sel;

		if (sel == 1) main_first();
		else if (sel == 2) main_second();
		else if (sel == 3) main_third();
		else if (sel == 4) main_fourth();
		else if (sel == 5) break;
		else cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��� �ֽʽÿ�." << endl;
	}
	return 0;
}