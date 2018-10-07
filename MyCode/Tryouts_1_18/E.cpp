#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll n,gen,sum;
vector<ll> v;

int main() {
	sum = 0;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		cin >> gen;
		v.push_back(gen);
	}

	if(n % 2 != 0) {
		ll sumA = 0;
		ll sumB = 0;
		ll mid = (0+n)/2;
		for(ll j = 0; j < v.size(); ++j) {
			if (j != mid) {
				sumA+= v[j];
			}
		}
		sumB = v[mid];
		sum = max(sumA,sumB);
	} else {
		ll count = 0;
		ll sumA = 0;
		ll sumB = 0;
		for(ll j = 0; j < v.size(); ++j) {
			if (count < 2) {
				sumA+=v[j];
				++count;
			} else {
				++j;
				count = 0;
			}
		}
		for(ll j = 2; j < v.size(); ++j) {
			if (count < 2) {
				sumB+=v[j];
				++count;
			} else {
				++j;
				count = 0;
			}
		}
		sum = max(sumA,sumB);
	}

	cout << sum << '\n';
	return 0;
}