#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a%b); }

struct rational_t { ll nu, de;
	rational_t(const ll &n = 0, const ll &d = 1) {
		ll g = gcd(abs(n), abs(d)); nu = n / g; de = d / g;
		if (de < 0) { nu = -nu; de = -de; } }
		rational_t operator+(const rational_t& b) const
		{ return rational_t( nu*b.de+de*b.nu, de*b.de ); }
		rational_t operator-(const rational_t& b) const
		{ return rational_t( nu*b.de-de*b.nu, de*b.de ); }
		rational_t operator-() { return rational_t(-nu, de); }
		rational_t operator*(const rational_t& b) const
		{ return rational_t( nu*b.nu, de*b.de ); }
		rational_t operator/(const rational_t& b) const
		{ return rational_t( nu*b.de, de*b.nu ); }
		bool operator== (const rational_t & b) const {return nu * b.de == b.nu * de;}
		bool operator== (const int &k) const { return nu == k * de; }
		bool operator< (const rational_t& b) const { return nu * b.de < b.nu * de; }};


		rational_t computeR(const vector<ll> &v, ll index) { 	
			if(index == v.size()-1) {
				rational_t base(v[index]);
				return base;
			}
			rational_t f_1(v[index],1);
			rational_t one(1);
			rational_t f_2 = one/computeR(v,++index);
			return f_1 + f_2;
		}

		void recover (ll p, ll q, vector<ll> &out, bool isFirst) {
			if(p% q == 0) {
				if (isFirst) {
					out.push_back(p/q);
				} else {
					out.push_back(abs(p/q));
				}
				return;
			}
			if (isFirst) {
				out.push_back(p/q);
			} else {
				out.push_back(abs(p/q));
			}
			recover(q, (p%q), out, false);
		}
		int main() {
			ios::sync_with_stdio(0); cin.tie(0);
			ll n1,n2,n1End,n2End;
			ll caseNum=1;
			while(true) {
				cin >> n1 >> n2;

				if(!n1 && !n2) {
					break;
				}

				std::vector<ll> n1_v(n1);
				std::vector<ll> n2_v(n2);
				std::vector<ll> temp;

				for(auto &n: n1_v) {
					ll temp;
					cin>> temp;
					n = temp;
				}

				for(auto &n: n2_v) {
					ll temp;
					cin>> temp;
					n = temp;
				}

				rational_t res1 = computeR(n1_v,0);
				rational_t res2 = computeR(n2_v,0);
				rational_t addRes = res1+res2;
				rational_t subRes = res1 - res2;
				rational_t mulres = res1*res2;
				rational_t divRes = res1/res2;

				cout << "Case " << caseNum << ":\n";
				++caseNum;
				cout << addRes.nu <<'\n';

				recover(subRes.nu,subRes.de,temp,true);
				for(auto &n: temp) {
					cout << n <<' ';
				}
				cout << '\n';
				temp.clear();
				recover(mulres.nu,mulres.de,temp,true);
				for(auto &n: temp) {
					cout << n <<' ';
				}
				cout << '\n';
				temp.clear();
				recover(divRes.nu,divRes.de,temp,true);
				for(auto &n: temp) {
					cout << n <<' ';
				}
				cout << '\n';
			}

			return 0;
		}