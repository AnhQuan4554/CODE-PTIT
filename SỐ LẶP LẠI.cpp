#include<iostream>
using namespace std;
#include<cmath>
long long Uoc(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	return Uoc(b, a % b);
}
//tim so luong chu so can them vs so a co 3 chu so 
long long nhan(long long a) {
	long long tich = 1;
	while (a > 10) {
		tich = tich * 10;
		a /= 10;
	}return tich;
}
void Tim_so(long long a, long long x, long long y, long long& P, long long& Q) {
	while (x--) {
		P = P * nhan(a) + a;
	}
	while (y--) {
		Q = Q * nhan(a) + a;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, x, y;
		long long Q = 0, P = 0;
		cin >> a >> x >> y;
		for (long long i = 0; i < Uoc(x, y); i++) {
			cout << a;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
