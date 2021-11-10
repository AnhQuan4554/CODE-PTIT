#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;
ll Uoc(ll a, ll b) {
	if (b == 0)return a;
	return Uoc(b, a % b);
}
class PhanSo
{
public:
	 void rutgon();
	//ham nhap tao
	friend istream& operator>>(istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo);
	PhanSo(ll,ll);//theo de bai nen cai nay them 2 bien
	~PhanSo();

private:
	ll tu;
	ll mau;
};
istream& operator>>(istream&in, PhanSo&x) {

	in >> x.tu;
	in >> x.mau;
	return in;
}
ostream& operator<<(ostream& ot, PhanSo a) {
	ll x = Uoc(a.mau, a.tu);
	a.tu = a.tu / x;
	a.mau = a.mau / x;
	ot << a.tu<<"/";
	ot << a.mau;
	return ot;
}
 void PhanSo::rutgon() {
	 PhanSo a(1,1);
	 ll x = Uoc(a.mau, a.tu);
	 a.tu = a.tu / x;
	 a.mau = a.mau / x;
}
PhanSo::PhanSo(ll tu, ll mau)// dang le trong hung theo main de bai 
{
	this->tu = tu;
	this->mau = mau;
}

PhanSo::~PhanSo()
{
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
