#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

void input(int a[], int n) {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
void handle(int a[], int n,int &kt) {
	int temp = n - 1;
	while (a[temp] > a[temp+1]&&temp>0) {
		temp--;
	}
	if (temp <= 0)kt = 0;
	int x = n;
	while (a[temp] > a[x]) {// cứ lấy vd 1234 là rõ nhất 
		x--;
	}
	swap(a[temp], a[x]);
	int l = temp + 1;
	int r = n;
	while (l <= r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}

}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[1000];
		int n; cin >> n;
		input(a, n);
		int kt = 1;
		while (kt) {
			for (int i = 1; i <= n; i++) {
				cout << a[i];
			}cout << " ";
			handle(a, n,kt);
		}
		cout << endl;
	}
	return 0;
}
