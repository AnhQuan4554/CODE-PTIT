#include<iostream>
using namespace std;
#include<cmath>
int Nguyen_to(long long a) {
	if (a < 2) {
		return 0;
	}
	for (long long i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}return 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		int check = 0;
		for (long long i = 2; i <= sqrt(n)+1000; i++) {
			if (Nguyen_to(i) && Nguyen_to(n - i)) {
				cout << i << " " << n - i << endl;
				check = 1;
				break;
			}
		}
		if (check == 0) {
			cout << "-1\n";
		}
	}
	system("pause");
	return 0;
}
