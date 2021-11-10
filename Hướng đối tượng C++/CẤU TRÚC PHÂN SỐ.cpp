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
void nhap(PS& a) {
	cin >> a.tu;
	cin >> a.mau;
}
void rutgon(PS& a) {
	long long x = Uoc(a.tu, a.mau);
	a.tu = a.tu / x;
	a.mau = a.mau / x;
}
void in(PS a) {
	cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
