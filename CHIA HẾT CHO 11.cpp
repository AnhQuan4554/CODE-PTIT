#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int KT(string a) {
	long long tong = 0;
	for (long long i = 0; i < a.size(); i++) {
		int x = a[i] - 48;
		if (i % 2 == 0) {
			tong = tong + x;
		}
		else {
			tong = tong - x;
		}
	}return tong;
}
int main() {
	int t;
	cin >> t;
		cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		
		//cout << KT(a);
		if (KT(a) % 11 == 0){
			cout << "1";
		}
		else {
			cout << "0";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
