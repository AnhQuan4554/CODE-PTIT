#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include<algorithm>
int n,k;
int* a = new int[n + 10];
vector<vector<int>> result;
void creat() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void Try(int i) {
	for (int j = a[i-1] ; j < n ; j++) {
		a[i] = j;
		if (i == k) {
			
			for (int x = 1; x <= k; x++) {
				//cout << a[x] << " ";
				char b = a[x] + 65;
				cout << b;
			}cout << endl;
		}
		else Try(i + 1);
	}
}
int main() {
	string x; cin >> x;
	 n = x[0]-65+1;
	cin>>k;
	a[0] = 0;
	Try(1);
	system("pause");
	return 0;
}
