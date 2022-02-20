#include<iostream>
using namespace std;
#include<algorithm>
int check = 1;

int check_primary = 1;
void input(int* a, int k) {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void handle(int* a, int n,int k) {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i <= 0) {
		check = 0;
	}
	else {
		a[i]++;
		for (int j = i; j < k; j++) {
			a[j + 1] = a[j] + 1;
		}
	}
}
int main() {


	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n>>k;
		int a[1002];
		input(a, n);
	
		while (check) {
			for (int i = 1; i <= k; i++) {
				cout << a[i];
			}cout << " ";

			handle(a, n, k);

		}check = 1;
		cout << endl;
	}
	system("pause");
	return 0;
}
