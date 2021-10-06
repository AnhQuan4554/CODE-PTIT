#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
#include<string>
void Nhap(vector<long long>&a, long long n)
{
	
	
		for (long long j = 0; j < n; j++)
		{
		long long x;
		cin >> x;
		a.push_back(x);
		}
	
}
void Xep(vector<long long>&a)
{
	for (long long i = 0; i < a.size() - 1; i++)
	{
		for (long long j = i + 1; j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				long long b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
}
void Xuat(vector<long long>b)
{
	for (long long i = 0; i < b.size(); i++)
	{
		cout << b[i] <<' ';
	}
}
int main()
{
	
	long long t;
	cin >> t;
	while (t--)
	{
		vector<long long>a;
		long long n,k;
		cin >> n;
		Nhap(a,n);
		Xep(a);
		cout << a[a.size()-1];
		cout << endl;

	}
	system("pause");
	return 0;
}
