#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=200
int main()
{
    int n,count;//n�O�����
    char change;//�������Ȧs��
    cin >> n;
    string input;
    for(int j = 0; j < n; j++)
    {
        cin >> input;
        count = input.size();//string ����
        char result[count]; //�s�J�^�嵲�G
        strcpy(result, input.c_str());//string to char
        for(int i = 0; i<floor(count/2); i++) //�s�y�^��
        {
            change = result[i];
            result[i] = result[count-1-i];
            result[count-1-i] = change;
        }
        for(int i = 0; i<count; i++) //��X
        {
            if(i == count-1)
            {
                cout << result[i] << endl;
            }
            else
            {
                cout << result[i];
            }
        }
    }
    return 0;
}
