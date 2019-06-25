#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
int main() {
    double C, F;
    while(cin >> C)
    {
        F = (9*C)/5+32;
        cout << fixed << setprecision(1) << F << endl;
    }
    return 0;
}
