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
              if(num % j == 0)    //�p��i�H�Q���ɪ�����
              {
                   count++;
              }
         }
         if(count == 2)    //����G�N���u��1�M�Ʀr����
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
