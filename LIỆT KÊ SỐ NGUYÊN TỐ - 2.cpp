#include<iostream>
using namespace std;
#include<cmath>
int NT(int  a)
{	
	if (a == 1) return 0;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)return 0;
	}return 1;
}
void Xuat(int m, int n)
{
	for (int i = m; i <= n; i++)
	{
		if (NT(i) == 1)cout << i << " ";
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int m, n;
		cin >> m >> n;
		Xuat(m, n);
		cout << endl;
	}
	system("pause");
	return 0;
}
