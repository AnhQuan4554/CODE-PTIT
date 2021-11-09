#include<iostream>
#include<string>
using namespace std;
#include<sstream>
#include<vector>
void input(string a, string b) {
	stringstream s(a);
	vector<string>in;
	string temp;
	while (s>>temp)
	{
		if (temp != b) {
			in.push_back(temp);
		}
	}
	for (int i = 0; i < in.size(); i++) {
		cout << in[i] << " ";
	}
}
int main() {
	string a;
	getline(cin,a);
	string b; getline(cin,b);
	input(a, b);
	system("pause");
	return 0;
}
