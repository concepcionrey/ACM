#include <iostream>
using namespace std;

int main() {
	int result{0};
	int n,h;
	cin >> n >> h;

	int arr[n];
	for(int i{0};i<n;++i) {
		int friendHeight{0};
		cin >> friendHeight;
		arr[i] = friendHeight;
	}

	for(int i{0};i<n;++i) {
		if(arr[i] > h) {
			result+=2;
		} else {
			++result;
		}
	}

	cout << result << "\n";

	return 0;
}