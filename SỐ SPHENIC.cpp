#include<iostream>
using namespace std;
#include<string>
#include<cmath>
int KT(long long a)
{
	long long b = a;
	int so_luong_thua_so = 0;
	for (int i = 2; i <= sqrt(b); i++)
	{
		int dem = 0;
		while (a % i == 0)
		{
			dem++;
			a = a / i;
			if (dem > 1)return 0;
		}
		if (dem == 1)so_luong_thua_so++;
	}if (a != 1)so_luong_thua_so++;
	return so_luong_thua_so;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a;
		cin >> a;
		 if (KT(a) == 3)cout << "1" << endl;
		else cout << "0" << endl;
	}
	system("pause");
	return 0;
}
