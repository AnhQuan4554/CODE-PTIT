#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
void Nhap(vector<long long>& a,long long n) {
	for (long long i = 0; i < n - 1; i++) {
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xep(vector<long long>& a) {
	for (long long i = 0; i < a.size() - 2; i++) {
		for (long long j = i + 1; j < a.size() - 1; j++) {
			if (a[i] > a[j]) {
				long long x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
}
void Xuat(vector<long long>a) {
	for (long long i = 0; i < a.size(); i++) {
		if (a[i] + 1 != a[i + 1]) {
			cout << a[i] + 1;
			break;
		}
	}
}
int main() {
	int t;
	
	cin >> t;
	while (t--) {
		long long n,so;
		vector<long long>a;
		cin >> n;
		Nhap(a, n);
		Xep(a);
		Xuat(a);
		cout << endl;
	}
}
