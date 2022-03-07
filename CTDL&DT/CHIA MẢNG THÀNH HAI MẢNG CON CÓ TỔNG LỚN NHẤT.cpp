#include<iostream>
using namespace std;
#include<algorithm>

void input(int * a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
long long Sum(int *a,int n,int k ) {
	long long  num1 = 0;
	long long  num2 = 0;
	int numberMin = k > n - k ? n - k : k; //do mảng có tổng bé đồng nghĩa với viêc có phần tử bé và số lượng số luôn là bé nhất 
	for (int i = 0; i <numberMin; i++) {
		num1 += a[i];
	}
	for (int i = numberMin; i < n; i++) {
		num2 += a[i];
	}
	
	return num2-num1;
	
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[100];
		int n,k; cin >> n>>k;
		input(a, n);
		sort(a, a+n); //do o day mk dung mang bat dau tu 1 
		/*for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}*/
		cout << Sum(a,n,k) << endl;
	}
}
