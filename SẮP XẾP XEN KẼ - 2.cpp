#include<iostream>
#include<vector>
#include<set>
using namespace std;
void Nhap(vector<long long>&a, int n) {
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		a.push_back(x);

	}
}
void Sap_xep(vector<long long>& a) {
	for (long long i = 0; i < a.size()-1; i++) {
		for (long long j = i + 1; j < a.size(); j++) {
			if (a[i] < a[j]) {
				long long temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void Xuat(vector<long long>a) {
	for (int i = 0; i <= (a.size() - 1) / 2; i++) {
		if (a[i] == a[a.size() - 1 - i]&&i== a.size() - 1 - i) {
			cout << a[i] << " ";
		}
		else {
			cout << a[i] << " " << a[a.size() - 1 - i]<<" ";
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<long long>a;
		long long n;
		cin >> n;
		Nhap(a, n);
		Sap_xep(a);
		Xuat(a);
		cout << endl;
	}
	system("pause");
	return 0;
}
