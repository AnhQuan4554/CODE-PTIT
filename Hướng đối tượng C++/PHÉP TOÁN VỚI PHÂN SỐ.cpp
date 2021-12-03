#include<iostream>
using namespace std;
struct PhanSo
{
	long long tu, mau;
};
typedef struct PhanSo PS;
int UCLN(long long a, long long  b) {
	if (b == 0)return a;
	return UCLN(b, a % b);
}
void Rut_gon(PS& a) {
	int temp = UCLN(a.tu, a.mau);
	a.tu /= temp;
	a.mau /= temp;
}
void process(PS a, PS b) {
	PS sum;
	sum.tu = (a.tu * b.mau + b.tu*a.mau)* (a.tu * b.mau + b.tu * a.mau);
	sum.mau = (a.mau * b.mau )*(a.mau * b.mau);
	Rut_gon(sum);
	cout << sum.tu << "/" << sum.mau<<" ";
	PS t;
	t.tu = a.tu * b.tu * sum.tu;
	t.mau = a.mau * b.mau * sum.mau;
	Rut_gon(t);
	cout << t.tu << "/" << t.mau;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
