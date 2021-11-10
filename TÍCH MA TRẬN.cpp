#include<iostream>
using namespace std;
void Nhap(int **a, int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			cin >> a[i][j];
		}
	}
}
void Tinh(int **a, int hanga, int cota, int **b, int cotb) {
	int **c=new int*[hanga];
	for (int k = 0; k < hanga; k++) {
		c[k] = new int[cotb];
	}	

	for (int i = 0; i < hanga; i++) {
		for (int j = 0; j < cotb; j++) {
					int tong = 0;
			for (int k = 0; k < cota; k++) {//cot a chinh la hang b
				tong = tong + a[i][k] * b[k][j];
			
			}	
			c[i][j] = tong;
		}
	}
	for (int i = 0; i < hanga; i++) {
		for (int j = 0; j < cotb; j++) {
			cout << c[i][j]<<" ";
		}cout << endl;
	}

}
void Xuat(int** a, int n,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}cout << endl;
	}
}
int main() {

	int n, m, p;
	cin >> n >> m >> p;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	int** b = new int*[m];
	for (int i = 0; i < m; i++) {
		b[i] = new int[p];
	}

	Nhap(a, n, m);
	Nhap(b, m, p);

	Tinh(a, n, m, b, p);
	system("pause");
	return 0;
}
