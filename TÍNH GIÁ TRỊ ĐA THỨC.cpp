#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#define kt 1000000007;
typedef long long  ll;
ll Mu(ll x, ll n) {//x la phan tu 
	ll mu = 1;
	for (int i = 1; i <= n; i++) {
		mu = mu * x;
		mu %= kt;
	}return mu;
}
ll EX(vector<ll>a, ll x) {
	ll total = 0;//tong
	int index = 0;
	for (ll i = a.size() - 1; i >= 0; i--) {
		total += (a[index] * Mu(x, i)) % kt;
		index++;
	}return total%kt ;
}
int main() {

	int t; cin >> t;
	while (t--) {
		vector<ll>a;
		int n, x;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			int z; cin >> z; a.push_back(z);
		}
		/*for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}*/
		cout << EX(a, x);
		cout << endl;
	}
	system("pause");
	return 0;
}
