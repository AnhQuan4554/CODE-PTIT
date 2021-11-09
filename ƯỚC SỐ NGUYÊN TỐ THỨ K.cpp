#include<iostream>
#include<vector>
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
void Xuat(long long a,int chiso)
{	
	int dem = 0;//vi tri o nho cua b
	vector<int>b;
	for (int i = 2; i <= sqrt(a); i++)
	{;
		while (a % i == 0&&NT(i)==1)
		{
			b.push_back(i);
			a = a / i;
			dem++;
		}
	}
	if (a != 1)b.push_back(a);
	if (chiso >= b.size())cout << "-1";
	else cout << b[chiso];
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
	int a;
	cin >> a;
	int b;
	cin >> b;
	int chiso = b - 1;//vi neu dung vecto thi chi so tu 0;
	Xuat(a,chiso);
	cout << endl;
	}
	
	system("pause");
	return 0;
}
