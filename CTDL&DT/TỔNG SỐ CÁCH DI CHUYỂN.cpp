#include<iostream>
using namespace std;
typedef long long ll;
const ll modu = 1e9 + 7;
#include<algorithm>
#include<memory.h>
ll n,k;
ll a[100006];
void Handle() {
	memset(a, 0, sizeof(a));
	a[0] = 1;
	a[1] = 1;
	for (ll i = 2; i <= n; i++) {
		for (ll j = 1; j <= min(i, k); j++) {
			a[i] += a[i - j];
			a[i] %= modu;
		}
	}cout << a[n];
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		Handle();
		cout << endl;
	}
	system("pause");
	return 0;
}
