#include<iostream>
using namespace std;
#include<string>
#include<cmath>
int NT(long long a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)return 0;
	}return 1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			if (NT(i) == 1)
			{
				cout << i << ' ';
			}
		}cout << endl;
	}
	system("pause");
	return 0;
}
