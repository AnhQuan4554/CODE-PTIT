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
	
	SinhVien();
	~SinhVien();

private:
	string Ten;
	string Lop;
	string Ngay_sinh;
	float Diem{};
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
istream& operator >> (istream & in, SinhVien & x) {
	getline(in, x.Ten);
	getline(in, x.Lop);
	getline(in, x.Ngay_sinh);
	in >> x.Diem;
	return in;
}
ostream& operator <<(ostream& ot, SinhVien x) {
	//ham chinh sua ngay sinh
	x.setngaysinh();
	ot << "B20DCCN001" << " " << x.Ten << " " << x.Lop << " " << x.Ngay_sinh << " " << fixed << setprecision(2) << x.Diem;
	return ot;
}
SinhVien::SinhVien()
{
}

SinhVien::~SinhVien()
{
}
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
