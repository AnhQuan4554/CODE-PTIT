#include<iostream>
using namespace std;
#include<map>
#include<cmath>
#include<algorithm>
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void Xuat(int a[],int n,int X, multimap<int, int>b) {

	for (int i = 0; i < n; i++) {
		b.insert({abs(X-a[i]),a[i] });//giá trị rồi mới đến chỉ số cần xuất để 
    //vì multimap xắp xếp theo key(first thôi)
		
	}
	for (auto i : b) {
		cout << i.second << " ";
	}cout << endl;
}
int main() {
	int t; cin >> t;
	while (t--) {
int a[100001];
	multimap<int, int>b;
	int n,X; cin >> n>>X;
	Nhap(a, n);
	Xuat(a, n, X, b);
	}
	
	system("pause");
	return 0;
}
