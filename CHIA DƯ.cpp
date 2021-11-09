#include<iostream>
#include<iomanip>
using namespace std;
void KQ(long long a,long long b)
{
    int kt = 0;
    for (long long i = 0; i < b; i++)
    {
        if ((a * i) % b == 1) {
            cout << i;
            kt = 1;
            break;
        }
    }
    if (kt == 0)cout << "-1";
}
int main() {
    
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a>>b;
        KQ(a,b);
        cout << endl;
    }
    system("pause");
    return 0;
}
