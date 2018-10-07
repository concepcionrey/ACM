#include <iostream>
using namespace std;

int main() {
	bool didHeWin{true};
	int k,n,y,p;
	cin >> k >> n >> y >> p;

	for(int i{0}; i<n+k-2;++i) {
		int yearEntry{0};
		int strength{0};
		cin >> yearEntry >> strength;
		
		if (y== yearEntry && p > strength) {
			didHeWin = true;
		}
		if(y== yearEntry && p < strength) {
			didHeWin = false;
		}
 	}
 	if(didHeWin) {
 		cout << y << "\n";
 		} else {
 			cout << "unknown\n";
 		}
	return 0;
}