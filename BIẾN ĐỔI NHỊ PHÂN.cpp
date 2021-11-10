#include<iostream>
using namespace std;
void Nhap(int a[101][101],int n,int m,int b[101][101]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
}
void Bien_doi(int a[101][101], int b[101][101],int n,int m ){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		
			if (a[i][j] == 1) {
				for (int h = 0; h < m; h++) {
					b[i][h] = 1;
				}
				for (int k = 0; k < n; k++) {
					b[k][j] = 1;
				}
			}
		}
}
}
void Xuat(int a[101][101], int n,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}cout<<endl;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n,m;
	cin >> n>>m;
	int a[101][101];
	int b[101][101];
	//for (int i = 0; i < n; i++) {
	//	//khai bao so cot
	//	a[i] = new int[m];
	//	b[i] = new int[m];
	//}
	Nhap(a, n,m,b);
	Bien_doi(a, b, n, m);
	Xuat(b, n,m);
	cout << endl;
	}

	system("pause");
	return 0;
}
