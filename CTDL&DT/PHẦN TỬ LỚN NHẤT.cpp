#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
		int k; cin >> k;
		vector<int>a;
		input(a, n);
		sort(a.begin(), a.end());
		for (int i = a.size()-1; i >=a.size()-k; i--) {
			cout << a[i] << " ";
		}cout << endl;
	}
	system("pause");
	return 0; 
}
