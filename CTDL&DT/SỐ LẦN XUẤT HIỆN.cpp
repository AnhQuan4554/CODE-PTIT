#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
#include<algorithm>

void input(vector<pair<int, int>>&a,vector<int>&b, int n,int num) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		b.push_back(x);
		a[i].first = abs(num - x);
		a[i].second = i;
	}
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int dem = 0;
		int *a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				dem++;

			}
			
		}
		if (dem == 0) {
		cout << "-1";
		}
		else
		cout << dem;
		
		cout << endl;
	}
	system("pause");
	return 0;
}
