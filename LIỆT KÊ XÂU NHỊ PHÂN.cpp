#include<iostream>
using namespace std;
void Bien_doi(int* a, int n,int &temp) {
	int i = n-1;
	while (i >= 1-1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i <1-1) {
		temp = 0;
	}
	else  {
		a[i] = 1;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 1-1; i <= n-1; i++) {
		a[i] = 0;
	}
	int temp = 1;
	while (temp!=0) {
		for (int i = 1-1; i <= n-1; i++) {
			cout << a[i];
		}
		Bien_doi(a, n, temp);//sau khi che truong hop tat ca cac so deu bang 0 thi dung lai tuc truoc do la n bit 1
		cout << " ";

	}
		cout << endl;
	}

	system("pause");
	return 0;
}
