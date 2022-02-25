#include<iostream>
using namespace std;
int check = 1;

void input(string &a, int n) {
	for (int i = 0; i < n; i++) {
		a+='A';
	}
}
void handle(string &a, int n) {
	int  i = n - 1;
	while (i >= 0 && a[i] == 'H') {
		a[i] = 'A';
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i] = 'H';
	}
}
int check2(string a, int n) {
	if (a[0] != 'H' || a[n - 1] != 'A')return 0;
	for (int i = 0; i < a.length()-1; i++) {
		if (a[i] == a[i + 1]&&a[i]=='H')return 0;
	}
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string  a;
		int n; cin >> n;
		input(a, n);
		
		while (check)
		{
			if (check2(a,n)) {

				cout << a << endl;
			}
			handle(a, n);
		}check = 1;
	}
	system("pause");
	return 0;
}
