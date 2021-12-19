#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<sstream>
#include<fstream>
int kt = 0;
int dem = 1;
class Giang_vien
{
public:
	//ham lay ra thong tin theo truy van (yeu cau cua de bai)
	 friend bool Lay_thong_tin(string x,Giang_vien a) {
		//for (auto i : x)i = tolower(i);
		//for (auto i : Ten)i = tolower(i);//dua tat ca ve viet thuong
		for (int i = 0; i < x.length(); i++) {
			if (x[i] >= 'A' && x[i] <= 'Z')x[i] += 32;
		}
		for (int i = 0; i < a.Ten.length(); i++) {
			if (a.Ten[i] >= 'A' && a.Ten[i] <= 'Z')a.Ten[i] += 32;
		}
		if (a.Ten.find(x) != string::npos)return 1;
		else return 0;;
		

	}
	//ham lay bo mon
	string Tat_bo_mon() {//lay chu dau cac bo mon
		stringstream x(Bo_mon);
			string tmp;
			string result;
		while (x >> tmp) {
			if (tmp[0] >= 'a' && tmp[0] <= 'z')tmp[0] -= 32;
			result += tmp[0];
	
		}
		return result;
	}


	friend istream& operator >> (istream &in,Giang_vien& x) {
		if (kt == 0)cin.ignore(); kt++;

		x.Ma = dem; dem++;
		getline(in, x.Ten);
		getline(in, x.Bo_mon);
		return in;
	}
	friend ostream& operator<<(ostream &ot,Giang_vien x) {
		if (x.Ma >= 10)ot << "GV" << x.Ma;
		else ot <<"GV0"<< x.Ma;
		ot << " " << x.Ten << " " << x.Tat_bo_mon() << endl;
		return ot;
	}
	Giang_vien();
	~Giang_vien();

private:
	string Ten;
	string Bo_mon;
	int Ma{};
};
//ham xuat thong tin
void Xuat_theo_yeu_cau(Giang_vien a[], int n, string x) {
	cout << "DANH SACH GIANG VIEN THEO TU KHOA " << x <<":\n";
	for (int i = 0; i < n; i++) {
		if (Lay_thong_tin(x,a[i]) == 1)cout << a[i];
	}
}
Giang_vien::Giang_vien()
{
}

Giang_vien::~Giang_vien()
{
}
int main() {
	Giang_vien a[1000]; int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int q; cin >> q;
	while (q--) {
		string x; cin >> x;
		Xuat_theo_yeu_cau(a, n, x);
	}


	system("pause");
	return 0;
}
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
