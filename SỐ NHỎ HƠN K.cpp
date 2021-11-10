#include<iostream>
using namespace std;
#include<algorithm>
typedef long long ll;
void Nhap(ll* a, ll n) {
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void KQ(ll* a, ll n, ll k) {
	ll kem_bang = 0;
	ll hon = 0;
	for (ll i = 0; i < n; i++) {
		if (a[i] <= k) {// them bang de xet trong khoang nho hon bien bang thi moi du day 
			/* vd bang =3 thi ti <3 thi moi xet dc
			ca 3 phan tu do */
			kem_bang++;
		}
	}
	for (ll i = 0; i < kem_bang; i++) {
		if (a[i] > k) {
			hon++;
		}
	}
	/*xet tu dau va tu vi tri hon tuc xet qua doan ban nay
	nhiem vu bay h xem trong khoang tu dau den do co so nao lon hon
	k thi tru 1 vi bij lap lai trong cai hon
	con khi xet tu cai hon den cuoi tuc toanf phan tu moi neu cos phan tu
	nao lon them thi hon ++
	moi phan tu tuong ung voi 1 cach xep*/
	ll temp = hon;//ko dat temp bang hon_kem vi phai dat bien temp nho nhat (de yeu cau so lan nho bga)
/*phai xet tu dau vi gia su cai kem_bang kia xep theo dung thu
tu lien ke voi nhau thi ko sao nhung neu chung xep lung tung
trong khoang kem_bang do xuat hien cac so lon hon k thi mk phai giam
bien hon di(vi hon la tinh phia sau k roi coi nhu lap lai) */
	for (ll i = 0, j = kem_bang; j < n; i++, j++) {
		if (a[i] > k) {
			hon--;
		}
		if (a[j] > k) {
			hon++;//vi bien hon kia ban nay moi xet phia sau k
		}
	temp = min(temp, hon);
	}

	cout << temp;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll* a = new ll[n];
		Nhap(a, n);
		KQ(a, n, k);
		cout << endl;
	}

	system("pause");
	return 0;
}
