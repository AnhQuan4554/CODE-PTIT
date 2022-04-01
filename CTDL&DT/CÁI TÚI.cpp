#include<iostream>
using namespace std;
#include<algorithm>
int dp[1002][1002];
int n,W;
struct dat {
	int value = 0, weight = 0;
};
dat a[1002];
int res = 0;
void Quy_hoach() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			if (j < a[i].weight) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], (dp[i - 1][j - a[i].weight]) + a[i].value);
			}
			res = max(res, dp[i][j]);
		}
	}
	
}
int main() {

	int t; cin >> t;
	while (t--) {
		cin >> n >> W;
		for (int i = 1; i <= n; i++) {
			cin >> a[i].weight;
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i].value;
		}
		Quy_hoach(); cout << res << endl;
		res = 0;
	}
	system("pause");
	return 0;
}
