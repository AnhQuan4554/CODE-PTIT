#include<iostream>
using namespace std;
void Khoi_tao(int* a, int k) {
	for (int i = 0; i < k; i++) {
		a[i] = i + 1;//theo de nguoi ta yeu cau phan tu dau cos gia tri bat dau tu 0
	}
}
void Bien_doi(int* a,int k, int n,int &kt) {
	int i = k-1;//vi do minh bat dau ti 0
	while (i >= 0 && a[i] == n - k + 1 + i) {
		i--;
	}
	if (i < 0) {
		kt = 1;
	}
	else {
		a[i]++;
		/*VD tổ hợp chập 3 của 5 có phần tử 1 2 5 , vị trí i=2(tức a[i]=5 đã max) thì ta lùi xuống xét vị trí tiếp theo
		sau đó vị trí i=2 sẽ bằng vị trí tiếp theo cộng 1 sẽ từ 1 2 5  thành 1 2 3 rồi lúc đó sẽ lại quay lại xét vòng while từ
		vị trí i=2 là vị trí cuối cùng có giá trị bằng 3 đó */
		for (int j = i; j < k-1; j++) {
			a[j + 1] = a[j] + 1;
		}
	}

}
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n, k;
	cin >> n >> k;
	int* a = new int[k];
	Khoi_tao(a, k);
	int kt = 0;
	while (kt != 1) {
		for (int i = 0; i < k; i++) {
			cout << a[i];
		}
		Bien_doi(a, k, n, kt);
		cout << " ";
	}
		cout << endl;
	}

	system("pause");
	return 0;
}
