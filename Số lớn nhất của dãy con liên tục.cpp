 SỐ LỚN NHẤT CỦA DÃY CON LIÊN TỤC

Bài làm tốt nhất
Cho mảng A[] gồm n số nguyên không âm và số k. Hãy tìm số lớn nhất của mỗi dãy con liên tục gồm k phần tử của mảng. Ví dụ với mảng A[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3, ta có kết quả 3 3 4 5 5 5 6.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và số k; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ k < n ≤107; 0≤ A[i] ≤107;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

Output:

2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

3 3 4 5 5 5 6
10 10 10 15 15 90 90

=====================================================================CODE=====================================================================
  
  
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
