#include <iostream>
#include <vector>
#include <string>
using namespace std;

string str{};
int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> str >> n;

	string buf{};

	// init intermediate check for game state
	for(int i = 0 ; i < str.length(); ++i) {
		buf+= "_";
	}

	while(n--) {
		char guess{};
		cin >> guess;
		for(int j = 0; j < str.length(); j++) {
			if(str.at(j) == guess) {
				buf[j] = str.at(j);
			}
		}
		cout << buf << '\n';
	}
	return 0;
}