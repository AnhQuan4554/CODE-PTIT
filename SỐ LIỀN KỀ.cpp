#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
int KT(string a) {
	for (int i = 0; i < a.size() - 1; i++) {
		int x = a[i];
		int y = a[i + 1];
		//cout << x << ' ' << y;
		if (x + 1 == y || x - 1 == y) {
			continue;
		}
		else {
			return 0;
		}
	}return 1;
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string a;
		getline(cin, a);
		//cout << a << endl;
		if (KT(a) == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	system("pause");
	return 0;
}
