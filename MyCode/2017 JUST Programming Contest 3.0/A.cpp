#include <iostream>

int main () {
	ios::sync_with_stdio(0);
	int testCase{};
	std::cin >> testCase;

	double y{};
	double x{};

	for (int i{}; i < testCase; i++) {
		int result{};
		std::cin >> y >> x;
		double fractional{x/100};
		result = (y/(1+fractional)+1e-9);
		std::cout << result << "\n";
	}

	return 0;
}