#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;
int check(string a) {
	
		string temp;
		stringstream s(a);
		int chan = 0;int le = 0;
		int count = 0;//so luong so vi neu size se rinh ca dau cach
		while (s >> temp) {
			int x = stoi(temp);//chuyển string về số với thu viện cstdlib
			if (x % 2 == 0) {
				chan++;
				count++;
			}
			else {
				le++;
				count++;
			}
			
		}
		if (count % 2 == 0 && chan > le || count % 2 == 1 && le > chan) {
			return 1;
		}
		else {
			return 0;
		}
}
int main() {
	int t; cin >> t; cin.ignore();
	while (t--)
	{
	string a;
	getline(cin, a);

	if (check(a)==1) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}


	}
	
	system("pause");
	return 0;
}
