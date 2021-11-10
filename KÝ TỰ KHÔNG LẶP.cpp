#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void KQ(string a) {
	int b[100] = { 0 };
	for (long long i = 0; i < a.size()-1; i++) {
			long long tong = 0;
		for (long long j = i + 1; j < a.size(); j++) {
			if (a[i] == a[j]) {
				b[a[i]]++;
			}
		}
	}
	for (long long j = 0; j < a.size(); j++) {
		if (b[a[j]]==0) {
			cout << a[j];
		}
	}
			
	}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		//cout << KT(a);
		KQ(a);
		cout << endl;
	}
		system("pause");
		return 0;
}
