#include<iostream>
using namespace std;
#include<algorithm>
int check = 1;
int check_primary = 1;
void input(int* a, int n) {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}
void handle(int* a, int n) {
	int i = n-1;
	while (a[i] > a[i + 1]&i>=1) {
		i--;
	}
	if (i <= 0) {
		check = 0;
	}
	else {
		check_primary = 0;
		int start = n;
		while (a[i] > a[start]) {
			start--;
		}
		swap(a[i], a[start]);
		int left = i+1;
		int right = n;
		while (left<right)
		{
			swap(a[left], a[right]);
			left++;
			right--;
		}
	}
}
int main() {


	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[1002];
		input(a, n);
		handle(a, n);
		if (check_primary) {
			for (int i = n; i >= 1; i--) {
				cout << a[i] << " ";
			}
		}
		else {

			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
		}cout << endl;
	}
	system("pause");
	return 0;
}
