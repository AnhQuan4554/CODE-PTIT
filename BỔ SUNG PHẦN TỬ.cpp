#include<iostream>
#include<string>
using namespace std;
#include<sstream>
#include<vector>
#include<algorithm>
void input(vector<int>&a,int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}
void out(vector<int>a) {
	int dem = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] + 1 < a[i + 1]) {
			for (int j = a[i] + 1; j < a[i + 1]; j++) {
				dem++;
			}
		}
	}cout << dem;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<int>a;
		int n; cin >> n;
		input(a, n);
		sort(a.begin(), a.end());
		
		out(a);
		cout << endl;
	}
	system("pause");
	return 0;
}
