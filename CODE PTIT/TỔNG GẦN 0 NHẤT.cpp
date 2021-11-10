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
long long KQ(vector<long long>a)
{
	long long tong = abs(a[0] + a[1]);
	for (long long i = 0; i < a.size() - 1; i++) {
		for (long long j = i + 1; j < a.size(); j++) {
			if (abs(a[i] + a[j]) < abs(tong)) {
				tong = a[i] + a[j];
			}
		}
	}return tong;

}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long n;
		vector<long long >a;
		cin >> n;
		Nhap(a, n);
		cout << KQ(a);
		cout << endl;
	}
	system("pause");
	return 0;
}
