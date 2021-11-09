#include<iostream>
using namespace std;
#include<vector>
void Nhap(vector<long long>&a, long long n)
{long long x;
	for (long long i = 0; i < n; i++)
	{
		
		cin >> x;
		a.push_back(x);
		
	}
}
void Xuat(vector<long long>a, long long n)
{
	for (long long i = 0; i <n; i++)
	{
		cout << a[i]<<" ";
	}
}
void Hoan_vi(long long& x, long long& y)
{
	long long z = x;
	x = y;
	y = z;
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		vector<long long>a;
		vector<long long>b;
		long long n, chiso;
		cin >> n >> chiso;
		Nhap(a, n);
		long long dem = 0;
		for (long long i = 0; i + chiso != n; i++)
		{
			long long x = a[i + chiso];
			b.push_back(x);
			dem++;
		}
		for (long long i = dem; i < n; i++)
		{
			long long x = a[i + chiso - n];
			b.push_back(x);
		}
		Xuat(b, n);
		cout << endl;
	}
	system("pause");
	return 0;
}
