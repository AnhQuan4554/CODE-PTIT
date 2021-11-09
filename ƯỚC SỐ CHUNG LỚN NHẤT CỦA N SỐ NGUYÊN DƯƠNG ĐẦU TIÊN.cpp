#include<iostream>
using namespace std;
long long UCLN(long long a, long long b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}
long long BCNN(long long a, long long b)
{
	return (a * b) / UCLN(a, b);
}
long long KQ(long long n)
{
	long long a = 1;
	for (long long i = 2; i <= n; i++)
	{
		a = BCNN(a, i);
	}return a;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << KQ(n) << endl;
	}
	system("pause");
	return 0;
}
