#include <iostream>
#include <vector>

int main () {
	int a{0},b{0},c{0},d{0},e{0},f{0},g{0};
	std::vector<std::vector<int>> v{6,std::vector<int>(6)} ;
	int maxResult{0};
	for(int i{0}; i < 5; ++i) {
		for(int j{0}; j<4; ++j) {
			v[i][j] = 0;
		}
	}
	v[0][1] = 2;
	v[4][5] = 45;
	for(int i{0}; i < 4; ++i) {
		for(int j{0}; j<4; ++j) {
			a = v[i][j];
			b = v[i][j+1];
			c = v[i][j+2];
			d = v[i+1][j+1];
			e = v[i+2][j];
			f = v[i+2][j+1];
			g = v[i+2][j+2];
			int currResult{a+b+c+d+e+f+g};
			if (currResult > maxResult) {
				maxResult = currResult;
			}
		}
	}
			
	std::cout << maxResult << "\n";
	return 0;
}