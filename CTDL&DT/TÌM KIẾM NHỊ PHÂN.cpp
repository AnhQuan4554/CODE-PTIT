#include<iostream>
using namespace std;

int find(int *a,int n,int k) {
	int left = 0, right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] == k)return mid+1;//vid phan tu cua minh chay tu 0 
		if (a[mid] < k) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[100000];
		int n, k; cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (find(a, n, k) == 0) {
			cout << "NO";
		}
		else {
			cout << find(a, n, k);
		}
		cout << endl;
	}

}
