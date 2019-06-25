#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=281
int main() {
    int score , rebounds, assists, screenshots, errors;
    //キА眔だ膞狾计  ю计   й篒计   ア粇计
    int mvp;
    while(cin >> score >> rebounds >> assists >> screenshots >> errors)
    {
        mvp = (score*1 + assists*2 + rebounds*2 + screenshots*2) - (errors*2);
        if(mvp>=45)
        {
            cout << "A" << endl;
        }
        else if(35 <= mvp && mvp <= 44)
        {
            cout << "B" << endl;
        }
        else if(25 <= mvp && mvp <= 34)
        {
            cout << "C" << endl;
        }
        else if(mvp < 25)
        {
            cout << "D" << endl;
        }
    }
    return 0;
}
