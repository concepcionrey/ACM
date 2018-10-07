#include<iostream>
#include <string>
using namespace std;

int main() {
	int a{0},d{0};

	int n{0};
	cin >> n;

	string result;
	cin >> result;

	for(int i{0}; i<result.length(); ++i){
		if (result.at(i) == 'A') {
			++a;
		} else {
			++d;
		}
	}

	if (a > d) {
		cout << "Anton\n";
	} else if (a < d) {
		cout << "Danik\n";
	} else {
		cout << "Friendship\n";
	}

	return 0;
}