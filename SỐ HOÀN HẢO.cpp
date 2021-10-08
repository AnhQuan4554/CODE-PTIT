#include<iostream>
using namespace std;
#include<cmath>
typedef long long ll;
void Tong() {
	long long n;
	cin >> n;
	long long sum = 1;// uoc tinh ca so 1 nhung ko tinh chinh no
	if (n >= 1e12 || n % 2 == 1) {
		cout << 0 << endl; return;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i;
			sum += n / i;
		}
	}//khac phan tich thua so nguyen to , bo i buoc neu n!=1 di 
 
	if (sum == n)cout << 1 << endl;
	else cout << 0 << endl;
}
int main() {
	int n;
	cin >> n;
	while (n--)Tong();


	system("pause");
	return 0;
}
