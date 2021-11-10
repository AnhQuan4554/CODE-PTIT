#include<iostream>
using namespace std;
#include<vector>
void Nhap(vector<long long>&a, int n) {
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xep(vector<long long>&a) {
	for (long long i = 0; i < a.size()-1; i++) {
		for (long long j = i + 1; j < a.size(); j++) {
					if (a[i] < a[j]) {
			long long z = a[i];
			a[i] = a[j];
			a[j] = z;
		}
		}
	}
}
void Xuat(vector<long long>a,long long so_luong) {
	for (int i = 0; i < so_luong; i++) {
		cout << a[i] << ' ';
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<long long>a;
		long long n, so_luong;
		cin >> n >> so_luong;
		Nhap(a, n);
		Xep(a);
		Xuat(a, so_luong);
		cout << endl;
	}
	system("pause");
	return 0;
}
