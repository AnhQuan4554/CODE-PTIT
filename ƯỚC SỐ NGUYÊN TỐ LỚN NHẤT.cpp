#include<iostream>
using namespace std;
#include<cmath>
int NT(long long  a)
{
	if (a < 2) return 0;
	for (long long i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)return 0;
	}return 1;
}
void Uoc(long long a)
{
	/*
	chia tu lon xuong be thi cai thuong se giam dan
	VD 90 can 90 =9 thi 90/9 =10
	kiem tra so 10 truoc(a/i) roi moi den so chia (i) la 9*/
	for (long long i = sqrt(a); i >= 1; i--)
	{
		if (a % i == 0)
		{
		
		  if (NT(a / i) == 1)
			{
				printf("%lld", a / i);
				break;
			}
		  else if (NT(i) == 1)
		  {
			  printf("%lld", i);
			  break;
		  }
			
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long m;
		cin >> m;
		Uoc(m);
		cout << endl;
	}
	system("pause");
	return 0;
}
