#include <iostream>
#include <string>
using namespace std;

int main () {
	ios::sync_with_stdio(0);

	int path{0};
	int n{};
	cin >> n;

	string table[n][n];

	for (int i{0};i<n;++i) {
		for(int j {0};j<n;++j) {
			string tile = "";
			cin >> tile;
			table[i][j] = tile;
		}
	}

	for (int i{0};i<n; ++i) {
		for(int j{0};i<n; ++j) {
			if (table[i][j] == "#") {
				string foo = "0";
				table[i][j] = foo;
			}
		}
	}
	cout << table[0][0];
	return 0;
}