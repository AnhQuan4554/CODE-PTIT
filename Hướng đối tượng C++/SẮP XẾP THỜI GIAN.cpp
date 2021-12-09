#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
struct time {
    int  hours, minute, moments;
};
typedef struct time TIME;
bool cmp(TIME a, TIME b) {
    if (a.hours != b.hours)return a.hours < b.hours;
    if (a.minute != b.minute)return a.minute < b.minute;
    return a.moments < b.moments;
}
void intput(TIME a[6000], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i].hours  >> a[i].minute >> a[i].moments ;
    }
}
void Output(TIME a[6000], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].hours << " " << a[i].minute << " " << a[i].moments << endl;
    }
}
int main() {
    TIME a[6000];
    int n; cin >> n;
    intput(a, n);
    sort(a, a + n, cmp);
    Output(a, n);
    return 0;
}
