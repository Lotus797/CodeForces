#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
 
 
    int n;
    cin >> n;
    bool a[n + 1]; /// [1..n]
    for (int i = 0; i <= n; ++i)
    {
        a[i] = 0;
    }
    int l;
    cin >> l;
    for (int i = 1, x; i <= l; ++i)
    {
        cin >> x;
        a[x] = 1;
    }
    cin >> l;
    for (int i = 1, x; i <= l; ++i)
    {
        cin >> x;
        a[x] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!a[i])
        {
            cout << "Oh, my keyboard!
";
            return 0;
        }
    }
    cout << "I become the guy.
";
}