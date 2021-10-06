#include<iostream>
#include<algorithm>
using namespace std;
void Nhap(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int KQ(int* a, int n) {
	int max1 = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] >= a[i]) {
				max1 = max(max1, j - i);
				break;
			}
		}
	}return  max1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << KQ(a, n);
		cout << endl;
	}

	system("pause");
	return 0;
}
