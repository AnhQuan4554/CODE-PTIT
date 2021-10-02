#include<iostream>
using namespace std;
#include<cmath>
int NT(long long a) {
	if (a < 2) {
		return 0;
	}
	for (long long i = 2; i <=sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}return 1;
}
long long KQ(long long a, long long b) {
	long long dem = 0;
	for (long long i = a; i <= b; i++) {
		if (NT(i) == 1) {
			dem++;
		}
	}return dem;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		cout << KQ(a, b);
		cout << endl;
	}
	system("pause");
	return 0;
}
