#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>
bool cmp(string a, string b) {
	return a+b > b+a;//vd 9 98 thif tong theo kieu string 9+98>98+9
	//tong string la noi chuoi nen 998>989
}
void input(vector<string>& a, int n) {
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;//nhap so nen ko can getline 
		a.push_back(x);
	}
}
void output(vector<string>a) {
	for (auto i : a) {
		cout << i;
	}
}
int main() {
	int t;
	cin >> t;//ko co getline nen ko can cin.ignore
	
	while (t--) {
		vector<string>a;
		int n; cin >> n;
		input(a, n);
		sort(a.begin(), a.end(), cmp);
		output(a);
		cout << endl;
	}
	system("pause");
	return 0;
}
