#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
   
 
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int res = 1, c = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i - 1] <= a[i])
        {
            c++;
        }
        else
        {
            res = max(res, c);
            c = 1;
        }
    }
    res = max(res, c);
    cout << res << '
';
}