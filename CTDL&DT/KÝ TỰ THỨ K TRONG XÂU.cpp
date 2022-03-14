#include<iostream>
using namespace std;
typedef long long ll;
ll Mu(ll a, ll b) {
	if (b == 0)return 1;
	ll x = Mu(a, b / 2);
	if (b % 2 == 0)return x * x;
	else {
		return x * x * a;
	}
}

int KQ(ll n, ll k) {
	ll lenght = Mu(2, n - 1);
	while (1) {
		if (n == 1)return 1;
		if (lenght == k) {
			return n;
		}
		if (lenght < k) {
			k = lenght - (k - lenght);
		}
		lenght /= 2;
		n--;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		char x = KQ(n, k) + 64;
		cout << x << endl;
	}
	system("pause");
	return 0;
}
