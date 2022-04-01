#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
string a, b;
int result[1001][1001];
int res = 0;
void Phan_hoach() {
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			if (a[i-1] == b[j-1]) {
				result[i][j] = result[i - 1][j-1] + 1;
			}
			else {
				result[i][j] = max(result[i - 1][j], result[i][j - 1]);
			}
			res = max(res, result[i][j]);
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> a >> b;
		Phan_hoach();
		cout << res << endl;
		res = 0;
	
	}
	system("pause");
	return 0;
}
