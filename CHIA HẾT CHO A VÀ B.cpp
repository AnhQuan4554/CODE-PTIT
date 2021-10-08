#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long M, N, A, B;
		long long count = 0;
		cin >> M >> N >> A >> B;
		for (long long i = M; i <= N; i++) {
			if (i % A == 0) {
				count++;
				continue;
			}
				
			if (i % B == 0) {
				count++;
				continue;
			}
				

		}
		cout << count << endl;
	}


}
