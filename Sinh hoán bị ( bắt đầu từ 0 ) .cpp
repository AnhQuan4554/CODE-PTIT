#include<iostream>
using namespace std;
int check = 1;
void input(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void handle(int* a, int n) {
	int i = n - 2;
	while (i >= 0 && a[i] < a[i + 1]) {
		i--;
	}
	if (i < 0)check = 0;
	else {
		int k = n - 1;
		while (a[k] > a[i]) {
			k--;
		}
		swap(a[i], a[k]);
		int left = i + 1,right  = n-1;
		while (left < right) {
			swap(a[left], a[right]);
			left++;
			right--;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[1000];
		int  n; cin >> n;
		int count = 0;
		input(a, n);
		while (check) {
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";

			}cout << endl;

			handle(a, n);

		}
		
		check = 1; 
	}
	system("pause");
	return 0;
}
