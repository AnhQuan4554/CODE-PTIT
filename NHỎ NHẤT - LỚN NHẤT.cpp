
#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include<fstream>
#include<sstream>
void Number_max(int m, int s, string& max) {
	int start = 9;
	for (int i = 9; i >= 0; i--) {
		if (s == 0)break;//neu s bang 0 thi thoat luon

		while (s / i >= 1) {
			if (s == 0)break;//if s bang 0 thi thoat 
			char x = i + 48;
			max.insert(max.begin() + max.size(), x);
			s -= i;
		}
	}
	int add = m - max.size();
	while (add--) {
		max.insert(max.begin() + max.size(), '0');
	}
}
void Number_min(string& min, string max) {
	for (int i = max.size() - 1; i >= 0; i--) {
		min.insert(min.begin() + min.size(), max[i]);
	}
	int kt = 1;
	if (min[0] == '0') {
		min[0] = '1';
		for (int i = 1; i < min.size(); i++) {
			if (min[i] != '0') {
				int x = min[i] - 48; x--;
				min[i] = x + 48;
				kt = 0; break;
			}
			if (kt == 0)break;
		}
	}
}
int main() {

	string max, min;
	int m, s; cin >> m >> s;

	if (s == 0 || s > 9 * m) {
		cout << "-1 -1";
	}
	else {
		Number_max(m, s, max);
		Number_min(min, max);
		cout << min << " ";
		cout << max;

	}
	system("pause");
	return 0;
}
