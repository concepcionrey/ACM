#include <iostream>
using namespace std;

void doNotChange(int n) {
		n = 5;
}

void change(int &n) {
	n = 5;
}

int main() {
	int test = 3;
	doNotChange(test);
	std::cout << test << "\n";
	change(test);
	std::cout << test << '\n';
	return 0;
}


