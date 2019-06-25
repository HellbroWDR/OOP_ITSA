#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925
int main() {
    int num;
    int sum = 0;
    while(cin >> num)
    {
        for(int i = 1;i <= num;i++)
        {
            if(i % 3 == 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
