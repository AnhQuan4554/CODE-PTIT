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
		string x; int y;
		cin >> x;
		if (x == "PUSH") {
			cin >> y;
			a.push(y);
		}
		//cout << a.top();
		if (x == "POP") {
			if(a.size())a.pop();
		 }
		 if (x == "PRINT") {
			 if (a.empty())cout << "NONE\n";
			 else cout << a.top() << endl;
		 }
	

	}
	system("pause");
	return 0;
}
