#include<iostream>
#include<vector>
#include<iomanip>
#include<set>
using namespace std;
void Nhap(vector<long long>& a, int n) {
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if (x > 0) {
			a.push_back(x);
		}

	}
}
void Them_vao_set(vector<long long>a, set<long long>& b) {
	for (long long i = 0; i < a.size(); i++) {
		b.insert(a[i]);
	}
}
int  Xu_li(set<long long>a) {
	long long start = 1;
	//chen con tro
	for (set<long long>::iterator i = a.begin(); i != a.end(); i++) {
		if (start < *i) {
			return start;
		}
		start = *i + 1;
	}return start;

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<long long>a;
		set<long long>b;
		int n;
		cin >> n;
		Nhap(a, n);
		Them_vao_set(a, b);
		cout << Xu_li(b);
		cout << endl;
	}
	system("pause");
	return 0;
}
