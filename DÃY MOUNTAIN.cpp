#include<iostream>
using namespace std;
#include<string>
typedef long long ll;
#include<algorithm>
typedef long long ll;
void input(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int check(int a[], int l, int r) {
	int quality = ((r - l + 1) % 2 == 0) ? (r - l + 1) / 2-1 : (r - l + 1) / 2;
	for (int i = l; i < l+quality; i++) {
		if (a[i] > a[i + 1])return 0;
		}
	for (int i = l+quality; i < r; i++) {
		if (a[i] < a[i + 1])return 0;
	}
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[20000];
		int n; cin >> n;
		input(a, n);
		int l, r; cin >> l >> r;
		if (check(a, l, r) == 1)cout << "Yes\n";
		else {
			cout << "No\n";
		}
	}
	system("pause");
	return 0;
}
