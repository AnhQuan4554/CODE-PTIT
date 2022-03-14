#include<iostream>
using namespace std;
#include<algorithm>
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		int a[1000];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int max1 = -1000;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if (sum < 0)sum = 0;
			max1 = max(max1, sum);
		}
		cout << max1 << endl;
	}
	system("pause");
	return 0;
}
