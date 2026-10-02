#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i] == b[j])
            {
                ++res;
            }
        }
    }
    cout << res << '
';
}