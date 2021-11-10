#include <iostream>
#include <iomanip>
using namespace std;
#include<string>
struct SinhVien {
    string Ten;
    string Lop;
    string ngay_sinh;
    float Diem{};
};
typedef struct SinhVien SV;
void nhap(SV& a) {
    getline(cin, a.Ten);
    getline(cin, a.Lop);
    getline(cin, a.ngay_sinh);
    cin >> a.Diem;
}
void in(SV a) {
    //them so 0 vao truoc ngay tháng sinh 
    if (a.ngay_sinh[1]=='/') {
        a.ngay_sinh.insert(a.ngay_sinh.begin() + 0, '0');
    }
    if (a.ngay_sinh[4]=='/') {
        a.ngay_sinh.insert(a.ngay_sinh.begin() + 3, '0');
    }
    
    cout << "B20DCCN001" << " " << a.Ten << " " << a.Lop << " " << a.ngay_sinh << " " << fixed << setprecision(2) << a.Diem;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
