#include <iostream>
using namespace std;

int main() {
	int result{0};
	int n{0};
	cin >> n;

	int sequence[n];

	for(int i{0}; i< n; ++i) {
		int input{0};
		cin >> input;
		sequence[i] = input;
	}

	for (int i{0}; i <n-1;++i) {
		for(int j{i+1}; j<n; ++j) {
			if(sequence[i] > sequence[j]) {
				++result;
			}
		}
	}
	cout << result;
	return 0;
}