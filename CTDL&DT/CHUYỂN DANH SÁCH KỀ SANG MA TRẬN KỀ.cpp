#include<iostream>
using namespace std;
int a[1002][1002];
#include<string>
#include<sstream>
int n;
int main() {
	 cin >> n;
	 cin.ignore();
	for (int i = 1; i <= n; i++) {
		string x; getline(cin, x);
		string num;
		//cout << x << endl;
		stringstream ss(x);
		while (ss >> num) {
			a[i][stoi(num)] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}cout << endl;
	}
	system("pause");
	return 0;
}
