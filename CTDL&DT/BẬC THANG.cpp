#include<iostream>
using namespace std;
#include<algorithm>
typedef long long ll;
const ll modu = 1e9 + 7;
ll n,k;
ll* a = new ll[n + 1000000];

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (ll i = 1; i <= n; i++) {
			a[i] = 0;
		}
		a[1] = a[0] = 1;
		for (ll i = 2; i <= n; i++) {
			for (int j = 1; j <= min(i, k); j++) {
				a[i] += a[i - j];
				a[i] %= modu;
			}
		}cout << a[n];
		cout << endl;
	}
		
	
	system("pause");
	return 0;
}
