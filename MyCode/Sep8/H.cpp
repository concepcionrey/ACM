#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long ca,ba,pa,cb,bb,pb;
	long long a{0},b{0},c{0};
	cin >> ca >> ba >> pa >> cb >> bb >> pb;

	if (ca < cb) {
		a = abs(ca-cb);
	}
	if (ba < bb) {
		b = abs(ba-bb);
	}
	if (pa < pb) {
		c = abs(pa-pb);
	}

	std::cout << a+b+c << "\n";
	return 0;
}