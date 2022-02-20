#include<iostream>
using namespace std;
int check = 1;
#include<vector>
void input(string &a, int n) {
	for (int i = 0; i < n; i++) {
		a += 'A';
	}
}
void handle(string &a, int n) {
	int i = n-1;
	while (i >= 0 && a[i] == 'B') {
		a[i] = 'A';
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i] = 'B';
	}

	
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string a;		
		int n; cin >> n;
		input(a, n);
		//cout << a;
		while (check) {
			for (int i = 0; i < n; i++) {
				cout << a[i];
			}cout << " ";
			handle(a, n);
			
		}check = 1;cout << endl;
	}
	system("pause");
	return 0;
}
