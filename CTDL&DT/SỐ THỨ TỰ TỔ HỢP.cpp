#include<iostream>
using namespace std;
#include<vector>
int check = 1;

void input(int*b, int k) {
	for (int i = 0; i < k; i++) {
		cin >> b[i]; 
		
	}
}
void handle(int* a, int n,int k  ) {
	int i = k - 1;
	while (i >= 0 && a[i] == n - k +i+ 1) {
		i--;
	}
	if (i < 0)check = 0;
	else {
		a[i]++;
		for (int x = i + 1; x < k; x++) {
			a[x] = a[x - 1] + 1;
		}
	}
}
int check2(int* a, int* b, int k) {
	for (int i = 0; i < k; i++) {
		if (a[i] != b[i])return  0;
	}return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[1000];
		int b[1000];
		for (int i = 0; i< k; i++) {
			a[i] = i + 1;
		}
		input( b,k);
		int count = 0;
		while (check) {
			if (check2(a, b, k) == 0) {
				count++;
				
			}
			else {
				break;
			}
			handle(a, n, k);
			
		}cout << count+1 << endl;// lần cuối cùng bằng nhau
		check = 1;
	}
	system("pause");
	return 0;
}
