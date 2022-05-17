#include<iostream>
using namespace std;
#include<deque>
int main() {
	int t;
	cin >> t;
	while (t--) {
		deque<long long>a;
		a.push_back(9);
		long long n; cin >> n;
		while (!a.empty()) {
			long long k = a.front();
			a.pop_front();
			if (k % n == 0) {
				cout << k << endl;
				break;
			}
			a.push_back(k * 10);
			a.push_back(k * 10+9);
		}
	}
	system("pause");
	return 0;
}
