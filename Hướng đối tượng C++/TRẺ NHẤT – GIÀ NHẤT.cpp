#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include<algorithm>
class Thongtin
{
public:
	void Nhap() {
		cin >> ten;
		cin >> ngay_sinh;

	}
	string get_ngay_sinh() {
		return ngay_sinh;
	}
	string get_ten() {
		return ten;
	}
	Thongtin();
	~Thongtin();

private:
	string ten, ngay_sinh;
};
bool cmp(Thongtin a, Thongtin b) {
	int ngaya = stoi(a.get_ngay_sinh().substr(0, 1));
	int thanga = stoi(a.get_ngay_sinh().substr(3, 4));
	int nama = stoi(a.get_ngay_sinh().substr(6));
	int ngayb = stoi(b.get_ngay_sinh().substr(0, 1));
	int thangb = stoi(b.get_ngay_sinh().substr(3, 4));
	int namb = stoi(b.get_ngay_sinh().substr(6));
	if (nama != namb)return nama < namb;
	if (thanga != thangb)return thanga < thangb;
	return ngaya < ngayb;


}
Thongtin::Thongtin()
{
}

Thongtin::~Thongtin()
{
}
int main() {
	Thongtin a[200];
	int n; cin >>  n;
	for (int i = 0; i < n; i++) {
		a[i].Nhap();
	}
	sort(a, a + n, cmp);
	cout << a[n - 1].get_ten() << endl<< a[0].get_ten();//gi nhat thi gia tri nho nhat 
	system("pause");
	return 0;
}

//Nam 01/10/1991
//An 30/12/1990
//Binh 15/08/1993
//Tam 18/09/1990
//Truong 20/09/1990
