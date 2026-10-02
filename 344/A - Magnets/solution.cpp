#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i - 1][1] == a[i][0])
        {
            cnt++;
        }
    }
    cout << cnt << '
';
}