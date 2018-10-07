#include <iostream>
#include <vector>
using namespace std;

int main() {
	std::vector<int> v{1,2,3};

	v.insert(v.begin()+1,4);
	for (auto&n : v) {
		cout << n << '\n';
	}
}