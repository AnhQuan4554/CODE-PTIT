#include<iostream>
using namespace std;
#include<cmath>
int kt(long long a) {
	for (long long i = 2; i < sqrt(a); i++) {//khac kt nguyen to 
		if (a % i == 0)return 0;
		/*vi neu chia het cho so nho hon can tuc laf nhieu hon
		3 uoc (vi mac dinh 3 uoc la 1 can so do vaf chinh no)*/
	}return 1;
}
int main() {
	int t;
	
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		for (long long i = 2;; i++) {
			if (i * i > n) {
				break;
			}
			if (kt(i * i) == 1) {
			cout << i * i << ' ';

			}
		}
		
		cout << endl;
	}
}
