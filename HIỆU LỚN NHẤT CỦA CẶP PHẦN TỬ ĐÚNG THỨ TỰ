#include<iostream>
#include<vector>
using namespace std;
void Nhap(vector<long long >& a, long long  n) {
	for (long long i = 0; i < n; i++) {
		long long  x;
		cin >> x;
		a.push_back(x);
	}
}
long long Tong(vector<long long>a) {
	long long max = 0;
	for (long long i = 1; i < a.size() ; i++) {
		for (int j = 0; j <i; j++) {
			if (a[i] - a[j] > max) {
				max = a[i]-a[j];
			}
		}
	}return max;
}
int main() {
	int  t;
	cin >> t;
	while (t--) {
		vector<long long >a;
		long long  n;
		cin >> n;
		Nhap(a, n);
		if (Tong(a) == 0) {
			cout << "-1";
		}
		else {
			cout << Tong(a);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
