#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		vector<int>a[1002];
		int n,m ; cin >> n >> m;
		for (int i = 1; i <= m; i++) {
			int v, e; cin >> v >> e;
			a[v].push_back(e);
		}
		for (int i = 1; i <= n; i++) {
			cout << i << ": ";
			for (int x : a[i]) {
				cout << x << " ";
			}cout << endl;
		}
	}
	system("pause");
	return 0;
}
