#include<iostream>
using namespace std;
#include<memory.h>
int SUM;
int used[40009];
void input(int* a, int n) {
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}
int check(int* a, int n) {
	memset(used, 0, sizeof(used));
	used[0] = 1;// truowng hop co chinh no// cungx chinh la de luu 
	for (int i = 1; i <= n; i++) {
		for (int j = SUM; j >= a[i]; j--) {
			if (used[j - a[i] ]== 1 && used[j] == 0)used[j] = 1;
		}
	}return used[SUM];
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		int a[50000];
		int n;
		cin >> n >> SUM;
		input(a, n);
		if (check(a, n))cout << "YES\n";
		else cout << "NO\n";
	}
	system("pause");
	return 0;
}
