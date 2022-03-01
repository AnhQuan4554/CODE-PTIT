#include<iostream>
using namespace std;
#include<string>
int check = 1;
#include<set>
void input(string& a, int n) {
	for (int i = 0; i < n; i++) {
		a += '8';
	}
}
void handle(string& a) {
	int i = a.length() - 1;
	while (i >= 0 && a[i] == '6') {
		a[i] = '8';
		i--;
	}
	if (i < 0)check = 0;
	else {
		a[i] = '6';
	}
}
int check2(string a){
	if (a[0] != '8')return 0;
	if (a[a.length() - 1] != '6')return 0;
	for (int i = 0; i < a.length()-1; i++) {
		if (a[i] == a[i + 1] && a[i] == '8')return 0;
	}
	for (int i = 0; i < a.length() - 3; i++) {
		if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]&&a[i+2]==a[i+3] && a[i] == '6')return	0;
	}
	return 1;
}
int main() {
	string a;
	int n; cin >> n;
	input(a, n);
	set<string>b;
	while (check)
	{
		if (check2(a)) {
			b.insert(a);
		/*for (int i = 0; i < a.length(); i++) {
			cout << a[i];
		}cout << endl;*/

		}
		handle(a);
	}
	for (auto i : b) {
		cout << i << endl;
	}
	system("pause");
	return 0; 
}
