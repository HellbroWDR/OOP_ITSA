#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879
int main() {
    int i, result;

    while(cin >> i)
    {
        result = pow(2, i);
        if(i > 31)
        {
            cout << "Value of more than 31" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}
