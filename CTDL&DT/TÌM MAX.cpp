#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
long long   modu = 1000000007;
void input(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}
int Sum(vector<int>a) {
	long long  sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i]*i ;
		sum %= modu;
	}
	return sum;
}
int main() {
	int t; cin >> t;
	while (t--) {
		vector<int>a;
		int n; cin >> n;
		input(a, n);
		sort(a.begin(), a.end());
		/*for (auto i : a)cout << i << " ";*/
		cout << Sum(a) << endl;
	}
}
