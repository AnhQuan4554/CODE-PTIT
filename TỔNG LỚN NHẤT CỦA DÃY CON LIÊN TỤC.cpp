#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#include<algorithm>
void input(vector<ll>& a, ll n) {
	for (ll i = 0; i < n; i++) {
		ll x; cin >> x;
		a.push_back(x);
	}
}
ll output(vector<ll>a) {
	ll result = a[0];
	ll tong = 0;
	for (int i = 0; i < a.size(); i++) {
		tong = max(a[i],tong + a[i]);
		result = max(tong, result);
	}return result;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<ll>a;
		ll n; cin >> n;
		input(a, n);
		cout << output(a) << endl;
	}
	system("pause");
	return 0;
}
