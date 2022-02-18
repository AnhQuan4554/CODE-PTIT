#include<iostream>
using namespace std;
#include<vector>
int check = 1;
void creat(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		//int x; cin >> x; a.push_back(x);
		int x=0; a.push_back(x);
	}
}
void handle(vector<int>& a) {
	int i = a.size() - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i < 0) {
		check = 0;
	}
	else {
		a[i] = 1;
	}
}
int check_opposite(vector<int>a) {
	for (int i= 0; i < a.size(); i++) {
		if (a[i] != a[a.size() - 1 - i])return 0;

	}
	return 1;
}
int main() {
	vector<int>a;
	int n; cin >> n;
	creat(a, n);
	while (check != 0) {

		if (check_opposite(a) == 1) {
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";

			}cout << endl;
		}	
			handle(a);
			
		
	}
	system("pause");
	return 0;
}
