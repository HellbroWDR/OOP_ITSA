#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900
int main() {
    int x, y;
    while(cin >> x >> y)
    {
        if(x*x+y*y <= 10000)
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

