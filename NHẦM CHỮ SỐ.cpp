#include<iostream>
using namespace std;
int numMin(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '6')a[i] = '5';
	}
	long long sum = 0;
	for (int i = 0; i < a.length(); i++) {
		sum = sum*10+ (a[i] - '0');
	}
	return sum;
}
int numMax(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5')a[i] = '6';
	}
	long long sum = 0;
	for (int i = 0; i < a.length(); i++) {
		sum = sum * 10 + (a[i] - '0');
	}
	return sum;
}
int main() {
	
		string a, b; cin >> a >> b;
		
		cout << numMin(a) + numMin(b) << " " << numMax(a) + numMax(b) << endl;;
	
	system("pause");
	return  0;
}
