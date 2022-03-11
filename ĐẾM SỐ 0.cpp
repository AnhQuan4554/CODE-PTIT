#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[1008];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == 0)count++;
		}
		cout << count << endl;
	}
		system("pause");
		return 0;
}
