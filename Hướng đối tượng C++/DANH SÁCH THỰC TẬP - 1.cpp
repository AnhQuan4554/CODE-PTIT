#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
struct sinhvien
{
	int STT;
	string MA;
	string Ten;
	string Lop;
	string Email;
	string Doanh_nghiep;
};
typedef struct sinhvien SV;
void Nhap(SV a[],int n) {
	for (int i = 0; i < n; i++) {
		a[i].STT = i + 1;
		cin >> a[i].MA; cin.ignore();
		getline(cin, a[i].Ten);
		cin >> a[i].Lop;
		cin >> a[i].Email;
		cin >> a[i].Doanh_nghiep;
	}
}
//ham xuat 1 thong tin
void Xuat(SV a) {
	cout << a.STT << " " << a.MA << " " << a.Ten << " " << a.Lop << " "
		<< a.Email << " " << a.Doanh_nghiep << endl;
}
bool xap_xep(SV a, SV b) {
	return a.Ten < b.Ten;
}
//ham tim thong tin sv 
void Xuat_ds(SV a[],int q,int n) {
	vector<SV>canxuat;
	while (q--) {
		string x; cin >> x;//ten doan nghiep can tim kiem

		for (int i = 0; i < n; i++) {
			if (a[i].Doanh_nghiep == x) {
				canxuat.push_back(a[i]);
			}
		}
		sort(canxuat.begin(), canxuat.end(), xap_xep);
		for (int i = 0; i < canxuat.size(); i++) {
			Xuat(canxuat[i]);
		}
		canxuat.clear();
	}
}
int main() {
	
	SV a[1000];
	int n; cin >> n;
	Nhap(a, n);
	int q; cin >> q;
	Xuat_ds(a, q, n);
	system("pause");
	return 0;
}
//B17DCCN016
//Le Khac Tuan Anh
//D17HTTT2
//test1@stu.ptit.edu.vn
//VIETTEL
//B17DCCN107
//Dao Thanh Dat
//D17CNPM5
//test2@stu.ptit.edu.vn
//FPT
//B17DCAT092
//Cao Danh Huy
//D17CQAT04-B
//test3@stu.ptit.edu.vn
//FPT
//B17DCCN388
//Cao Sy Hai Long
//D17CNPM2
//test4@stu.ptit.edu.vn
//VNPT
//B17DCCN461
//Dinh Quang Nghia
//D17CNPM2
//test5@stu.ptit.edu.vn
//FPT
//B17DCCN554
//Bui Xuan Thai
//D17CNPM1
//test6@stu.ptit.edu.vn
//GAMELOFT
//1 
//FPT
