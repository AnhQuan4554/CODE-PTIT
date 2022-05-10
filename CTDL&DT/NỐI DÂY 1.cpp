#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
#include<queue>
#include<algorithm>
struct cmp {
	bool operator() (int a, int b) { 
		return a > b;
	}
};
void Nhap(int * b, int n) {
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		priority_queue <int, vector<int>, cmp > a;
		int n; cin >> n;
		int* b = new int [n];
		Nhap(b, n);
		for (int i = 0; i < n; i++) {
			//cout << b[i] << " ";
			a.push(b[i]);
		}
		long long tong = 0;
		while (a.size() > 1) {
			int x = a.top(); a.pop();
			int y = a.top(); a.pop();
			a.push(x+y);
			tong += x+y;
		}cout << tong << endl;
	}
	system("pause");
	return 0;
}
