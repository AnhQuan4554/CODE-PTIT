#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<sstream>
#include<fstream>
int kt = 0;
int dem = 1;
class Giang_vien
{
public:
	//ham lay bo mon
	string Tat_bo_mon() {//lay chu dau cac bo mon
		stringstream x(Bo_mon);
			string tmp;
			string result;
		while (x >> tmp) {
			if (tmp[0] >= 'a' && tmp[0] <= 'z')tmp[0] -= 32;
			result += tmp[0];
	
		}
		return result;
	}
	//ham lay ra 1 ten
	string ten1() {
		stringstream x(Ten);
		string res;
		string temp;
		while (x >> temp) {
			res = temp;
		}return res;
	}
		//ham so sanh
	friend bool operator <(Giang_vien x, Giang_vien y) {
		if (x.ten1() != y.ten1())return x.ten1() < y.ten1();
		return x.Ma < y.Ma;
	}
	friend istream& operator >> (istream &in,Giang_vien& x) {
		if (kt == 0)cin.ignore(); kt++;

		x.Ma = dem; dem++;
		getline(in, x.Ten);
		getline(in, x.Bo_mon);
		return in;
	}
	friend ostream& operator<<(ostream &ot,Giang_vien x) {
		if (x.Ma >= 10)ot << "GV" << x.Ma;
		else ot <<"GV0"<< x.Ma;
		ot << " " << x.Ten << " " << x.Tat_bo_mon() << endl;
		return ot;
	}
	Giang_vien();
	~Giang_vien();

private:
	string Ten;
	string Bo_mon;
	int Ma{};
};

Giang_vien::Giang_vien()
{
}

Giang_vien::~Giang_vien()
{
}
int main() {
	Giang_vien a[1000]; int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	system("pause");
	return 0;
}
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
