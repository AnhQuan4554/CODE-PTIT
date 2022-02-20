#include<iostream>
#include<vector>
using namespace std;
int check = 1;
void input(vector<int>& a, int k) {
	for (int i = 0; i < k; i++) {
		a.push_back(i);
	}
}
void handle(vector<int>& a,int n,int k) {
	int i = k - 1;
	while (i >= 0 && a[i] == n - k + i ) {//do xet tu 0
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i]++;
		for (int j = i + 1; j < a.size(); j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n>>k;
		vector<int>a;
		input(a, k);
		while (check) {
			for (int i = 0; i < k; i++) {
				char x = a[i] + 65;
				cout << x ;
			}handle(a, n, k);
			cout << endl;

		}check = 1;

	}
	system("pause");
	return 0;
}
