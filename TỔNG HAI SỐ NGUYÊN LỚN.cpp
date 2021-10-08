#include<iostream>
using namespace std;
#include<string>
void ADD(string a, string b) {
	string c;
	//gan them so 0 vao a voi b neu 2 so ko cung do dai
	while (a.length() > b.length()) {
		b.insert(b.begin() + 0, '0');
	}
	while (b.length() > a.length()) {
		a.insert(a.begin() + 0, '0');
	}
	int du = 0;
	for (int i = a.length()-1; i >= 0; i--) {
		int x = (a[i] - 48) + (b[i] - 48)+du;
		char them = (((a[i] - 48) + (b[i] - 48)+du) % 10) + 48;
		 du = x / 10;//vd 23 thi du co 2 thoi//nho du nay phai tinh ca du dang sau no

		c.insert(c.begin() + 0, them);

	}
	if (du != 0) {
		
		c.insert(c.begin() + 0, '1');
	}
//	cout << du << endl;
	cout << c;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
	string a;
	string b;
	cin >> a >> b;
	ADD(a, b);
	cout << endl;
	}

	system("pause");
	return 0;
}
