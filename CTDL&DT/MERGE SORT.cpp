#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
		}cout << endl;
	}
	system("pause");
	return 0;
 }
