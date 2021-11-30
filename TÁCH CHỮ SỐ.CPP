#include<iostream>
using namespace std;
#include<string>
typedef long long ll;
#include<algorithm>
ll sum(string a) {
	ll total = 0;
	for (ll i = 0; i < a.size(); i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			total += a[i] - 48;
		}
	}return total;
}
//xoa so 
void Xoa(string& a) {//ti lay 1 string b=a
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			a.erase(a.begin() + i);
			i--;//vi khi xoa xong no s tut xuong 1 so 
		}
	}
	//sap xep cac chu cai
	sort(a.begin(), a.end());
}
int main() {
	int t; cin >> t;
	while (t--) {
		string a; cin >> a;
		string b = a;
		Xoa(a);
		cout << a<< sum(b) << endl;
			
	}
	system("pause");
	return 0;
}
