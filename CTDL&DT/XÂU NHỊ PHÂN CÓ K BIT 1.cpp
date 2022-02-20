#include<iostream>
using namespace std;
#include<vector>
int check = 1;
void input(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x = 0; a.push_back(x);
	}
}
void handle(vector<int>& a) {
	int i = a.size() - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i] = 1;
	}
}
int check2(vector<int >a,int k ) {
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 1) {
			count++;
		}
	}
	if (count == k) {
		return 1;
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		vector<int>a;
		int n, k; cin >> n >> k;
		input(a, n);
		while (check) {
			if (check2(a, k)) {
				for (int i = 0; i < a.size(); i++) {
					cout << a[i];
				}
			cout << endl;
			}
		
			handle(a);
		}check = 1;
	}
	system("pause");
	return 0;
}
