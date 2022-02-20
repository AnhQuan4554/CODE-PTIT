#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<set>
#include<map>

int main() {
	
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		set<int>a;
		for (int i = 0; i< n; i++) {
			int x; cin >> x;
			a.insert(x);
		}
		int check = 0;
		for (auto i : a) {
			if (a.count(k)!=0) {
				check = 1;
				break;
			}
		}
		if (check) {
			cout << "1" << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}

	system("pause");
	return 0;
 }
