#include<iostream>
#include<string>
using namespace std;
void Tru(string a, string b) {
	string c;
	while (a.length() < b.length()) {
		a.insert(a.begin() + 0, '0');
	}
	while (b.length() < a.length()) {
		b.insert(b.begin() + 0, '0');
	}
	//neu a nho hon b doi cho , luon de a la so lon hon
	if (a < b) {
		string temp=a;
		a = b;
		b = temp;
	}
	int nho = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		int so = (a[i]-48) - (b[i]-48) - nho;//ket qua sau khi tru tung don vi
		//neu ma am tuc phai nho 1 VD 1 tru 9
		if (so < 0) {
			so += 10;
			nho = 1;
		}
		else {
			nho = 0;
		}
		char them = so + 48;
		c.insert(c.begin() + 0, them);

	}
	cout << c;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	string a, b;
	cin >> a >> b;
	Tru(a, b);
		cout << endl;
	}

	system("pause");
	return 0;
}
