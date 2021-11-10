#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
int NT(long long a) {
	if (a <2) {
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
long long In(long long a) {
	if (a == 1) {
		return 1;
	}
	else if (NT(a) == 1) {
		return a;
	}
	else if (a % 2 == 0) {
		return 2;
	}
	for (long long i = 2; i <= sqrt(a); i++) {
		if (a % i == 0 && NT(i) == 1) {
			return i;
		}
	}
}
int main() {

	int t;
	cin >> t;
	while (t--) {
		long long x;
		cin >> x;
		for (long long i = 1; i <= x; i++) {
		cout << In(i) << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
