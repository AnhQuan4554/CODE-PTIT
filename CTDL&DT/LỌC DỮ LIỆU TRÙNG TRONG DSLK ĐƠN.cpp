#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {
	int n; cin >> n;

	int a[1000];
	int b[1000];
	for (int i = 0; i < n; i++) {
		int x; cin >> a[i];
		b[a[i]]= 1 ;
	}
	for (int i = 0; i < n; i++) {
		if (b[a[i]] != 0)cout << a[i]<<" ";
		b[a[i]] = 0;
	}
	system("pause");
	return 0;
}
//1 1 1 4 5 1 4 7 7 8 1 9
