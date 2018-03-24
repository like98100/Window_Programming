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
		cout << "메뉴를 선택하여 주십시오." << endl;
		cout << "---------------------------------" << endl;
		cout << "1.학생 정보입력" << endl;
		cout << "2.좌표 거리" << endl;
		cout << "3.시간 표시" << endl;
		cout << "4.도형 정보 표시" << endl;
		cout << "5.종료" << endl;
		cout << "---------------------------------" << endl;
		cin >> sel;

		if (sel == 1) main_first();
		else if (sel == 2) main_second();
		else if (sel == 3) main_third();
		else if (sel == 4) main_fourth();
		else if (sel == 5) break;
		else cout << "잘못된 입력입니다. 다시 시도해 주십시오." << endl;
	}
	return 0;
}