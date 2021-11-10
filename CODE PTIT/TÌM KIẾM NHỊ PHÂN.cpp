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
int KT(vector<long long>a,long long so) {
	
	for (long long i = 0; i < a.size(); i++) {
		if (a[i] == so) {
			return 1;
		}
	}return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, a;
		cin >>n>> a;
		vector<long long>b;
		Nhap(b, n);
		cout << KT(b, a);
		cout << endl;
	}
	system("pause");
	return 0;
}
