#include<iostream>
using namespace std;
typedef long long ll;

void input(ll* a, ll n) {
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll* a = new ll[n + 10000];
		ll* b = new ll[n + 10000];
		input(a, n);
		input(b, n - 1);
		int check = 0;
		for (ll i = 1; i <= n - 1; i++) {
			if (a[i] != b[i]) {
				cout << i << endl;
				check = 1;
				break;
			}
		}
		if (check == 0)cout << n << endl;
	}
}
