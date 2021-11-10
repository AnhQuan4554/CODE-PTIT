#include<iostream>
using namespace std;
void Nhap(int** a,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void Xuat(int** a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > 0 && i < n - 1) {
				if (j == 0 || j == n - 1) {
					 cout <<a[i][j]<<' ';
				}
				else if (j >0 && j <n-1) {
					a[i][j] = ' ';
					char x = a[i][j];
					cout << x <<' ';
				}
				
			}
			else {
				cout << a[i][j] << ' ';
			}
		}cout << endl;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		//khai bao so cot
		a[i] = new int[n];
	}
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	}

	system("pause");
	return 0;
}
