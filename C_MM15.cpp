#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2927
int main() {
    int x, y;
    while(cin >> x >> y)
    {
        if(0 <= x && x <=100 && 0 <= y && y <=100)
        {
            cout << "inside" << endl;
        }
        else
        {
            cout << "outside" << endl;
        }
    }
    return 0;
}
