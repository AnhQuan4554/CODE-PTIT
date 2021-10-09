Cho xâu ký tự S bao gồm các số từ 0 đến 9. Nhiệm vụ của bạn là đếm số các xâu con của S là số chia hết cho 8 và không chia hết cho 3.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự số S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

Output:

2
888
6564525600

5
15
  
  
                                                        CODE  
﻿#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
ll change(string a, int k) {//k la so can xet su chia het
	ll dem = 0;
	for (ll i = 0; i < a.size(); i++) {
		ll n = 0;
		for (ll j = i; j < a.size(); j++) {
			n = n * 10 + (a[j] - 48);
			n = n % k;
			if (n == 0) {
				dem++;
				//cout << n<<" ";
			}
		}
	}return dem;
}
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		getline(cin, a);
		cout << change(a, 8) - change(a, 24)<<endl;

	}
}
