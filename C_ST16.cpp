#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=684
int main() {
    string num;
    while(cin >> num)
    {
        int count = num.size();
        char re[count];
        strcpy(re, num.c_str());//string to char
        for(int i = 0;i < count;i++)//¿é¥X
        {
            if(i == 4)
            {
                cout << re[i] << endl;
            }
            else
            {
                cout << re[i] << "   ";
            }
        }
    }
    return 0;
}
