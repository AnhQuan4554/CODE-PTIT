#include<iostream>
using namespace std;
#include<algorithm>
int check = 1;

int check_primary = 1;
void input(int* a, int n) {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}

}
void handle(int* a, int n) {
	int i = n - 1;
	while (i >= 1 && a[i] < a[i + 1]) {
		i--;
	}
	if (i <= 0) {
		check = 0;
	}
	else {
		int start = n;
		while (a[i] < a[start]) {
			start--;
		}
		swap(a[i], a[start]);
		int left = i + 1;
		int right = n;
		while (left < right) {
			swap(a[left], a[right]);
			left++;
			right--;
		}
	}
}
bool cmp(int a, int b) {
	return a>b;
}
int main() {


	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a [1002];
		input(a, n);
		sort(a + 1, a + n + 1, cmp);
		while (check) {
			for (int i = 1; i <= n; i++) {
				cout << a[i];
			}cout << " ";
			handle(a, n);
		}check = 1;cout<<endl;
	}
	system("pause");
	
	return 0;
}
