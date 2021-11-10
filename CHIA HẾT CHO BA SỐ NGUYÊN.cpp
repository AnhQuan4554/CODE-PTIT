#include<iostream>
using namespace std;
long long UCLN(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	return UCLN(b, a % b);
}
long long BCNN(long long a, long long b) {
	return (a * b) / UCLN(a, b);
}
//tim uoc cuar ca day
long long KQ(long long a,long long b,long long c, long long N) {
	//so luog chu so ma de yeu cau
	long long start = 1;
	for (long long i = 1; i < N; i++) {
		start = start * 10;
	}
	//return start;
	long long end = start * 10 - 1;
	long long temp = BCNN(a, b);
	long long kq = BCNN(temp, c);
	//return kq;

	for (long long i = start/kq;; i++) {
		if (kq * i >= start && kq * i <= end) {
			return kq*i;

		}
		if (kq * i > end) {
			return -1;
		}

	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long X, Y, Z, N;
		cin >> X >> Y >> Z >> N;
		//cout << BCNN(X, Y );
		cout << KQ(X, Y, Z, N) << endl;;
	}
	system("pause");
	return 0;
}
