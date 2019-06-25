#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=1479
int main()
{
    int n, cnt[26] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        cnt[c-'a']++;
    }
    for(int i = 0; i < 26; i++)
        if(cnt[i] != 0)
        {
            char c = 'a'+i;
            cout << c << " " << cnt[i] << "\n";
        }
    return 0;
}

