#include<iostream>
#include<string>
#include<iomanip>
#define a()a;//do de bai yeu cau la a()
using namespace std;
class SinhVien
{
public:
	friend void nhap(SinhVien&);
	friend void in(SinhVien);
	string getNgay_sinh();
	SinhVien();
	~SinhVien();

private:
	string Ten;
	string Lop;
	string Ngay_sinh;
	float Diem{};
};
void nhap(SinhVien& x) {
	getline(cin, x.Ten);
	getline(cin, x.Lop);
	getline(cin, x.Ngay_sinh);
	cin >> x.Diem;
	cin.ignore();//xoa truoc khi nhapp thang tiep theo
}
//ham lay duoc ngay sinh ra de sua
string SinhVien::getNgay_sinh() {
	return this->Ngay_sinh;
}
//Ham chuan hoa ngay sinh
void Chuan_hoa(SinhVien& x) {
	x.getNgay_sinh().insert(x.getNgay_sinh().begin() + 0, 'feve');
	/*if (x.getNgay_sinh()[1] == '/') {
		x.getNgay_sinh().insert(x.getNgay_sinh().begin() + 0, '0');
	}
	if (x.getNgay_sinh()[4] == '/') {
		x.getNgay_sinh().insert(x.getNgay_sinh().begin() + 3, '0');
	}*/
	//cout << x.getNgay_sinh()[1] << endl;;
}

void in(SinhVien x) {
	//Chuan_hoa(x);
	if (x.Ngay_sinh[1] == '/') {
		x.Ngay_sinh.insert(x.Ngay_sinh.begin() + 0, '0');
	}
	if (x.Ngay_sinh[4] == '/') {
		x.Ngay_sinh.insert(x.Ngay_sinh.begin() + 3, '0');
	}
	cout << "B20DCCN001" << " Nguyen Van A" << " " << x.Lop << " " << x.Ngay_sinh<<" "<<fixed << setprecision(2) << x.Diem;
}
SinhVien::SinhVien()
{
}

SinhVien::~SinhVien()
{
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
