#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    for (int a = 1; a <= w; ++a)
    {
        total += a * k;
    }
    if (n >= total)
    {
        cout << 0 << '
';
    }
    else
    {
        cout << total - n << '
';
    }
 
}