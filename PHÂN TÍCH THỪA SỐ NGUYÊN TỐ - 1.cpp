#include<iostream>
using namespace std;
#include<cmath>
int NT(int a)
{
	if (a < 2)return 0;
	for (int i = 2; i <=sqrt(a); i++)
	{
		if (a % i == 0)return 0;
	}return 1;
}
void Xuat(long long a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{int dem = 0;
		while (a % i == 0&&NT(i)==1)
		{
			dem++;
			a = a / i;
			
		}
		if(dem>0)cout << i << " " << dem << " ";
	}
	if (a != 1)cout << a << " " << "1";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
	int a;
	cin >> a;
	Xuat(a);
	cout << endl;
	}
	
	system("pause");
	return 0;
}
