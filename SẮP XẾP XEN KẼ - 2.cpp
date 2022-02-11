#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void input(vector<int>& a , int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		
		a.push_back(x);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a;
		input(a, n);
		sort(a.begin(),a.end());
		int end = n % 2 == 0 ? n / 2 - 1 : n / 2;
		for (int i = 0; i <= end ; i++) {
			if ((n - i - 1) == i) {
				cout << a[i];
				
			}
			else {
			cout << a[n - i - 1] << " " << a[i]<<" ";

			}

		}cout << endl;
	}
	system("pause");
	return 0;
}
