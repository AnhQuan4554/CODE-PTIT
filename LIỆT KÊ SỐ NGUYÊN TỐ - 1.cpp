#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
#include<string>
int NT(long long a)
{
	if (a < 2)return 0;
	else
	{
		for (long long i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)return 0;
		}return 1;
	}
}
void Xu_li(long long a, long long b)
{
	long long start = a < b ? a : b;
	long long end = a > b ? a : b;
	for (long long i = start; i <= end; i++)
	{
		if (NT(i) == 1)cout << i << ' ';
	}
}
int main()
{
	
	long long a, b;
	cin >> a >> b;
	Xu_li(a, b);
	system("pause");
	return 0;
}
