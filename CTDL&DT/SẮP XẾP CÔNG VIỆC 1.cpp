#include<iostream>
using namespace std;
#include<algorithm>
int n;
int dem = 1;
struct cv {
	int start, end;
};
typedef struct cv cv;
cv a[1009];
bool cmp(cv a, cv b) {
	return a.end < b.end;
}
void Tham_lam() {
	int j = 0;
	for (int i = 1; i < n; i++) {
		if (a[i].start >= a[j].end) {
			j = i; dem++;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i].start;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i].end;
		}
		sort(a, a + n, cmp);
		Tham_lam();
		cout << dem<<endl;
		dem = 1;
	}
	system("pause");
	return 0;
}
