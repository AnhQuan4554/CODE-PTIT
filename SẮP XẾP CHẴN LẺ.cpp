#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Nhap(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
}
void Xuat(vector<int>a) {
	for (int i = 0; i <= (a.size()-1) / 2; i++) {
		
		cout << a[i] << " ";
		if ((a.size() - 1) / 2 + 1 + i < a.size()) {
			cout << a[(a.size() - 1) / 2 + 1 + i]<<" ";
		}
	}

}
int main() {
	int t;
	cin >> t;
	while (t--) {
vector<int>a;
	int n;
	cin >> n;
	Nhap(a, n);
	sort(a.begin(), a.end());
	Xuat(a);
		cout << endl;
	}
	
	system("pause");
	return 0;
}
