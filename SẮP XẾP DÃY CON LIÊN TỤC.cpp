#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<algorithm>
void input(vector<int>& a,vector<int>&b , int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
		b.push_back(x);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		input(a,b, n);
		sort(b.begin(), b.end());
		
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i]) {
				c.push_back(i+1);
				//cout << b[i];
			}
		}cout << c[0] << " " << c[c.size()-1 ];
		cout << endl;
	}
	system("pause");
	return 0;
}
