#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
int main() {
    double square;
    while(cin >> square)
    {
        square = square * square;
        square = square * 10 + 0.5;
        square = floor(square);
        square = square  / 10;
        cout << fixed << setprecision(1) << square << endl;
    }
    return 0;
}
