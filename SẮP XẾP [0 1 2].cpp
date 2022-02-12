#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<algorithm>
void input(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a;
		input(a, n);
		sort(a.begin(), a.end());
		for (auto i : a) {
			cout << i << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
