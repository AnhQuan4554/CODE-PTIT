#include<iostream>
#include<set>
#include<vector>
using namespace std;
void Nhap(vector<long long>& a, long long n) {
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xep_mang(vector<long long>a,set<long long>&b) {
	for (long long i = 0; i < a.size(); i++) {
		while (a[i] != 0) {
			int x = a[i] % 10;
			b.insert(x);
			a[i] /= 10;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		vector<long long>a;
		Nhap(a, n);
		set<long long>b;
		Xep_mang(a, b);
		//sử dụng con trỏ 
		for (set<long long>::iterator i = b.begin(); i != b.end();i++){
			cout << *i << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
