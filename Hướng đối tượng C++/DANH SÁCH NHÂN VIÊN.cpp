#include<iostream>
#include <iomanip>
using namespace std;
#include<string>
int r = 0;
struct NhanVien {
    //ma 00001
    string Ten;
    string Gioi_tinh;
    string ngay_sinh;
    string Dia_chi;
    string Ma_so_thue;
    string Mgay_ki_hop_dong;
};
typedef struct NhanVien NV;
void nhap(NV& a) {
    if (r == 0)cin.ignore();
    getline(cin, a.Ten);
    getline(cin, a.Gioi_tinh);
    getline(cin, a.ngay_sinh);
    getline(cin, a.Dia_chi);
    getline(cin, a.Ma_so_thue);
    getline(cin, a.Mgay_ki_hop_dong);
    r++;
}
void in(NV a) {
    //them so 0 vao truoc ngay tháng sinh  va ngay ki hop dong
    if (a.ngay_sinh[1] == '/') {
        a.ngay_sinh.insert(a.ngay_sinh.begin() + 0, '0');
    }
    if (a.ngay_sinh[4] == '/') {
        a.ngay_sinh.insert(a.ngay_sinh.begin() + 3, '0');
    }
    if (a.Mgay_ki_hop_dong[1] == '/') {
        a.Mgay_ki_hop_dong.insert(a.Mgay_ki_hop_dong.begin() + 0, '0');
    }
    if (a.Mgay_ki_hop_dong[4] == '/') {
        a.Mgay_ki_hop_dong.insert(a.Mgay_ki_hop_dong.begin() + 3, '0');
    }
    cout  << a.Ten << " " << a.Gioi_tinh << " " << a.ngay_sinh << " " << a.Dia_chi << " " << a.Ma_so_thue << " " << a.Mgay_ki_hop_dong;
}
void inds(NV a[],int n) {
    for (int i = 0; i < n; i++) {
        string ma= string(5 -to_string(i+1).length(), '0');
        cout << ma + to_string(i+1)<<" ";
        in(a[i]); cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
