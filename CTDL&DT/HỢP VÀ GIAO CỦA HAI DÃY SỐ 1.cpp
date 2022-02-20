#include<iostream>
using namespace std;
#include<set>
#include<vector>
void input(set<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.insert(x);
	}
}
void separate(set<int>a, set<int>b) {
	
	for (auto i : a) {
		if (b.count(i) != 0) {
			cout << i << " ";
		}
	}

}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int m; cin >> m;
		set<int>a;
		set<int>b;
		input(a, n);
		input(b, m);
		set<int>all;

		for (auto i : a) {
			all.insert(i);
		}
		for (auto i : b) {
			all.insert(i);
		}
		for (auto i : all) {
			cout << i << " ";
		}cout << endl;
		separate(a, b);
		cout << endl;
	}
	system("pause");
	return 0;
}
