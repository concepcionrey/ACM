#include <iostream>
#include <vector>
#include <map>
using namespace std;

int t,n,i,j,h;

int o,e;

bool isOdd = false;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while(t--) {
		o = 0;
		e = 0;
		map<int,int> m;
		cin >> n;
		for (i = 0; i < n;++i) {
			cin >> h;
			if (h % 2 == 0) {
				m[i] = 
			}

			m[i] = h;
		}

		if(e<o) {isOdd = true;}

		map<int,int>::iterator it = m.begin();

		for(it = m.begin(); it!=m.end();++it) {
			if ((!isOdd && it->second % 2 == 0) || (isOdd && it->second % 2 != 0)) {
				cout << it->first;
				break; 
			}
		}
	}
	
	return 0;
}