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
		int n; cin >> n  ;
		input(a, n);
		int sum = abs(a[0] + a[1]);
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(a[i] + a[j])<abs(sum))sum = (a[i] + a[j]);
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}
