#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
using item = std::vector<pair<int,pair<int,int>>>;

int find(int u) {

}

int main() {
	int n,r,q;
	cin >> n >> r;
	
	item v;
	std::vector<pair<int,int>> f;
	std::vector<int> res;

	for (int i{0}; i < n; ++i) {
		int a,b,c;
		cin >> a >>b >>c;
		v.push_back({c,{a,b}});
	}

	std::sort(v.begin(),v.end());


	cin >> q;
	for(int i{0}; i < q; ++i) {
		int u,v;
		cin >> u >> v;
		f.push_back({u,v});
	}

	 item::iterator it;
	for(int i{0}; i < q; ++i) {
		int weight{0};
		int u = it->q[i].first;
		int v = it->q[i].second;
	}




	return 0;
}