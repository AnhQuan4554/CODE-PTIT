#include<iostream>
using namespace std;
#include<vector>
#include<string>
int n;
int* a = new int[n + 1000];
int* used = new int[n + 1000];
vector<pair<string, int>>result(n + 1000);
string start;
void input() {
	for (int i = 0; i < start.length(); i++) {
		result[i+1].first = start[i]; 
		result[i+1].second = i+1;
	}
}
void Default() {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
		used[i] = 0;
	}
}
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (used[j] ==  0) {
			a[i] = j;
			used[j] = 1;
			if (i == n) {
				for (int x = 1; x <= n; x++) {
					//cout << a[x] << " ";
					cout << result[a[x]].first ;
				}cout << " ";
			}
			else {
				Try(i + 1);
			}
			used[j] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> start;
		n = start.length();
		Default();
		input();
		Try(1);
		cout << endl;
	}

	system("pause");
	return 0;
}
