#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (n == 0) {
			cout << "YES\n";
			continue;
		}
		long long f1 = 0, f2 = 1;
		long long fn = 0; ;
		int kt = 0;
		while (fn <= n) {//kiem tra xem co la fiboko
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			if (fn == n) {
				cout << "YES";
				kt = 1;
				break;
			}

		}
		//neu ko la fibo
		if (kt == 0) {
			cout << "NO";
		}
		cout << endl;
	}
}
