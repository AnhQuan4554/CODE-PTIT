#include<iostream>
using namespace std;
void input(int** a, int n) {
	for (int j = 1; j <= n; j++) {
		cin >> a[1][j];
		
	}
}
void handle(int** a, int n) {
	int cot = n;
	for (int i = 2; i <= n; i++) {
		cot--;
		for (int j = 1; j <= cot; j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
		}
	}
}
void export1 (int** a, int n) {
	int cot = n;
	for (int i = 1; i <= n; i++) {
		cout << "[";
		for (int j = 1; j < cot; j++) {
			cout << a[i][j]<<" ";
		}
		cout << a[i][cot] << "]";
		cot--;
		cout << endl;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
int** a = new int* [100];
	for (int i = 0; i < 100; i++)
		a[i] = new int[100];
	int n; cin >> n;
	input(a, n);
	
	handle(a, n);
	export1(a, n);
	}
	
	system("pause");
	return 0;
}
