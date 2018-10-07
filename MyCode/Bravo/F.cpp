#include<iostream>
using namespace std;

int main() {
	int m{0},n{0},k{0}, res{0};
	int x{0},y{0};
	cin >> m >> n >> k;

	m +=2;

	for (int i{0}; i < k; ++i) {
		cin >> x >> y;
	}


	cout << min(n,m) << "\n";
	return 0;
}