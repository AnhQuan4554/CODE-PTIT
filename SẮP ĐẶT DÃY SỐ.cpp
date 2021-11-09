#include<iostream>
#include<string>
using namespace std;
#include<vector>
void Nhap(vector<long long >&a,long long n)
{
	for (long long i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
	a.push_back(x);

	}
}
void Xep(vector<long long >&a)
{
	vector<long long>b;
	long long chiso = 0;
	long long dai = a.size();
	for (long long i = 0; i < a.size(); i++)
	{
		int kt = 0;
		for (long long j = 0; j < a.size(); j++)
		{
			if (a[j] == i)
			{
				kt = 1;
			}
		}
		if (kt == 1)b.push_back(i);
		else b.push_back(-1);
	}
	for (long long i = 0; i < b.size(); i++)
	{
		cout << b[i] << ' ';
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<long long>a;
		long long n;
		cin >> n;
		Nhap(a, n);
		Xep(a);
		
		cout << endl;
	}
	system("pause");
	return 0;
}
