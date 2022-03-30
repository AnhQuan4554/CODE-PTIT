
﻿#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
int n,k;
int* a = new int[n+1000];
vector<string>display;
vector<int>result(n + 1000);
void input() {
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		result[i] = x;
	}
}
//kiem tra co tang dan ko 
int check() {
	for (int x = 1; x <= k-1; x++) {
		if (result[a[x]] > result[a[x+1]])return 0;
	}
	return 1;
}
void Creat() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void Try(int i) {
	for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if (i == k) {
			string add="";
		/*	for (int x = 1; x <= k; x++) {
				cout<<result[a[x]]<<' ';
			}*/
			if (check()) {
				for (int x = 1; x <= k; x++) {
				add += to_string(result[a[x]]);
				if (x != k)add += " ";

				}
				display.push_back(add);
			}
		}
		else {
			Try(i + 1);
		}
	}
}
int main() {
	
	cin >> n;
	input();
	a[0] = 0;
	for (int i = 2; i <= n; i++) {
		k = i;
	Try(1);
	}
	sort(display.begin(), display.end());
	for (int i = 0; i < display.size(); i++) {
		cout << display[i] << endl;
	}

	system("pause");
	return 0;
}
