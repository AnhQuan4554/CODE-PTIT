#include<iostream>
#include<string>
using namespace std;
long long result(string a,long long M){
	long long total = 0;
	long long re = 0;
	for (int i = 0; i < a.size(); i++) {
		total = ((a[i] - '0')+total * 10)%M;//meo để tìm số dư của số sieu lớn ,vd 527/8 thì thay ca so to do sẽ thành 47/8 ở đoạn cuối cùng vì 52%8 =4 . 47%8=7
	}return total;
}
int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string N;
		long long M;
		cin >> N >> M;
		cout << result(N,M) << endl;
		
	}
	system("pause");
	return 0;
}
