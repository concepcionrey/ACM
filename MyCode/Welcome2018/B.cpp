#include <iostream>
#include <string>
using namespace std;

int main() {
	std::string str{};
	int a,res{-100000};

	cin >> a;

	for (int i{0}; i < a; ++i) {
		std::string strTemp{};
		cin >> strTemp;
		int temp;
		cin >> temp;

		if (temp > res) {
			res = temp;
			str = strTemp;
		}
	}

	std::cout << str << "\n";
	return 0;
}