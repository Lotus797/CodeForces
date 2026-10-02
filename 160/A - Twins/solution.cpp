#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    int coin = 0, say = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        sum -= a[i];
        coin += a[i];
        say++;
        if (coin > sum)
        {
            break;
        }
    }
    cout << say << '
';
}