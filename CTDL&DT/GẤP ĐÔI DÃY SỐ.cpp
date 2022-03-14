#include<iostream>
using namespace std;

 typedef long long ll;
long long Luy_thua(int a,long long b  ) {
	if(b == 0)return 1;
	
	long long x = Luy_thua(a, b / 2);
	if (b % 2 == 0) {
		return (x * x) ;
	}
	else {
		return a*((x * x)  ) ;
	}
}
//n luôn là vị trí trung tâm
int KQ(int n, long long k) {//k là vị trí cần tìm
	long long lenght = Luy_thua(2, n - 1);// khoảng cách từ vị trí đầu đến n
		while (1) {
			if (n == 1)return 1;
			if (k == lenght)return n;//bằng khoảng cách từ vị trí đầu đến n ( hiểu 1/2 dãy )
			//tức là bằng luôn = n
			if (k > lenght) {
				k = lenght - (k - lenght);//nếu k lơn hơn lấy đối xứng vị trí của k qua n 
			}
			lenght /= 2;
			n--;
		}
}
int main() {
	
	int t; cin >> t;
	while (t--) {
		int n; long long k; cin >> n >> k;
		cout << KQ(n, k) << endl;
		
	}
		system("pause");
		return 0;
}
