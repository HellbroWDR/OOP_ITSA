#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=15011
bool cmp(int a, int b)
{
    int c, d;
    int e = a, f = b;
    c = d = 0;
    while(a)
    {
        c += a%10;
        a /= 10;
    }
    while(b)
    {
        d += b%10;
        b /= 10;
    }
    if(c == d)
        if(e < f)
            return true;
    if(c < d)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size()-1; i++)
        cout << v[i] << " ";
    cout << v[v.size()-1] << "\n";
    return 0;
}
