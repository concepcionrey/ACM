#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main() {
	int k,n;
	std::vector<int> v;
	cin >> k >> n;
	map<int,int> m;
	for(int i{0};i<n;++i) {
		int x{0};
		cin >>x;
		v.push_back(x);
	}


	for(int i{0};i<k;++i) {
		int count{0};
		std::cout << i << '\n';
		for(int j{0};j<v.size();++j) {
			if(i+1 == v[j]) {
				++count;
			}
		}
		m.insert(pair<int,int>(count,i));
	}

/*
	for(auto& x: m) {
		std::cout << x.first << "\n";
	}
	*/
	std::cout << m.size() << '\n';
	return 0;
}