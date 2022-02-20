#include<iostream>
using namespace std;
#include<vector>
#include<set>
int check = 1;
void input(int* a,set<int>&b, int k) {
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
		b.insert(a[i]);
	}
}
void handle(int *a,int n,int k) {
	int i = k;
	while (i >= 1 && a[i] == n-k+i) {
		
		i--;
	}
	if (i <= 0) {
		check = 0;
	}
	else {
		a[i]++;
		for (int j = i + 1; j <=k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int a[1000];
		set<int>b;
		int n, k; cin >> n >> k;
		input(a,b, k);
		handle(a, n, k);
		int count = 0;
		for (int i = 1; i <= k; i++) {
			if (b.count(a[i]) == 0)count++;
		}
		if (count != 0)cout << count;
		else cout << k;
		cout << endl;


	}
	system("pause");
	return 0;
}
