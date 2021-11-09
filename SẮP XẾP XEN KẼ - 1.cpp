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
void xap_xep(vector<int>&a)
{
	for (int i = 0; i < a.size()-1; i++) {
		for (int j = i + 1; j<a.size(); j++) {
			if (a[i] > a[j]) {
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}

}
void Xuat(vector<int>a,int n) {
	
	int end = (a.size() % 2 == 0) ? a.size() / 2 : (a.size() / 2 + 1);
	for (int i = 0; i < end; i++) {
		if (a[a.size() - 1 - i] == a[i]) {
			cout << a[i];
		}
		else {
		cout << a[a.size() - 1 - i] << ' ' <<a[i] <<' ';
		}

	}
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
		xap_xep(a);
		Xuat(a,n);
		cout << endl;
	}
	system("pause");
	return 0;
}
