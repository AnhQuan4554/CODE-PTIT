#include<iostream>
using namespace std;
void input(int a[1002], int k) {
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
	}
}
void Handle(int* a, int n,int k) {
	for (int i = k; i >= 0; i--) {
		if (a[i] != (n - k + i)) {
			a[i] ++;
			for (int j = i; j < k; j++) {
				a[j + 1] = a[j]+1;
			}
			break;
		}
	}
}
int main() {

    int t;
    cin >> t;
    while (t--)
    {
		int a[1002];
		a[0] = -1;
		int n,k; cin >> n>>k;
		input(a, k);
		Handle(a, n, k);
		for (int i = 1; i <= k; i++) {
			cout << a[i] << " ";
		}cout << endl;
    }
}
