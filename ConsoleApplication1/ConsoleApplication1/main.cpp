#include <iostream>

using namespace std;

int main() {

	int i;
	while (1) {
		std::cin >> i;

		if (i == 1) {
			std::cout << "Hongik University" << std::endl;
		}
		else if (i == 2) {
			cout << "Game Software" << endl;
		}
		else if (i == 3) {
			cout << "OK BYE" << endl; break;
		}
	}
	return 0;
}