#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6928
int main() {
    int num;
    while(cin >> num)
    {
        for(int i = 1; i <= num;i++)
        {
            cout << i << "*" << i << "=" << i*i << endl;
        }
    }
    return 0;
}
