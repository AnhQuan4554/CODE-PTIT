#include<iostream>
#include<vector>
#include<set>
using namespace std;
int c[100];
set<int>b;
vector<int>a;
void input(set<int>& b, vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		b.insert(x);
	}
	a.push_back(0);
	for (auto i : b) {
		a.push_back(i);
	}
}
void Try(int i, int n, int k) {
	for (int j = c[i - 1] + 1; j <= n - k + i; j++) {
		c[i] = j;
		if (i == k) {
			for (int x = 1; x <= k; x++) {
				cout << a[c[x]] << " ";
			}cout << endl;
		}
		else {
			Try(i + 1, n, k);
		}
	}
}
int main() {
	int n, k; cin >> n >> k;
	
	input(b, a, n); 
	c[0] = 0;
	/*for (int i = 1; i < a.size(); i++) {
		cout << a[i];
	}*/
	Try(1, a.size() - 1, k);
	system("pause");
	return 0;
}
