#include<iostream>
using namespace std;
#include<vector>
#include<string>
int a[1000];
int used[1000];
int n;
vector<string>result;
#include<algorithm>
void creat() {
	for (int i = 1; i <= n; i++) {

		used[i] = 0;
	}
}
int check(string a) {
	for (int i = 1; i < a.length()-1; i++) { //chus y string chi so bat dau tu 0
		if (a[i] == 'A' || a[i] == 'E') {
			if (a[i - 1] != 'A' && a[i - 1] != 'E') {
				if (a[i + 1] != 'A' && a[i + 1] != 'E') {
					return 0;
				}
			}
		}
	}
	return 1;
}
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (used[j] == 0) {
			a[i] = j;
			used[j] = 1;
			if (i == n) {
			 
				string trung_gian = "";
				for (int x = 1; x <= n; x++) {
					char k = a[x] + 64;
							trung_gian += k;
				}
				if (check(trung_gian)) {
					
					result.push_back(trung_gian);
				}
			}
			else {
				Try(i + 1);
			}
			used[j] = 0;
		}
	}
}
int main() {
	char x; cin >> x;
	n = x - 64;
	creat();
	Try(1);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i < result.size() - 1)cout << endl;
	}
	

	system("pause");
	return 0;
}
