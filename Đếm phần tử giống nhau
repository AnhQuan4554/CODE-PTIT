#include<iostream>
using namespace std;
#include<set>
#include<map>
#include<algorithm>
#include<vector>
/*Xét từng dòng cho vào set, từ set cho vào multiset sau mỗi vòng for của hàng vì multi set sẽ lưu cac phàn phan
tu khác nhau của từng dòng nhưng xét qua các dòng thì sẽ giống nhau VD dòng 1 có chỉ lưu từng đc 1 phần tử duy nhất 
nhưng sau mỗi dòng có thể giống nhau . Nói chung đọc kĩ đề */
void Nhap(long long ** a, long long n ,multiset<long long >&c) {
	for (long long i = 0; i < n; i++) {
		set<long long > b;
		for (long long  j = 0; j < n; j++) {
			cin >> a[i][j];
			//gan vao set de lay tung gia tri khac nnhau thoi
				b.insert(a[i][j]);
		}//sau moi 1 vong cho vao multiset vi dang can tim cac phan tu giong nhau cuar tung vong
		// vao cai multiset no da xep luon thu tu chi minh roi 
		//do o tren dung set nen moi 1 dong chi co 1 pt duy nhat do vay ti phan tu nao xuat hien =n thi thoa man
		for (auto i : b) {
			c.insert(i);
		}
	}
}
void KQ(multiset<long long >c,long long n) {
	vector<long long >a;
	for (auto i : c) {
		a.push_back(i);
	}
	long long  kq = 0;
	for (long long i = 0; i < a.size(); i++) {
		long long  dem = 1;//gia su co 3 pt thi so sanh pt dau tien voi 2 pt con lai thoi do do dem =1
		while (a[i] == a[i+1]&&i<a.size()-1) {//trong visua phải thêm đk này 
			dem++;
			i++;
		}
		if (dem == n) {
			kq++;
		}
	}
	cout << kq;
	//=============
	/*cout << endl;
	for (long long i = 0; i < a.size(); i++) {
		cout << a[i]<<" ";
	}*/
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n; cin >> n;
	multiset<long long >c;
	long long ** a = new long long * [n];
	for (int i = 0; i < n; i++) {
		a[i] = new long long [n];
	}
	Nhap(a, n,c);
	 KQ(c,n);
	 
		cout << endl;
		
	}

	system("pause");
	return 0;
}
