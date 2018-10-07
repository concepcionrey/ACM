#include <iostream>
#include <stack>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll n;
string str{};
set<ll> s;

int main() {

	cin >> n >> str;
	vector<ll> v;
	for(int i = 1; i <= n; ++i) {
		s.insert(i);
	}

	int count = 0;
	int tracker = 0;
	vector<ll> holder;
	while(v.size() != n) {
		if(str[count] == 'L' && v.empty()) {
			ll a = *s.find(((s.size()/2))+1);
			v.push_back(a);
			s.erase(a);
			v.push_back(a-1);
			s.erase(a-1);
			++count;
			++count;
		} else if (str[count] == 'R' && v.empty()) {
			ll a = *s.begin();
			v.push_back(a);
			s.erase(a);
			v.push_back(a+1);
			s.erase(*s.begin());
			
			++count;
			++count;
		} else if(str[(count-1)] == 'R') {
			if(v.back() < *s.begin()) {
				ll a = *s.begin();
				v.push_back(a);
				s.erase(a);
				++count;
			} else {
				ll temp = *s.begin();
				ll back = v.back();
				/*
				for(ll i = 0; i < (back-temp); ++i) {
					ll curr = v.back();
					holder.push_back(curr);
					v.pop_back();
				}
				*/
				cout << "gadga\n";
				v.insert(v.end()-2,temp);
				s.erase(temp);
				/*
				for(ll i = holder.size()-1; i >=0; --i){
					v.push_back(holder[i]);
				}
				holder.clear();
				*/
				++count;
			}
		} else {

			if(str[(count-1)] == 'L') {
				if(v.back() > *s.begin()) {
					ll a = *s.begin();
					v.push_back(a);
					s.erase(a);
					++count;
				} else {
					ll temp = *s.begin();
					ll back = v.back();
					/*
					for(ll i = 0; i < (temp-back); ++i) {
						ll curr = v.back();
						holder.push_back(curr);
						v.pop_back();
					}
					*/
					//for(auto &n: s) cout << n << "e\n";
					v.insert(v.begin()+1,temp);
					s.erase(temp);
					/*
					for(ll i = holder.size()-1 ; i >= 0; --i) {
						v.push_back(holder[i]);
					}
					holder.clear();
					*/
				}
				++count;
			}
		}
	}


	for (auto &n: v) {
		cout << n << '\n';
	}
	return 0;
}
