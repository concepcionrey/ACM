#include <iostream>
using namespace std;

int p,q,s;
bool f_On = false;
bool s_On = false;

int main() {
	cin >> p >> q >> s;


	for(int i = 1; i <= s; ++i) {
		if(i % p == 0) {
			f_On = true;
		} else {
			f_On = false;
		}

		if(i % q == 0) {
			s_On = true;
		} else {
			s_On = false;
		}

		if(f_On && s_On) {
			cout << "yes\n";
			return 0;
		}
	}
	cout << "no\n";
	return 0;

}	