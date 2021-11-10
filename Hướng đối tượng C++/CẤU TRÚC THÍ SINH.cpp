#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
struct ThiSinh {
	string ten;
	string ngay_sinh;
	float diem1, diem2, diem3;
};
typedef struct ThiSinh TS;

void nhap(TS& a) {
	getline(cin, a.ten);
	getline(cin, a.ngay_sinh);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void in(TS a) {
	cout << a.ten << " " << a.ngay_sinh << " " << fixed << setprecision(1) << a.diem1 + a.diem2 + a.diem3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
