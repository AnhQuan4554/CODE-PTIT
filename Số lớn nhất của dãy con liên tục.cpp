
  
  
  #include<iostream>
#include<set>
using namespace std;
#include<vector>
void Nhap(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}
void Xuat(vector<int>a,int k) {
	multiset<int>b;
	//Xuat rbgin la xuat phan tu cuoi cung va lon nhat do ham tu xap xep roi
	for (int i = 0; i < k; i++) {
		b.insert(a[i]);
	}
	//sau khi them cu k phan tu 1 vao set thi xuat phan tu 
	/*sau do xoa di tung phan tu dau nhung phan tu nay phai tim kiem theo cua mnag 
	vecto , vi neu cu xoa dau cua multi thi ko dung vi multiset no dax xap xep lai thu tu phan 
	tu roi con dang xet tung cum k phan tu 1 , va oa di tung phan tu 1 
	theo thu tu tu trai sang phai*/
	for (int i = k; i < a.size(); i++) {
		cout << *b.rbegin()<<" ";
		//sau khi xua xong thi xoa va them phan tu 
		b.erase(b.find(a[i - k]));//tim phan tu co gia tri dau cua mang a trong multiset
		b.insert(a[i]);
	}
	//sau khi xuat den th i=a.size-1 roi no ko qua len de xuat nua do do mk phai xuat not
	cout << *b.rbegin();
}
int main() {
	int t; cin >> t;
	while (t--) {
	vector<int>a;
	int n,k;
	cin >> n>>k;
	Nhap(a, n);
	Xuat(a, k);
		cout << endl;
	}

	system("pause");
	return 0;
}
