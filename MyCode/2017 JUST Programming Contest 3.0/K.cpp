#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T{0};
	cin >> T;

	for (int i{0}; i < T; i++) {
		int n{0};
		double m{0};
		cin >> n >> m;
		int successRate(ceil(n*m));
		int currRate{0};

		for (int j{0}; j < n; j++) {
			int c{0};
			cin >> c;
			if (c >= 50) {
				++currRate;
			}
		}
		if (currRate >= successRate) {
			cout << "YES \n";
		} else {
			cout << "NO \n";
		}
	}
	return 0;
}