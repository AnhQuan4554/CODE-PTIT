#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<set>
#include<cmath>

void input(multimap<int, int>& a, int n,int k ) {
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.insert({ abs(x - k),x });
	}
}
int main() {
	int t; cin >> t;
	
	while (t--) {
		int n, k; cin >> n >> k;
		multimap<int, int>a;
		input(a, n, k);
		for (auto i : a) {
			cout  << i.second << " ";
		}cout << endl;
	}
	

}
