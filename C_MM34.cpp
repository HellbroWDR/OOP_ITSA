#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
int main() {
    // [C_MM34-] 计拜肈
    int num;  //璶т计计
    while(cin >> num)
    {
        for(int i = 1;i<=num;i++)  //1~num秨﹍代刚
        {
            if(num % i == 0)  //砆俱埃碞琌计
            {
                if(i == num)
                {
                    cout << i << endl;  //讽程计块琌传︽
                }
                else
                {
                    cout << i << " ";   //玥常琌iフ
                }
            }
        }
    }
    return 0;
}
