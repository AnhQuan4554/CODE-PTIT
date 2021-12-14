#include<iostream>
using namespace std;
#define MOD 10000007;
#include<cmath>
#include<vector>
typedef long long ll;

int main() {
	/*thay vì tính 7! ta phan tich nó thành các số chia hết cho 3 
 phân ra thành có 6 và 3 nên tích sẽ chia hết cho 3 mũ 2 là lơn nhất 
 vd 9! thì chia hết cho số lớn nhất là 3 mũ 4 vì 9 chia het scho 3 mũ 2 , 6 và 3 chia hét cho 3
 */
	int t; cin >> t;
	while (t--) {
		int N, p;
		cin >> N >> p;
		int count = 0;
		for (int i = p; i <= N; i += p) {//9! thì chạy tu so 3 6 9 xet nhung phan tu chia het cho 3 thoi 
			int x = i;
			while (x % p == 0)
			{
				count++;
				x /= p;
			}
		}cout << count << endl;
		
	}
	
	system("pause");
	return 0;
}
