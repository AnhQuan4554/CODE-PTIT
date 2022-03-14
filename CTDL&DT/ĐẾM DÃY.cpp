#include<iostream>
using namespace std;
const long long modu = 123456789;
long long Luy_thua(int a,long long b  ) {
	if(b == 0)return 1;
	long long x = Luy_thua(a, b / 2);
	if (b % 2 == 0) {
		return (x * x) % modu;
	}
	else {
		return ((x * x) % modu * a) % modu;
	}
}
int main() {
	
	long long t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		cout << (Luy_thua(2, n - 1)) << endl;
	}
		system("pause");
		return 0;
}
