#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	long long n{0},p{0}, difference{0}, score{0}, counter{0};
	cin >> n >> p;
	counter = n-1;
	std::vector<long long> v;
	for (int i{0}; i < n; ++i) {
		long long dist{0};
		cin >> dist;
		v.push_back(dist);
	}
	std::sort(v.begin(), v.end());
	std::reverse(v.begin(),v.end());


	for(auto &n: v) {
		score = (counter+1)*p;
		difference = score - n;
		if (difference > 0) {
			for (auto &n : v) {
				n +=difference;
			}
		}
		--counter;
	}

		cout << v[n-1] << "\n";
		return 0;
	}