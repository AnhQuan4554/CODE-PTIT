#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void Nhap(vector<int>&a,int n)
{
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
}
int KQ(vector<int>a)
{
	int khoang_cach = abs(a[0] - a[1]);
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (abs(a[i] - a[j]) < khoang_cach) {
				khoang_cach = abs(a[i] - a[j]);
			}
		}
	}return khoang_cach;

}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a;
		Nhap(a, n);
		cout << KQ(a) << endl;
	}
	system("pause");
	return 0;
}
