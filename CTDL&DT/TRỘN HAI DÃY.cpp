#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void input(vector<int>& a, vector<int>& c,int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x); c.push_back(x);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n,m; cin >> n>>m;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		input(a, c,n);
		input(b, c, m);
		
		sort(c.begin(), c.end());
		for (int i = 0; i < c.size(); i++) {
			cout << c[i] << " ";
		}cout << endl;
	}
	system("pause");
	return 0;
 }
