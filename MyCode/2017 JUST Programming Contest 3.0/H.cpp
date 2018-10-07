#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;


	for(int i{0}; i < T; i++) {
		double a{0};
		double b{0};
		double c{0};
		double d{0};
		cin >> a >> b >> c >> d;
		if((b/d) < (log10(c)/log10(a))) {
			cout << "< \n";
		} else {
			cout << "> \n";
		}
	}
	return 0;
}