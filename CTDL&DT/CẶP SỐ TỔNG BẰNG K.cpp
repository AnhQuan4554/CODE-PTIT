#include<iostream>
using namespace std;
#include<algorithm>
void input(int* a , int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[1000];
		int cnt = 0;
		int n,k; cin >> n>>k;
		input(a, n);
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == k)cnt++;
			}
		}
		cout << cnt << endl;
	}
	system("pause");
	return 0;
}
