#include<iostream>
#include<vector>
#include<set>
using namespace std;
void Nhap(vector<long long>& a, long long n) {
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xuat(vector<long long>a, set<long long>b) {
	int kt = 0;
	for (long long i = 0; i < a.size(); i++) {
		if (b.count(a[i]) == 1) {
			cout << a[i];
			kt = 1;
			break;
		}
		b.insert(a[i]);
		
	}
	if (kt == 0) {
		cout << "-1";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	vector<long long>a;
	set<long long>b;
	long long n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, b);
	cout << endl;
	}
	return 0;
	system("pause");
}
