// B

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n{0};
	cin >> n;

	string s;
	cin >> s;

	string res{""};

	for(int i{0};i<s.length();) {
		if(s.length() % 2 != 0) {
			res+= s.at(0);
			s.erase(0,1);
		} else {
			res = s.at(0) + res;
			s.erase(0,1);
		}
	}
	cout << res << "\n";


	return 0;
}