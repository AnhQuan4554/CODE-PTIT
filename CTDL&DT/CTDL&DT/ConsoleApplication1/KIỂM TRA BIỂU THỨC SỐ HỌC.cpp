#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	stack<int>a;
	cin.ignore();
	while (t--) {
		int check = 0;
		string x;
		getline(cin, x);
		for (int i = 0; i < x.length(); i++) {
			if (x[i] == ')') {
				check = 0;//sau mỗi lần kiểm tra 1 cặp mới thì luôn cho check =0 tức là dư thừa 
				char trung_gian = a.top();
				while (trung_gian!='(')
				{
					if (trung_gian == '+' || trung_gian == '-' || trung_gian == '*' || trung_gian == '/') {
						check = 1;
					}
					a.pop();
					trung_gian = a.top();
				}a.pop();//thấy một cặp thỏa mãn thì xóa luôn xấu "(" đi để kiể tra cặp khác
				if (check == 0)break;
			}
			else {
				a.push(x[i]);
			}
		}
		if (check==0)cout << "Yes\n";
		else cout << "No\n";


	}
	system("pause");
	return 0;
}
