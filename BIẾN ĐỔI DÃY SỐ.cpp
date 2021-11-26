#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}
int output(vector<int>a) {
	int count = 0;
	int left = 0;
	int right = a.size() - 1;
	while (left < right) {
		if (a[left] == a[right]) {
			left++;
			right--;
		}
		else if (a[left] < a[right]) {
			a[left + 1] += a[left];
			count++;
			left++;
			//phai tang len cu ap dung vd de hieu 
			//neu ko tang se bi treo vi left right van giu nguyen
		}
		else {
			a[right - 1] += a[right];
			count++;
			right--;
		}
	}return count;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<int>a;
		int n; cin >> n;
		input(a, n);
		cout << output(a) << endl;
	}
	system("pause");
	return 0;
}
