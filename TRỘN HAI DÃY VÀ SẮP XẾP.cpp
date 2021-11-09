#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void Nhap(vector<long long>&a,int n)
{
	for (long long i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xap_xep(vector<long long>& a) {
	for (long long i = 0; i < a.size()-1; i++) {
		for (long long j = i + 1; j < a.size(); j++) {
			if (a[i] > a[j]) {
				long long x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
}
void Tron(vector<long long>a,vector<long long>&b)
{
	for (long long i = 0; i < a.size(); i++) {
		b.push_back(a[i]);
	}
}
void Xuat(vector<long long>b) {
	for (long long i = 0; i < b.size(); i++) {
		cout << b[i] << ' ';
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long n,m;
		vector<long long >a;
		vector<long long >b;
		cin >> n>>m;
		Nhap(a, n);
		Nhap(b, m);
		Tron(a, b);
		Xap_xep(b);
		Xuat(b);
		cout << endl;
	}
	system("pause");
	return 0;
}
