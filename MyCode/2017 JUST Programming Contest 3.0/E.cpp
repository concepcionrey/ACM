#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	int roomTotal{0};

	for (int i{0}; i < T; i++) {
		int n{0};
		cin >> n;

		int bed{0};
		int living{0};
		int kitchen{0};
		for(int j{0}; j < n; j++) {
			string f;
			cin >> f;
			if(f.substr(0,1) == "b") {
				++bed;
			}
			else if(f.substr(0,1) == "l") {
				++living;
			}
			else {
				++kitchen;
			}
		}
		roomTotal = min((bed/2),min(kitchen,living));
		cout << roomTotal << "\n";
	}
	return 0;
}