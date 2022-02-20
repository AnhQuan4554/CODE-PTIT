#include<iostream>
using namespace std;
#include<vector>
int check = 1;

void handle(string &a) {
	int i = a.size() - 1;
	while (i >= 0 && a[i] == '0') {
		a[i] = '1';
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i] = '0';
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		string a; cin >> a;

	
		handle(a);
		for (int i = 0; i < a.size(); i++) {
			cout << a[i];
		}cout << endl;

	}
	system("pause");
	return 0;
}
