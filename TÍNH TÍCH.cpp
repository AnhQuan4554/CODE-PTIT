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
long long KQ(vector<long long>a,vector<long long>b)
{
	return a[a.size() - 1] * b[0];
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
		Xap_xep(a);
		Xap_xep(b);
		cout << KQ(a,b);
		cout << endl;
	}
	system("pause");
	return 0;
}
