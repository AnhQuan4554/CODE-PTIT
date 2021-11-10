#include<iostream>
using namespace std;
long long Uoc(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	return Uoc(b, a % b);
}
struct PhanSo {
	long long tu;
	long long mau;
};
typedef struct PhanSo PS;
void nhap(PS& p) {
	cin >> p.tu;
	cin >> p.mau;
}
void Rut_gon(PS& p) {
	long long x = Uoc(p.tu, p.mau);
	p.tu = p.tu / x;
	p.mau = p.mau / x;
}
PS tong(PS& p, PS& q) {
	PS t;
	/*Rut_gon(p);
	Rut_gon(q);*/
	if (p.mau == q.mau) {
		t.tu = p.tu + q.tu;
		t.mau = p.mau;
	}
	else {
		t.tu = p.tu * q.mau + q.tu * p.mau;
		t.mau = p.mau * q.mau;
	}
	return t;
}
void in(PS t) {
	Rut_gon(t);
	cout << t.tu << "/" << t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
