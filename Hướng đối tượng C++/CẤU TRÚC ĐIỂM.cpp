#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct Point {
	double x, y;
};
typedef struct Point P;
void input(P& a) {
	cin >> a.x>>a.y;
}
double distance(P &a, P &b) {
	return sqrt(abs(a.x - b.x) * abs(a.x - b.x) + abs(a.y - b.y) * abs(a.y - b.y));
	
	
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
