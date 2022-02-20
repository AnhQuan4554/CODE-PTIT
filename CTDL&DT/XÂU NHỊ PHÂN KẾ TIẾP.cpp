#include<iostream>
using namespace std;
#include<set>
#include<vector>

void handle(string &x) {
	int i = x.size()-1;

	while (i >= 0 && x[i] == '1') {
		x[i] = '0';
		i--;
	
	}x[i] = '1';

}
int main() {
	
	int t; cin >> t;
	while (t--) {
		
		string x; cin >> x;
		handle(x); cout << x << endl;
	}
	
	
	return 0;
	system("pause");

}
