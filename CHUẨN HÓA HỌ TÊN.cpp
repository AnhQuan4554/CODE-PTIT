#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//ham bien doi x 
void Chuan_hoa(string &x) {
	if (x[0] >= 97 && x[0] <= 122) {
		x[0] -= 32;
	}
	for (int i = 1; i < x.size(); i++) {
		
		if (x[i] >= 65 && x[i] <= 90) {
			x[i] += 32;
		}
	}
}
//tu cuoi viet hoa
void Hoa(string &a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] <= 122 && a[i] >= 97) {
			a[i] -= 32;
		}
	}
}
int main() {
	string a;
	getline(cin, a);
	
	vector<string>temp;
	stringstream b(a);
	string x;
	int dem = 0;
	while (b >> x) {
		temp.push_back(x);
	}

	for (int i = 0; i < temp.size()-1; i++) {
		Chuan_hoa(temp[i]);
		cout << temp[i];
		if (i < temp.size() - 2) {
			cout << " ";
		}
	}
	//CHuan hao tu cuoi cung
	Hoa(temp[temp.size() - 1]);
	cout << ", " << temp[temp.size() - 1];
	system("pause");
	return 0;
}
