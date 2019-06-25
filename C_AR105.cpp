#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=7342
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < 10; i++)
        v.push_back(i);
    do
    {
        if(v[0] > v[1] && (v[0]*1000+v[2]*100+v[3]*11)*(v[5]*100+v[6]*10+v[7]) == (v[1]*1000+v[2]*100+v[4]*11)*(v[5]*100+v[8]*10+v[9]))
            cnt++;
        if(cnt == n)
        {
            cout << v[0] << v[2] << v[3] << v[3] << "*" << v[5] << v[6] << v[7] << "=" << v[1] << v[2] << v[4] << v[4] << "*" << v[5] << v[8] << v[9] << "\n";
            return 0;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << "None.\n";
    //cout << cnt2 << "\n";
    return 0;
}

