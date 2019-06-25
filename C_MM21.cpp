#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
int main() {
    int n;
    long long factorial = 1;
    while(cin >> n)
    {
        if(0 < n && n < 20)
        {
            for(int i = 1; i <= n; i++)
            {
                factorial   = factorial * i;
            }
            cout << factorial << endl;
            factorial = 1;
        }
    }
    return 0;
}
