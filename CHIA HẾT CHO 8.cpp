#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
ll change(string a, int k) {//k la so can xet su chia het
	ll dem = 0;
	for (ll i = 0; i < a.size(); i++) {
		ll n = 0;
		for (ll j = i; j < a.size(); j++) {
			n = n * 10 + (a[j] - 48);
			n = n % k;
			if (n == 0) {
				dem++;
				//cout << n<<" ";
			}
		}
	}return dem;
}
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		cout << change(a, 8) - change(a, 24)<<endl;

	}
}
