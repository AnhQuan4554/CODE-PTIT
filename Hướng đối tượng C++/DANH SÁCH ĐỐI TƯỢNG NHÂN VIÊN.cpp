#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int dem = 1;
int kt = 0;
class NhanVien
{
public:
	//ham nhap 
	friend istream& operator >> (istream &in,NhanVien &x) {
		if (kt==0)
		{
			cin.ignore(); kt++;
		}
		x.ma = dem; dem++;
		getline(in, x.Ten);
		getline(in, x.Gioi_tinh);
		getline(in, x.Ngay_sinh);
		getline(in, x.Dia_chi);
		getline(in, x.ma_so_thue);
		getline(in, x.ngay_ki_hop_dong);
		return in;
	}
	//ham xuat
	friend ostream& operator<<(ostream& ot, NhanVien x ) {
		x.setngaysinh(); x.setngay_ki_hop_dong();//sua ngay sinh va ngay ki hop dong
		if (x.ma < 10)cout << "0000" << x.ma<<" ";
		else cout << "000" << x.ma<<" ";
		cout << x.Ten << " " << x.Gioi_tinh << " " << x.Ngay_sinh << " " << x.Dia_chi << " " << x.ma_so_thue << " " << x.ngay_ki_hop_dong;
		cout << endl;
		return ot;
	}
	//ham chinh ngay sinh
	void setngaysinh() {

		if (Ngay_sinh[1] == '/') {
			Ngay_sinh.insert(Ngay_sinh.begin() + 0, '0');
		}
		if (Ngay_sinh[4] == '/') {
			Ngay_sinh.insert(Ngay_sinh.begin() + 3, '0');
		}
	}
	//ham chinh ngay sinh
	void setngay_ki_hop_dong() {
		if (ngay_ki_hop_dong[1] == '/') {
			ngay_ki_hop_dong.insert(ngay_ki_hop_dong.begin() + 0, '0');
		}
		if (ngay_ki_hop_dong[4] == '/') {
			ngay_ki_hop_dong.insert(ngay_ki_hop_dong.begin() + 3, '0');
		}
	}
	NhanVien();
	~NhanVien();

private:
	int ma = 0;
	string Ten;
	string Gioi_tinh;
	string Ngay_sinh;
	string Dia_chi;
	string ma_so_thue;
	string ngay_ki_hop_dong;
};

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
