#include<iostream>
#include<cmath>
#include<string>
using namespace std;
long long KQ(string a) {
	long long tong = 0;
	for (long long i = 0; i < a.size()-1; i++) {
		for (long long j = i + 1; j < a.size(); j++) {
			if (a[i] == a[j]) {
				tong++;
			}
		}
	}return tong;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		cout << KQ(a)+a.size();
		cout << endl;
	}
		system("pause");
		return 0;
}
