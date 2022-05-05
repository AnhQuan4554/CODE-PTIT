#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<int>a[1002];
		int n, m; cin >> n >> m;//n la so diem , m la so hang
		for (int i = 1; i <= m; i++) {
			int u, v; 
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for (int i = 1; i <= n; i++) {
			cout << i << ": ";
			for (int j = 0; j < a[i].size(); j++) {
				cout << a[i][j] << " ";
			}cout << endl;
		}
	}
	system("pause");
	return 0;
}
