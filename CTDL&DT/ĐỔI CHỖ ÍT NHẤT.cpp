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
		int n; cin >> n;
		input(a, n);
		for (int i = 0; i < n - 1; i++) {
			int k = i;
			for (int j = i + 1; j < n; j++) {
				if (a[j] < a[k]) {
					k = j;
				}
			}
			if (k != i) {
				cnt++;
				swap(a[i], a[k]);
			}
		}cout << cnt << endl;
	}
	system("pause");
	return 0;
}
