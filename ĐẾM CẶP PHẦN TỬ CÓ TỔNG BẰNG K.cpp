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
int xap_xep(vector<int>&a,int k)
{
	int dem = 0;
	for (int i = 0; i < a.size()-1; i++) {
		for (int j = i + 1; j<a.size(); j++) {
			if (a[i] + a[j] == k) {
				dem++;
			}
		}
	}
	return dem;
}
void Xuat(vector<int>a,int n) {
	
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << ' ';
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int k;
		cin >> k;
		vector<int>a;
		Nhap(a, n);
		cout << xap_xep(a, k);
		cout << endl;
	}
	system("pause");
	return 0;
}
