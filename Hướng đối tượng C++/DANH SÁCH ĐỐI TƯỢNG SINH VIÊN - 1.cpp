#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>
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
        cin.ignore();
        getline(in, x.ten);
        getline(in, x.lop);
        getline(in, x.Ngay_sinh);
        in >> x.diem;
        return in;
    }
    friend ostream& operator<<(ostream& ot, SinhVien x) {
        x.setngaysinh();
        x.ma = dem;
        dem++;/*phai tang trong nay neu khong theo nhuw ham main 
              no moi lan nhap la bien dem tang do do sau khi nhap xong 10 nguoi
              thi bien dem =10 roi con cong gi nua*/
        if (x.ma < 10)cout << "B20DCCN00" << x.ma<<" ";
        else cout << "B20DCCN0" << x.ma<<" ";

        cout << x.ten << " " << x.lop << " " << x.Ngay_sinh << " " << fixed << setprecision(2) << x.diem;
        cout << endl;
        return ot;
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
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
