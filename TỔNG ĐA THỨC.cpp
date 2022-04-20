#include<iostream>
#include<map>
#include<ctype.h>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main() {
	
	int t; cin >> t; cin.ignore();
	while (t--) {

		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		vector<int>numbers;
		map<int, int>result;
		for (int i = 0; i < s1.length(); i++) {
			if (isdigit(s1[i]) == 0) {
				s1[i] = ' ';
			}
		}
		for (int i = 0; i < s2.length(); i++) {
			if (isdigit(s2[i]) == 0) {
				s2[i] = ' ';
			}
		}
		stringstream ss(s1);
		int trung_gian;
		while (ss >> trung_gian)
		{
			//cout << trung_gian << " ";
			numbers.push_back(trung_gian);
		}
		stringstream ss2(s2);
		while (ss2 >> trung_gian)
		{
			//cout << trung_gian << " ";
			numbers.push_back(trung_gian);
		}

		for (int i = 0; i < numbers.size() - 1; i = i + 2) {
			result[numbers[i + 1]] += numbers[i];
		}
		vector<int>display;
		for (auto i : result) {
			display.push_back(i.first);
			display.push_back(i.second);

		}
		for (int i = display.size() - 1; i >= 1; i = i - 2) {
			cout << display[i];
			if (i > 0) {
				cout << "*x^";
			}
			cout << display[i - 1];
			if (i - 1 > 0)cout << " + ";
		}
		cout << endl;
	}
	
	
	system("pause");
	return 0;
}


//3*x^8+7*x^2+4*x^0
//11*x^6+9*x^2+2*x^1+3*x^0
