#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
int main() {
    int num;  //�ϥΪ̭n���ժ��Ʀr
    double Armstrong, a, b, c;
    while(cin >> num)
    {
        a = floor(num / 100);  //�ʦ�
        b = num / 10 % 10;     //�Q��
        c = num % 10;          //�Ӧ�
        Armstrong = pow(a,3)+pow(b,3)+pow(c,3);  //�U�Ӧ�ƼƦr���ߤ�M
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