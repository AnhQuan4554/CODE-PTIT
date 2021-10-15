#include<iostream>
#include<fstream>
using namespace std;
#include<string>
#include<iomanip>
#define a() a;
class SinhVien
{
public:
	friend istream& operator >> (istream &, SinhVien&);
	friend ostream& operator <<(ostream &, SinhVien);
	void setngaysinh( );
	void setngay_thue();
	SinhVien();
	~SinhVien();

private:

	string Ten;
	string Gioi_tinh;
	string Ngay_sinh;
	string Dia_chi;
	string Ma_so;
	string Ngay_thue;
};
//ham sua ngay sinh
void SinhVien::setngaysinh() {
	
	if (Ngay_sinh[1] == '/') {
		Ngay_sinh.insert(Ngay_sinh.begin() + 0, '0');
	}
	if (Ngay_sinh[4] == '/') {
		Ngay_sinh.insert(Ngay_sinh.begin() + 3, '0');
	}
}
void SinhVien::  setngay_thue() {
	if (Ngay_thue[1] == '/') {
		Ngay_thue.insert(Ngay_thue.begin() + 0, '0');
	}
	if (Ngay_thue[4] == '/') {
		Ngay_thue.insert(Ngay_thue.begin() + 3, '0');
	}
}
istream& operator >> (istream & in, SinhVien & x) {
	getline(in, x.Ten);
	getline(in, x.Gioi_tinh);
	getline(in, x.Ngay_sinh);
	getline(in, x.Dia_chi);
	getline(in, x.Ma_so);
	getline(in, x.Ngay_thue);
	return in;
}
ostream& operator <<(ostream& ot, SinhVien x) {
	//ham chinh sua ngay sinh
	x.setngaysinh();
	x.setngay_thue();
	ot << "00001" << " " << x.Ten << " " << x.Gioi_tinh << " " << x.Ngay_sinh << " " << x.Dia_chi << " " << x.Ma_so << " " << x.Ngay_thue;
	return ot;
}
SinhVien::SinhVien()
{
}

SinhVien::~SinhVien()
{
}
typedef SinhVien NhanVien;//do luoi co 2 bai lien nhau nen vay

int main() {
	NhanVien a();
	cin >> a;
	cout << a;
	system("pause");
	return 0;
}
