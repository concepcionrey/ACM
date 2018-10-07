#include <iostream>
using namespace std;

int main() {
	long long a,b,c;
	cin >> a;
	for(long long i{0}; i < a; ++i) {
		cin >> b >> c;
		cout << b*c <<'\n';
	}
	return 0;
}