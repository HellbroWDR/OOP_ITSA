#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=658
int main()
{
    vector<int> v;
    for(int i = 0; i < 6; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for(int i = 5; i > 0; i--)
        cout << v[i] << " ";
    cout << v[0] << "\n";
    return 0;
}

