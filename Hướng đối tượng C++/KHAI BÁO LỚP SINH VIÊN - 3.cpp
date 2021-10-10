#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<sstream>
#define a() a;
using namespace std;
class SinhVien
{
public:
	friend ostream& operator <<(ostream &, SinhVien);
	friend	istream& operator >>(istream &, SinhVien &);
	friend void Chuan_hoa(SinhVien&);
	
	SinhVien();
	~SinhVien();

private:
	string Ten;
	string Lop;
	string Ngay_sinh;
	float Diem{};
};
//ham sua tung tu trong ten
void Sua(string &a) {
	if (a[0] <= 122 && a[0] >= 97) {
		a[0] -= 32;
	}
	for (int i = 1; i < a.size(); i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			a[i] += 32;
		}
	}
}
void Chuan_hoa(SinhVien &a) {
	//chuan hoa ho ten
	string es = a.Ten;//chuoi lay ra
	//xoa di toan bo string a de ti lay vao 
	a.Ten.erase(a.Ten.begin() + 0, a.Ten.begin() + a.Ten.size());
	stringstream s(es);
	string temp;
	while (s>>temp)
	{
		Sua(temp);
		a.Ten.insert(a.Ten.begin() + a.Ten.size(), temp.begin() + 0, temp.begin() + temp.size());
		a.Ten.insert(a.Ten.begin() + a.Ten.size(), ' ');//sẽ thùa 1 dấu cách
	}
	
	//chuan hoa ngay sinh
	if (a.Ngay_sinh[1] == '/') {
		a.Ngay_sinh.insert(a.Ngay_sinh.begin() + 0, '0');
	}
	if (a.Ngay_sinh[4] == '/') {
		a.Ngay_sinh.insert(a.Ngay_sinh.begin() + 3, '0');
	}
}
istream& operator >>(istream& in, SinhVien& x) {
	getline(in, x.Ten);
	getline(in, x.Lop);
	getline(in, x.Ngay_sinh);
	in >> x.Diem;
	
		return in;
}

ostream& operator <<(ostream& os, SinhVien x) {
	//Ham chuan hoa ngay thang nam sinh
	Chuan_hoa(x);
	//khong can them dau " " truoc lop vi thua 1 dau cach từ lúc đồng bộ hóa rồi 
	os << "B20DCCN001" << " " << x.Ten  << x.Lop << " " << x.Ngay_sinh <<" "<< fixed << setprecision(2) << x.Diem;
	return os;
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
