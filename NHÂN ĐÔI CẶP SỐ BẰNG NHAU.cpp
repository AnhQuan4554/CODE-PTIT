#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
typedef long long ll;
void input(vector<ll>& a, ll n) {
	for (ll i = 0; i < n; i++) {
		ll x; cin >> x;
		a.push_back(x);
	}
}
void output(vector<ll>a) {
	vector <ll>b;
	for (int i = 0; i < a.size()-1; i++) {
	
		if (a[i + 1] != 0 && a[i] == a[i + 1]) {
			a[i] *= 2;
			a[i + 1] = 0;
		}
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != 0) {
			cout << a[i] << " ";
		}
		else {
			b.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<ll>a;
		int n; cin >> n;
		input(a, n);
		output(a);
		cout << endl;
	}
	system("pause");
	return 0;
}
