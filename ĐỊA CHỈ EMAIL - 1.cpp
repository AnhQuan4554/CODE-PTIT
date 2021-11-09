#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
#include<string>
void Xu_li(string a)
{
	string b;
	int dem = 0;
	for (int i = a.length() - 1; i >= 0; i--)
	{
		if (a[i] == ' ')break;
		if (a[i] >= 65 && a[i] <= 90)a[i] = a[i] + 32;
		b.insert(b.begin() + 0, a[i]);//bo tu cuoi vao trong string b
		a.erase(a.begin() + i);
	}
	for (int i = 0; i < a.length(); i++)
	{
		int trung[100];
		int dem = 0;
		while (a[i] != ' ')
		{
			trung[dem] = a[i];
			i++;
			dem++;
		}trung[dem] = '\0';
		if (trung[0] >= 65 && trung[0] <= 90)trung[0] = trung[0] + 32;
		b.insert(b.begin() + (b.length()), trung[0]);
	}
	for (int i = 0; i < b.length(); i++)
	{
		cout << b[i];
	}cout<<"@ptit.edu.vn";
}
int main()
{
	
	string a;
	getline(cin, a);
	Xu_li(a);
	system("pause");
	return 0;
}
