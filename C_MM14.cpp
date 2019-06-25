#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
int main() {
    int T, days, hrs, mins, secs;
    while(cin >> T)
    {
        days = floor(T / 86400);
        hrs = floor((T % 86400)/3600);
        mins = floor((T % 86400 % 3600)/60);
        secs = T % 86400 % 3600 % 60;

        cout << days << " days" << endl;
        cout << hrs << " hours" << endl;
        cout << mins << " minutes" << endl;
        cout << secs << " seconds" << endl;
    }
    return 0;
}
