﻿#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>
#include<sstream>
int kt = 0;
int dem = 1;
using namespace std;
class SinhVien
{
public:

    //ham sua ngay sinh
    void setngaysinh() {
        if (Ngay_sinh[1] == '/') {
            Ngay_sinh.insert(Ngay_sinh.begin() + 0, '0');
        }
        if (Ngay_sinh[4] == '/') {
            Ngay_sinh.insert(Ngay_sinh.begin() + 3, '0');
        }
    }
    friend istream& operator >>(istream& in, SinhVien& x) {
        x.ma = dem;
        dem++;/*phai tang trong nay neu khong theo nhuw ham main
              no moi lan nhap la bien dem tang do do sau khi nhap xong 10 nguoi
              thi bien dem =10 roi con cong gi nua*/
        //  cin.ignore();
       // cin.ignore(1, '/n');
        scanf("\n");
        getline(in, x.ten);
        getline(in, x.lop);
        getline(in, x.Ngay_sinh);
        in >> x.diem;
        return in;
    }
    friend ostream& operator<<(ostream& ot, SinhVien x) {
        //sua ngay sinh
        x.setngaysinh();
        //sua ten
        x.Fix_Hoten(x.ten);
        //tang ma dem
      
        if (x.ma < 10)cout << "B20DCCN00" << x.ma << " ";
        else cout << "B20DCCN0" << x.ma << " ";

        cout << x.ten << x.lop << " " << x.Ngay_sinh << " " << fixed << setprecision(2) << x.diem;
        cout << endl;
        return ot;
    }
    //ham sua ho ten
    void Fix_Hoten(string& a) {
        stringstream s(a);
        string temp;
        string b;
        while (s >> temp) {
            if (temp[0] >= 97 && temp[0] <= 122)temp[0] -= 32;
            for (int i = 1; i < temp.size(); i++) {
                if (temp[i] >= 65 && temp[i] <= 90)temp[i] += 32;
            }
            b.insert(b.begin() + b.size(), temp.begin(), temp.end());
            b += " ";
        }a = b;
    }
    //ham lay thong tin diem
    float getdiem() {
        return diem;
    }
    SinhVien();
    ~SinhVien();

private:
    int ma;
    string ten;
    string lop;
    string Ngay_sinh;
    float diem;
};
//Ham sap xep sinh vien theo diem
void sapxep(SinhVien ds[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (ds[i].getdiem() < ds[j].getdiem()) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;

            }
        }
    }
}
SinhVien::SinhVien()
{
}

SinhVien::~SinhVien()
{
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
