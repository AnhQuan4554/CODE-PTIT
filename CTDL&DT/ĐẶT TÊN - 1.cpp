#include<iostream>
using namespace std;
#include<vector>
#include<set>
int check = 1;
void input(int* a, int k) {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void handle(int* a, int n,int k) {
	int i = k ;
	while (i > 0 && a[i] == n - k + i ) {
		i--;
	}
	if (i <= 0) {
		check = 0;
	}
	else {
		a[i]++;
		int start = i + 1;
		for (; start <= k; start++) {
			a[start]=a[start-1]+1;
		}
	}

}
int main() {
	int n, k; cin >> n >> k;
	set<string>a;
	vector<pair<string, int>>b(1000);
	while (n--) {
		string x;
		cin >> x;
		a.insert(x);
	}
	int dem = 1;
	for (auto i : a) {

		b[dem].first = i;
		b[dem].second = dem;
		dem++;
	}
	/*for (int i = 1; i < dem; i++) {
		cout << b[i].first << " "<<b[i].second;
		cout << endl;
	}*/
	int d[1000];
	input(d, k);
	while (check) {
		for (int i = 1; i <= k; i++) {
		/*	cout << d[i];
			cout << " " << "cua b";*/
			cout << b[d[i]].first << " ";
		}cout << endl;
		handle(d, dem-1, k);
	}
	system("pause");
	return 0;
}
