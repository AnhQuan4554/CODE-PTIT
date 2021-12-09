#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#include<sstream>
#include<vector>
void Cut_string(vector<string>& a, string b) {
	stringstream s(b);
	string temp;
	while (s >> temp) {
		a.push_back(temp);
	}
}
int main() {
	int t; cin >> t; cin.ignore();
	while (t--) {
		vector<string>a;
		string b;
		getline(cin, b);
		Cut_string(a, b);
		for (int i = a.size() - 1; i >= 0; i--)cout << a[i] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}
