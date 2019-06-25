#include<bits/stdc++.h>
using namespace std;
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=659
int main()
{
    long long sum = 0;
    int arr[6];
    for (int i = 0; i < 6; i++)
        cin >> arr[i];
    for (int j = 0; j < 6; j++)
        sum += arr[j] * arr[j] * arr[j];
    cout << sum << endl;
    return 0;
}
