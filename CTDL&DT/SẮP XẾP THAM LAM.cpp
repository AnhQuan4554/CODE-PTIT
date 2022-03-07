#include<iostream>
using namespace std;
#include<algorithm>

void input(int * a, int n,int *b) {
	for (int i = 0; i < n; i++) {
		cin >> a[i]; b[i] = a[i];
	}
}
int check(int* a, int* b, int n) {
	for (int i = 0; i <= n / 2;i++) {
		if (a[i] != b[i] && b[i] != a[n - i - 1])return 0;
	}
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[100];
		int b[100];
		
		int n; cin >> n;
		input(a, n,b);
		sort(b, b+n); //do o day mk dung mang bat dau tu 1 
		/*for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}cout << endl;
		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}*/
		if (check(a, b, n))cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
