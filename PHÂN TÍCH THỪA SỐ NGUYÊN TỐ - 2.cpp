#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<fstream>
#include<cmath>
//ham su li tung don
#include<vector>
typedef long long ll;
int NT(ll a) {
	if (a <= 1)return 0;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}return 1;
}
void Phan_tich(ll a) {
	
	for (int i = 2; i <= sqrt(a); i++) {
		int dem = 0;
		if (a % i == 0) {
		while (a % i == 0) {
			dem++;
			a /= i;
		}
		cout << i << " " << dem << endl;
		}

		
	}
	
	if (a != 1) {
		cout << a << " " << "1";
	}
}
int main() {
	ll a;
	cin >> a;
	Phan_tich(a);
	system("pause");
	return 0;
}
