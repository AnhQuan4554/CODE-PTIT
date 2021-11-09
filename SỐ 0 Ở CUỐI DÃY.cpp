#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
#include<string>
void Nhap(vector<long long >&a, long long n)
{
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xep(vector<long long>& a,vector<long long>&b)
{
	long long dem = 0;
	for (long long i = 0; i < a.size(); i++)
	{
		if (a[i] != 0) {
			cout << a[i] << ' ';
		}
		if (a[i] == 0)dem++;

	}
	while (dem--)
	{
		cout << "0" << ' ';
	}

}
void Xuat(vector<long long>a)
{
	for (long long i = 0; i < a.size(); i++)
	{
		cout << a[i] << ' ';
	}
}
int main()
{
	
	long long t;
	cin >> t;
	while (t--)
	{
		vector<long long>a;
		vector<long long>b;
		long long n;
		cin >> n;
		Nhap(a, n);
		Xep(a,b);
	//	Xuat(b);
		cout << endl;
	}
	system("pause");
	return 0;
}
