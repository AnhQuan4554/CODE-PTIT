﻿#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
#include<string>
int KQ(long long n,long long k)
{
	long long tong = 0;
	for (long long i = 1; i <= n; i++)
	{
		tong = tong + (i % k);
	}return tong;
}
int main()
{
	
	long long t;
	cin >> t;
	while (t--)
	{
		long long n,k;
		cin >> n>>k;
		cout << KQ(n, k);
		cout << endl;

	}
	system("pause");
	return 0;
}
