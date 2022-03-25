#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int sumRequired;
int* a = new int[n + 1000];
vector<int>result;
vector<vector<int>>Display;
void input() {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		result.push_back(x);
	}
	sort(result.begin(), result.end());
}
void Defalt() {
	for (int i = 0; i < n; i++) {
		a[i] = 0;
	}
}
void Try(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n-1) {
			int sum = 0;
			for (int x = 0; x < n; x++) {
				if (a[x]) {
					sum += result[x];
				}
			}
			if (sum == sumRequired) {
				vector<int>e;
				for (int x = 0; x < n; x++) {
					if (a[x]) {
						e.push_back(result[x]);
					}
				}
				Display.push_back(e);
			}
		}
		else {
			Try( i + 1);
		}
	}
}
int main() {
	
	int t; cin >> t;
	while (t--) {
		cin >> n >> sumRequired;
		Display.clear();//sau mỗi lần cần lưu mảng mới
		result.clear();// khác với việc nhập cái này cứ push do đó cũng cần xóa đi 
		Defalt();
		input();
		Try(0);
		sort(Display.begin(), Display.end());
		if (Display.size() == 0) {
			cout << -1;
		}
		else {

		for (int i = 0; i < Display.size(); i++) {
			cout << "[";
			for (int x = 0; x < Display[i].size() - 1; x++) {
				cout << Display[i][x] << " ";
			}
			cout << Display[i][Display[i].size() - 1] << "] ";
		}
		}
		cout << endl;
	}
	

	system("pause");
	return 0;
}
