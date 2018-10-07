#include <iostream>
using namespace std;

int main() {
	int a{0},b{0},c{0};
	cin >> a >> b;

	while(a <= b) {
		++c;
		a*=3;
		b*=2;
	}

	cout << c << "\n";
	return 0;
}