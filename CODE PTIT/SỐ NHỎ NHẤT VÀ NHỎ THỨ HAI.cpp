#include<iostream>
#include<string>
using namespace std;
#include<vector>
void Nhap(vector<long long>&a,int n)
{
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
}
void Xuat(vector<long long>a)
{
	
	for (long long i = 0; i < a.size()-1; i++)
	{
		for (long long j = i + 1; j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				long long x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	int kt = 0;
	if (a[0] == a[ 1]) {
			cout << "-1";
			kt = 1;
		
		}
	if (kt != 1)
	{
		cout << a[0] << ' ' << a[1];
	}
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<long long>a;
		int n;
		cin >> n;
		Nhap(a, n);
		Xuat(a);
		cout << endl;

	}
	system("pause");
	return 0;
}
