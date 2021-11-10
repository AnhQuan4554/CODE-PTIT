#include<iostream>
#include<string>
using namespace std;
#include<vector>
int Dem(string a)
{
	int dem = 0;
	if (a[0] != '\t' && a[0] != '\n' && a[0] != ' ')dem++;
	for (int i = 0; i < a.length(); i++)
	{
		if((a[i] == '\t' || a[i] == '\n' || a[i] == ' ')&&(a[i+1] != '\t' && a[i+1] != '\n' && a[i+1] != ' '))
			dem++;
	}return dem;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin.ignore();
		string a;
		getline(cin, a);
		cout << Dem(a);
		cout << endl;

	}
	system("pause");
	return 0;
}
