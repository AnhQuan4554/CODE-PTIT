#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
typedef long long ll;
void input(vector<ll>& a, long long n) {
	for (ll i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		vector<ll>a;
		vector<ll>b;
		int n, m;
		cin >> n >> m;
		input(a, n);
		input(b, n);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		cout << a[a.size() - 1] * b[0] << endl;
	}
	system("pause");
	return 0;
}
