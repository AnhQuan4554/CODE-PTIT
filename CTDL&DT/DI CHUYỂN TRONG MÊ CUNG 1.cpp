#include<iostream>
using namespace std;
#include<vector>
vector<string>result;
void input(int a[][100], int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}
void Try(int i, int j, int n, int a[][100], string b) {
	if (i == n && j == n) {
		result.push_back(b);
		return;
	}
	if (i < n && a[i + 1][j] == 1) {
		
		Try(i + 1, j, n, a, b+"D");
	}
	if (j < n && a[i][j + 1] == 1) {
	
		Try(i, j + 1, n, a, b+"R");
	}
}
int main() {

	int t; cin >> t;
	while (t--) {
		result.clear();
		int a[100][100];
		string b="";
		int n;
		cin >> n;
		input(a, n);
		if(a[1][1]==1)
		Try(1, 1, n, a, b);
		if (result.size()) {
			for (int i = 0; i < result.size(); i++) {

				cout << result[i] << " ";
			}
		}
		else cout << -1;
		cout << endl;
	}
	system("pause");
	return 0;
}
