#include<iostream>
using namespace std;
#include<vector>
#include<cmath>
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
void Xuat(long long a)
{
	int kt = 0;
	for (long long i = 2; i <= a/2; i++)
	{
		if (NT(i) == 1 && NT(a - i) == 1) {
			cout << i << " " << a - i << endl;
			kt = 1;
			break;
		}
	}
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a;
		cin >> a; Xuat(a);
	}
	system("pause");
	return 0;
}
