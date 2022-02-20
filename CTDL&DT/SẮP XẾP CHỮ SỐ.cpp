#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<set>
void devide(string a,set<char>&b) {
	for (int i = 0; i < a.size(); i++) {
		b.insert(a[i]);
	}
}
int main() {
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set<char>b;
		for (int i = 0; i < n; i++) {
			string a; cin >> a;
			devide(a, b);
		}
		for (auto i : b) {
			cout << i << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
 }
