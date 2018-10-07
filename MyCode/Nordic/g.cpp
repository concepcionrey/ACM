#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long double n{0},k{0};
	cin >> n >> k;
	long double p = 1;
	long double i = k+1;

	if (k >= (n/2)) {
	while (i <= n) {
		p -= 1/(i++);
	}

	cout << p << "\n";
} else {
	while (i < n) {
		p -= 1/(i++);
	}

	cout << p << "\n";
	return 0;
}
}