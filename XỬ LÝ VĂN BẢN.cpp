#include<iostream>
#include<string>
using namespace std;
int one = 1;
void fix_text(string& a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}
}
int main() {
	string a; int check = 1;
	while (cin >> a) {
		fix_text(a);

		if (check == 1) {
			a[0] -= 32;
			check = 0;
		}
		if (a[a.size()-1] == '.' || a[a.size() - 1] == '?' || a[a.size() - 1] == '!') {
			check = 1;
			a.erase(a.begin() + a.size() - 1); cout << a;
			cout << endl;
		}
		else {
		cout << a<<" ";
		}
	}
}
//ky thi LAP TRINH ICPC PTIT  bat dau to chuc     tu     nam 2010. nhu vay, nam nay la          tron 10 nam!
//      vay CO PHAI NAM NAY LA KY THI LAN THU 10 ? khong phai!nam nay la
//KY THI LAN THU 11.
