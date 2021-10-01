#include<iostream>
using namespace std;
long long UCLN(long long a, long long b)
{
	while (a != b)
	{
		if (a > b)a = a - b;
		if (a < b)b = b - a;
	} return a;
}
long long BCNN(long long a, long long b)
{
	return (a * b) / UCLN(a, b);
}
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		long long a;
		long long b;
		cin >> a >> b;
		cout << BCNN(a, b) << ' ' << UCLN(a, b) << endl;
	}
	system("pause");
	return 0;
}