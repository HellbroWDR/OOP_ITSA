#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6947
int main() {
    int year;
    while(cin >> year)
    {
        if(year%4==0)
        {
            if(year % 100 != 0 || year % 400 == 0)
            {
                cout << "Bissextile Year" << endl;
            }
            else
            {
                cout << "Common Year" << endl;
            }
        }
        else
        {
            cout << "Common Year" << endl;
        }
    }
    return 0;
}
