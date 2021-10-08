#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//ham sua tung tu 
void Sua(string &a) {
	if (a[0] <= 122 && a[0] >= 90) {
		a[0] -= 32;
	}
	for (int i = 1; i < a.size(); i++) {
		if (a[i] <= 90 && a[i] >= 65) {
			a[i] += 32;
		}
	}
}
void Cat_tu(string a,int lua_chon) {
	string temp;
	vector <string>b;//ti xua vecto nay
	stringstream s(a);
	while (s >> temp) {
		Sua(temp);//sua ve chuan dinh dang roi moi xuat
		b.push_back(temp);
	}
	//Xuat tu can tim 
	if (lua_chon == 2) {
	for (int i = 1; i < b.size(); i++) {
		cout << b[i] << " ";
	}cout << b[0];
	}
	else if (lua_chon == 1) {
		cout << b[b.size()-1]<<" ";
		for (int i = 0; i < b.size()-1; i++) {
			cout << b[i] << " ";
		}
	}

}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string a;
		int lua_chon; cin >> lua_chon;
		cin.ignore();
		getline(cin, a);
		Cat_tu(a,lua_chon);
		cout << endl;
	}
	system("pause");
	return 0;
}
