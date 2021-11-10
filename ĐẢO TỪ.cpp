#include<iostream>
#include<string>
using namespace std;
void Xuat(string a) {
	int dem = 0;
	
	for (int i = a.length() - 1; i >= 0; i--) {
		dem++;
		if (a[i] == ' ') {
			cout << a.substr(i + 1, dem - 1);
			//cout << "ok";
			cout << " ";
			dem = 0;
		}
	
	}
	//in tu cuoi cung
	int cuoi = 0;
	while (a[cuoi] != ' ') {
		cout << a[cuoi];
		cuoi++;
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		Xuat(a);
		cout << endl;
	}

	system("pause");
	return 0;
}
