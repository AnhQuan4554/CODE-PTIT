
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
	int t; cin >> t;
	while (t--) {
		int n,num; cin >> n;
		cin >> num;
		vector<pair<int, int>>a(n);
		vector<int>b;
		input(a,b, n,num);
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size();i++) {
			cout << b[a[i].second ]<<" ";
		}
	
		
		cout << endl;
	}
	system("pause");
	return 0;
}
