#include <iostream>
#include <vector>
using namespace std;

int n,m;
std::vector<int> v1;
std::vector<int> v2;

int main() {
	cin >> n >>m;

	for(int i{0}; i<n; ++i) {
		int x;
		cin >> x;
		v1.push_back(x);
	}

	for(int i{0}; i<m; ++i) {
		int x;
		cin >> x;
		v2.push_back(x);
	}

	return 0;
}