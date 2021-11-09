#include<iostream>
#include<string>
using namespace std;
#include<vector>
long long DU(long long x, long long y,long long z)
{
	long long tich = 1;
	for (long long i = 1; i <=y; i++)
	{
		tich = (tich * x % z);
	}return tich;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, z;
		cin >> x >> y>>z;
		cout << DU(x, y,z);
		cout << endl;

	}
	system("pause");
	return 0;
}
