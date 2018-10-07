#include <iostream>
using namespace std;

int main () {
	ios::sync_with_stdio(0);
	int result{0};
	int n{0};
	cin >> n;

	int sequence[n];

	for(int i{0}; i< n; ++i) {
		int input{0};
		cin >> input;
		sequence[i] = input;
	}

	for(int i{0}; i<n-2; ++i) {
		for(int j{i+1}; j<n-1; ++j) {
			for(int k{j+1}; k<n; ++k){
				if(sequence[i] > sequence[j] && sequence[i] > sequence[k] && sequence[j] > sequence[k]){
					++result;
				}
			}
		}
	}


	cout << result << "\n";
	return 0;
}

