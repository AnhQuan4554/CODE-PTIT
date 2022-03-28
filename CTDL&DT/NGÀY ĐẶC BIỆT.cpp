#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string>day = { "02","20","22" };
	string month = "02";
	vector<string>year = { "2000","2002","2020","2022","2200","2202","2220","2222" };
	for (int i = 0; i < day.size(); i++) {
		for (int j = 0; j < year.size(); j++) {
			cout << day[i] << "/" << month << "/" << year[j] << endl;
		}
	}
	system("pause");
	return 0;
}
