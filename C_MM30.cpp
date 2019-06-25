#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
int main()
{
     int num, count;
     while(cin >> num)
     {
         for(int j = 1;j <= num;j++)
         {
              if(num % j == 0)    //計算可以被除盡的次數
              {
                   count++;
              }
         }
         if(count == 2)    //等於二代表只有1和數字本身
         {
              cout << "YES" << endl;
         }
         else
         {
            cout << "NO" << endl;
         }
         count = 0;
     }
}

