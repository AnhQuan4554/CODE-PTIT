#include<iostream>
using namespace std;
#include<string>
#include<cmath>
int NT(int a)
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
		long long a;
		cin >> a;
		for (int i = 2; i <= sqrt(a); i++)
	{
		while (a % i == 0&&NT(i)==1)
		{
			cout << i << ' ';
			a = a / i;
		}
	}if (a != 1)cout << a;

		cout << endl;
	}
	
	
	system("pause");
	return 0;
}
