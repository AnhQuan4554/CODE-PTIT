#include<iostream>
using namespace std;
int a[1000];
int column[1000];
int  cheo1[1000];
int	 cheo2[1000];
int n;
int count1 ;
void input() {
	for (int i = 1; i <= n; i++) {
		column[i] = 0;
		cheo1[i] = 0;
		cheo2[i] = 0;
	}
}
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (column[j] == 0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0) {
			a[i] = j;
			column[j] = cheo1[i-j+n] = cheo2[i + j - 1] = 1;
			if (i == n) {
			/*	for (int x = 1; x <= n; x++) {
					cout << "con hau pwr hang thu " << x << " " << "cot" << a[x];
				}cout << endl;*/
				count1++;
			}
			else {
				Try(i + 1);
			}
			column[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;

		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {

	cin >> n;
	count1 = 0;
	input();
	Try(1);
	cout << count1 << endl;
	}
	system("pause");
	return 0;
}
