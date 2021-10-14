#include<iostream>
#include<string>
using namespace std;
int KT(string a) {
	int b[1000] = { 0 };
	int dem = 0;
	for (int i = 0; i < a.size(); i++) {
		b[a[i]]++;
	}
	for (char i = 'a'; i <= 'z'; i++) {
		if (b[i] == 0) {
			dem++;
		}
	}return dem;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string a;
		cin.ignore();
		int so;
		getline(cin, a);
		cin >> so;
		if (so < KT(a)) {
			cout << "0";
		}
		else {
			cout << "1";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
