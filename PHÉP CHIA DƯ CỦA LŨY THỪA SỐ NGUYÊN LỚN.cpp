#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
typedef long long ll;
ll Du(string  a, ll m) {
	ll result = 0;
	for (int i = 0; i < a.size(); i++) {
		result = (result * 10 + (a[i] - '0')) % m;
	}return result;
}
ll Luy_thua(ll a, ll b,ll m) {
	ll res = 1;
	a %= m;
	while (b) {
		if (b % 2 == 1) {
		res *= a;
		res %= m;
	}
	a *= a; a %= m;
	b /= 2; 
	}
	return res%m;
}

int main() {
	int t;
	cin >> t; while (t--) {
		string a; cin >> a;
		ll b, c; cin >> b >> c;
		cout << Luy_thua(Du(a,c), b, c) << endl;
	}

	
}
