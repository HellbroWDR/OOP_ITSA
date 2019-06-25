#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
int main() {
    int num;  //ㄏノ璶代刚计
    double Armstrong, a, b, c;
    while(cin >> num)
    {
        a = floor(num / 100);  //κ
        b = num / 10 % 10;     //
        c = num % 10;          //
        Armstrong = pow(a,3)+pow(b,3)+pow(c,3);  //计计ぇミよ㎝
        if(num == Armstrong)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
