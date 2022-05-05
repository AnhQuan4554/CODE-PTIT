#include<iostream>
using namespace std;
#include<string>
#include<stack>

int main() {
	int t;
	cin >> t; cin.ignore();
	while (t--) {

		string x;
		getline(cin, x);
		stack<char>a;
		int check = 1;
		for (int i = 0; i < x.length(); i++) {
			if (x[i] == '[' || x[i] == '(' || x[i] == '{') {
				a.push(x[i]);
			}
			else if (x[i] == ']' && !a.empty() && a.top() == '[') {

				a.pop();
			}
			else if (x[i] == '}' && !a.empty() && a.top() == '{') {

				a.pop();
			}
			else if (x[i] == ')' && !a.empty() && a.top() == '(') {

				a.pop();
			}
			
		}
		if (a.empty())cout << "YES\n";
		else cout << "NO\n";
	}
	system("pause");
	return 0;
}
