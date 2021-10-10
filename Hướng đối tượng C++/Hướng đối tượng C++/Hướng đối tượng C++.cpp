//Ở một xóm trọ Ba Con Sâu nọ, có 3 anh chàng từ tỉnh lẻ lên thành phố lập nghiệp.Với một quyết tâm và ý chí
//hừng hực, 3 anh đã may mắn được nhận làm việc ở các công ty tầm cỡ quốc gia với các chức danh lần lượt như sau :
//NHÂN VIÊN SỬA ỐNG NƯỚC
//NHÂN VIÊN GIAO HÀNG
//NHÂN VIÊN XE ÔM 4.0
//1. Hãy phân tích và mô tả các thông tin cần thiết để quản lý 3 nhân viên trên
//2. Tính tiền lương hàng tháng của 3 nhân viên trên
//Biết :
//NHÂN VIÊN SỬA ỐNG NƯỚC : số giờ sửa x 50000
//NHÂN VIÊN GIAO HÀNG : số hàng giao x 33.500
//NHÂN VIÊN XE ÔM 4.0 : số km x 10000
//Sau quá trình khảo sát thị trường và thấy được tiềm năng của các chị em nội trợ về nhu cầu liên hệ các anh
//thợ SỬA ỐNG NƯỚC ngày càng tăng, đồng thời dịch vụ GIAO HÀNG ngày càng cao, song song đó
//cuộc cách mạng công nghệ 4.0 ngày càng được ứng dụng rộng rãi, và nền kinh tế chia sẻ cũng dần được hình thành
//dẫn đến việc các anh XE ÔM 4.0 cũng ăn nên làm ra.
//Và điều gì đến cũng đã đến - trời không phụ lòng người, với tất cả niềm đam mê và yêu nghề của mình - 3 anh chàng
//tỉnh lẻ ngày nào giờ đã quyết định ngồi lại với nhau để cùng chơi một cuộc chơi lớn hơn, mang tầm cỡ xuyên quốc gia
//và cạnh tranh trực tiếp với các ông lớn trên thế giới như Lazada, Alibaba, Amazon, Grab, Go - Viet, JAV...
//Công ty Ba Con Sói quyết định thuê thêm nhiều nhân viên nhằm đáp ứng nhu cầu của khách hàng và cụ thể
//là không muốn bỏ qua miếng bánh béo bỡ này.
//3. Hãy giúp công ty Ba Con Sói viết một ứng dụng quản lý các nhân viên đã đề cập.
//4. Tính tổng tiền lương hàng tháng của các nhân viên
//5. Thống kê các nhân viên giảm dần theo lương



//===============================================================================================================================
#include<iostream>
using namespace std;
#include<string>
int dem_giao = 0, dem_xe_om = 0, dem_ong_nuoc = 0;
// Ham cha cua 3 nhan vien(chua cac thong tin chung)
class Nhan_vien
{
public:
	void Nhap();
	void Xuat();
	Nhan_vien();
	~Nhan_vien();

protected:
	//string cho chu;
	string Ten;
	int Tuoi{};
	string Gioi_tinh;
	string dia_chi;
	int chieu_cao{};
	int can_nang{};
};

Nhan_vien::Nhan_vien()
{
}

Nhan_vien::~Nhan_vien()
{
}
//ham nhap thong tin nhan vien cua ham cha
void Nhan_vien::Nhap() {
	cin.ignore();
	cout << "\n\t\tNhap Ho ten cua nhan vien la: ";
	getline(cin, Ten);
	cout << "\n\t\tNhap tuoi cua nhan vien: "; cin >> Tuoi;
	cin.ignore();//truoc do nhap tuoi 
	cout << "\n\t\tNhap Dia chi "; getline(cin, dia_chi);
	cout << "\n\t\tNhap chieu ca va can nang cua nhan vien";
	cin >> chieu_cao >> can_nang;
}
//Ham xuat thong tin nhan vien cua ham cha
void Nhan_vien::Xuat(){
	//cout << "\n\t\t\tTHONG TIN CUA NHAN VIEN LA";
	cout << "\n\t\tHo ten nhan  vien: " << Ten;
	cout << "\n\t\tTuoi la : " << Tuoi;
	cout << "\n\t\tDia chi o: " << dia_chi;
	cout << "\n\t\tCHieu cao va can nang lan luot la: " << chieu_cao << " " << can_nang << "(kg)";


}
//Ham con cua nhan vien sua ong nuoc
class Ong_nuoc:public Nhan_vien
{
public:
	void Nhap_ong_nuoc();
	float Tinh_tien_sua_do(){//neu dung ham ben ngoai thi phai float Ong_nuoc::Tinh tien sua do
		return so_gio_sua *50000;
	}
	void Xuat_ong_nuoc();
	Ong_nuoc();
	~Ong_nuoc();

private:
	float so_gio_sua{};
};
//Ham Nhap Thong tin cua nhan vien ong nuoc
void Ong_nuoc::Nhap_ong_nuoc() {
	Nhan_vien::Nhap();
	cout << "\n\t\tNhap so gio nhan vien da sua";
	cin >> so_gio_sua;
}
//Ham xuat thong tin cua nhan vien ong nuoc
void Ong_nuoc::Xuat_ong_nuoc() {
	Nhan_vien::Xuat();
	cout << "\n\t\tSo gio nhan vien da sua la:" << so_gio_sua;
	cout << "\n\t\tTien luong cua nhan vien sua ong nuoc la:" << Tinh_tien_sua_do();
}
Ong_nuoc::Ong_nuoc()
{
}

Ong_nuoc::~Ong_nuoc()
{
}
//Ham Nhap thong tin cua Nhan Vien Giao hang
class Giao_hang:public Nhan_vien
{
public:
	void Nhap_nhan_vien_giao_hang();
	void Xuat_nhan_vien_giao_hang();
	double Tien_so_hang_giao(){
		return so_hang_giao * 33.500;
	}
	Giao_hang();
	~Giao_hang();

private:
	int so_hang_giao{};
};
//Ham nhap thong tin nhan vien giao hang
void Giao_hang::Nhap_nhan_vien_giao_hang() {
	Nhan_vien::Nhap();
		cout << "\n\t\tNhap so hang da giao duoc";
		cin >> so_hang_giao;
}
//Ham xuat thong tin nhan vien giao hang
void Giao_hang::Xuat_nhan_vien_giao_hang() {
	Nhan_vien::Xuat();
	cout << "\n\t\tSo hang giao duoc la :" << so_hang_giao;
	cout << "\n\t\tSo tien giao hang la: " << Tien_so_hang_giao();
}
Giao_hang::Giao_hang()
{
}

Giao_hang::~Giao_hang()
{
}
//Ham thong tin cua xe om 4.0
class Xe_om :public Nhan_vien
{
public:
	
	void Nhap_nhan_vien_xe_om();
	void Xuat_nhan_vien_xe_om();
	//ham tinh tien xe om
	float Tien_xe_om() {
		return km * 10000;
	}
	Xe_om();
	~Xe_om();

private:
	float km{};
};
//Ham nhap thong tin nhan vien xe om la
void Xe_om::Nhap_nhan_vien_xe_om() {
	Nhan_vien::Nhap();
	cout << "\n\t\tNhap so km da di :";
	cin >> km;
}
//Ham xuat nhan vien xe om
void Xe_om::Xuat_nhan_vien_xe_om() {
	Nhan_vien::Xuat();
	cout << "\n\t\tSo km da di duoc la :" << km;
	cout << "\n\t\tSo tien xe om kiem duoc la:" << Tien_xe_om();
}
Xe_om::Xe_om()
{
}

Xe_om::~Xe_om()
{
}
//=========================Ham Menu ========================
void Menu(Giao_hang* a[], Xe_om* b[], Ong_nuoc* c[]) {
	while (1) {
		system("cls");
		cout << "\n\t\t1.Nhap thong tin cua nhan vien";
		cout << "\n\t\t2.Xuat thong tin cua nhan vien";
		cout << "\n\t\t3.Xuat tien cua nhan vien";
		cout << "\n\t\t\t\t0.END\n";
		int luachon;
		cin >> luachon;
		if (luachon == 1) {
			while (1) {
			system("cls");
			cout << "\n\t\t1.Nhap thong tin cua nhan vien giao hang";
			cout << "\n\t\t2.Nhap thong tin cua nhan vien xe om";
			cout << "\n\t\t3.Nhap thong tin nhan vien sua ong nuoc";
			cout << "\n\t\t0. Thoat de nhap la chon khac\n";
			int q;
			cout << "\n\t\tBan muon nhap thong tin cua nhan vien nao :";
			cin >> q;
			if (q == 1) {
				Giao_hang* x = new Giao_hang;
				x->Nhap_nhan_vien_giao_hang();
				a[dem_giao] = x;
				dem_giao++;
			}
			else if (q == 2) {
				Xe_om* x = new Xe_om;
				x->Nhap_nhan_vien_xe_om();
				b[dem_xe_om] = x;
				dem_xe_om++;
			}
			else if (q== 3) {
				Ong_nuoc* x = new Ong_nuoc;
				x->Nhap_ong_nuoc();
				c[dem_ong_nuoc] = x;
				dem_ong_nuoc++;
			}
		else if (q == 0) {
			break;
		}
			}
		}
		else if (luachon == 2) {//lua chon xuat thon tin nhan vien
			while (2) {
			system("cls");
			cout << "\n\t\t1:Xuat thong tin nhan vien giao hang";
			cout << "\n\t\t2:Xuat thong tin nhan vien xe om";
			cout << "\n\t\t3:Xuat thong tin nhan vien sua ong nuoc";
			cout << "\n\t\t\t0 END\n";
			int q; cin >> q;
			if (q == 1) {
				cout << "\n\t\tThong tin cua nhan vien giao hang la:";
				for (int i = 0; i < dem_giao; i++) {
					a[i]->Xuat_nhan_vien_giao_hang();
				}
				system("pause");
			}
			else if (q == 2) {
				cout << "\n\t\tThong tin cua nhan vien xe om la:";
				for (int i = 0; i < dem_xe_om; i++) {
					b[i]->Xuat_nhan_vien_xe_om();
				}
				system("pause");
			}
			else if (q == 3) {
				cout << "\n\t\tThong tin cua nhan vien sua ong nuoc la:";
				for (int i = 0; i < dem_ong_nuoc; i++) {
					c[i]->Xuat_ong_nuoc();
				}
				system("pause");
			}
			else if (q == 0) {
				break;
			}
			}

		}
		else if (luachon == 0) {
			break;
		}
	}
}
int main() {

	Giao_hang* a[100];
	Ong_nuoc* c[100];
	Xe_om* b[100];
	Menu(a, b, c);

	//Ong_nuoc* a = new Ong_nuoc;
	//a->Nhap();
	//a->Nhap_gio_sua();
	//a->Xuat();
	//cout << "\n\t\tSo_tien ong nuoc sua dc la: " << a->Tinh_tien_sua_do();

	/*Giao_hang* b = new Giao_hang;
	b->Nhap();
	b->Nhap_so_hang_giao();
	b->Xuat();
	cout << "\n\t\tSo tien ma nguoi giao hang nhan duoc la: " << b->Tien_so_hang_giao();*/
	
	/*Xe_om* c = new Xe_om;
	c->Nhap();
	c->So_km_di_duoc();
	c->Xuat();
	cout << "\n\t\tSo tien xe om co duoc la :" << c->Tien_xe_om();*/
	system("pause");
	return 0;
}