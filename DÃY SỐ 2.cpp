#include<iostream>
#include<vector>
using namespace std; 
void input(int** a, int n) {
	for (int j = 1; j <= n; j++) {
		cin >> a[1][j];
	}
}
void handle(int** a, int n) { 
	int cot = n - 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= cot; j++) {
			a[i][j] = a[i - 1][j] + a[i-1][j + 1];
		}cot--;
	}
}
void qexport(int** a, int n) {
	int cot = n;
	vector<vector<int>>b;
	for (int i = 1; i <= n; i++) {
		vector<int>c;

		for (int j = 1; j <= cot; j++) {
			//cout << a[i][j] << " ";
			c.push_back(a[i][j]);
			
		}//cout << endl;
		cot--;
		
		//for (int x = 0; x < c.size();x++)cout << c[x] << " ";
		b.push_back(c);
	}

	//xuaats 
	for (int i = b.size() - 1; i >= 0; i--) {
		cout << "[";
		for (int j = 0; j < b[i].size()-1; j++) {
			cout << b[i][j]<<" ";
		}
		cout<<b[i][b[i].size()-1] << "] ";
	}
	
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int** a = new int* [n + 1];
		for (int i = 0; i < n + 1; i++) {

			a[i] = new int[n + 1];
		}
		input(a, n);
		handle(a, n);
		qexport(a, n);
		cout << endl;
	}

	system("pause");
	return 0;
}
