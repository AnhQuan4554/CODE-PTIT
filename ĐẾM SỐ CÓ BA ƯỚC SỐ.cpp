#include<iostream>
#include<cmath>
using namespace std;
#include<vector>
int NT(long long a) {//ham kiem tra so nguyen to
	if (a < 2) {
		return 0;
	}
	else {
		for (long long i = 2; i <= sqrt(a); i++) {
			if (a % i == 0) {
				return 0;
			}
		}
	}return 1;
}
long long KQ(long long a) {
	long long kq = 0;
	for (long long i = 2; i*i <= a; i++) {
		if (NT(i) == 1) {//if uoc =3 thi kq +1
			kq++;
		}
	}return kq;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a;
		cin >> a;
		//cout << KT(a);
		cout << KQ(a) << endl;
	}
	system("pause");
	return 0;
}
