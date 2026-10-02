#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % a != 0 && i % b != 0 && i % c != 0 && i % d != 0)
        {
            cnt++;
        }
    }
    cout << n - cnt << '
';
}