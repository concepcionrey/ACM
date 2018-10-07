#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	std::vector<std::string> a;
	for(int i{0}; i < n; ++i) {
		std::string input{""};
		cin >> input;
		a.push_back(input);
	}


	return 0;
}