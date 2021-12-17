#include<iostream>
using namespace std;
#define MODE 1000000007
typedef long long ll;
//ham tinh tic a^b
ll POW(ll a, ll b) {
	ll res = 1;
	a %=  MODE;
	while (b) {
		if (b % 2 == 1) {
			res *= a;
			res %= MODE;
		}
		
			a *= a;
			a %= MODE;
			b /= 2;

	}return res % MODE;
}
//ham tinh 1/a!
ll module(ll a, ll mode) {
	return POW(a, mode - 2);
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n>> k;
		ll a[100001];
		 a[0] = 1;
		for (ll i = 1; i <= n; i++) {
			a[i] = a[i - 1] * i;
			a[i] %= MODE;
		}
		cout << a[n] % MODE * module(a[k] * a[n - k] % MODE, MODE)%MODE<<endl;
	}
	system("pause");
		return 0;
}
