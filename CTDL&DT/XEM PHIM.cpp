#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;
int a[102];
int resul[102][25006];
int n;
int Weight;
int res = 0;
void Quy_hoach() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= Weight; j++) {
			if (j < a[i]) {
				resul[i][j] = resul[i - 1][j];
			}
			else {
				resul[i][j] = max(resul[i - 1][j], resul[i - 1][j - a[i]] + a[i]);
			}
			res = max(res, resul[i][j]);
		}
	}
}
int main() {
	cin >> Weight >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	Quy_hoach(); cout << res;
	system("pause");
	return 0;
}
