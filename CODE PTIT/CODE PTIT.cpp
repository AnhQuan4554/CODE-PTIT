#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;
//ham tim ucln
ll Uoc(ll x, ll y) {
	if (y == 0) {
		return x;
	}
	return Uoc(y, x % y);
}
class PhanSo
{
public:
	friend ostream& operator<<(ostream& os, PhanSo x);
	friend istream& operator>>(istream& is, PhanSo& x);
	friend PhanSo operator + (PhanSo, PhanSo);
	PhanSo(ll, ll);
	~PhanSo();

private:
	ll tu;
	ll mau;
};

istream& operator>>(istream& is, PhanSo& x) {
	is >> x.tu >> x.mau;
	return is;
}
ostream& operator<<(ostream& os, PhanSo x) {
	os << x.tu << "/" << x.mau;
	return os;
}
//Ham cong phan so 
PhanSo operator + (PhanSo x, PhanSo y) {
	PhanSo Tong(1, 1);
	Tong.tu = x.tu * y.mau + y.tu * x.mau;
	Tong.mau = x.mau * y.mau;
	//Rut gon phan so
	ll xx = Uoc(Tong.tu, Tong.mau);
	Tong.tu = Tong.tu / xx;
	Tong.mau = Tong.mau / xx;
	return Tong;
}
PhanSo::PhanSo(ll tu, ll mau)
{
	this->tu = tu;
	this->mau = mau;
}

PhanSo::~PhanSo()
{
}
int main() {
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}