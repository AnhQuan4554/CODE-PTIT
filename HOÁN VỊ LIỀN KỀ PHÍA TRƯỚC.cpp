#include<iostream>
using namespace std;
#include<algorithm>
void input(int a[], int n) {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}
void repair(int a[], int n) {
	int start = n - 1;
	while (a[start] < a[start + 1]) {
		start--;
	}
	/*int x = n;
	while (a[start] > a[x]) {
		x--;
	}
	swap(a[start], a[x]);*/
	swap(a[start], a[start + 1]);
	int l = start + 1;
	int r = n;
	while (l > r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[2000];
		int n; cin >> n;
		input(a, n);
		repair(a, n);
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
