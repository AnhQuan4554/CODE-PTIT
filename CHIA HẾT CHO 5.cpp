#include<iostream>
#include<string>
using namespace std;
//ham bien doi
int Change(string a) {
	int sum = 0; 
	for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] == '1') {
			if ((a.size() - i - 1) % 4 == 0)sum += 1;
			else if ((a.size() - i - 1) % 4 == 1)sum += 2;
			else if ((a.size() - i - 1) % 4 == 2)sum += 4;
			else if ((a.size() - i - 1) % 4 == 3)sum += 3;
		}
	}return sum;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string a; cin >> a;
		if (Change(a) % 5 == 0)cout << "Yes\n";
		else cout << "No\n";
		
	}
	system("pause");
	return 0;
}
