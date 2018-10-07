#include <iostream>
#include <vector>
using namespace std;

int t,n,i,j,h;

int o,e;

bool isOdd = false;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	for(i = 0; i < t; ++i) {
		o = 0;
		e = 0;
		vector<int> v;
		cin >> n;

		for(j = 0; j < n; ++j) {
			cin >> h;
			v.push_back(h);
		}

		for(j = 0; j < n; ++j) {
			if(v[j] % 2 == 0) {
				++e;
			} else {
				++o;
			}
		}

		if(e<o) {
			isOdd = true;
		}

		for(j = 0; j < n; ++j) {
			if ((!isOdd && v[j] % 2 != 0) || (isOdd &&  v[j] % 2 == 0)) {
				cout << ++j << '\n';
				break;
			}
		}
	}

	return 0;
}