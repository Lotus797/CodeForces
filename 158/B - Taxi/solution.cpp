#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int c[5] = {0, 0, 0, 0, 0};
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        ++c[x];
    }
    int res = c[4];
    c[4] = 0;
    while(c[1] + c[2] + c[3] > 0)
    {
        if (c[3] != 0)
        {
            c[3]--;
            if (c[1] != 0)
            {
                c[1]--;
            }
            res++;
        }
        else if (c[2] != 0)
        {
            c[2]--;
            if (c[2] != 0)
            {
                c[2]--;
            }
            else
            {
                if (c[1] != 0)
                {
                    c[1]--;
                }
                if (c[1] != 0)
                {
                    c[1]--;
                }
            }
            res++;
        }
        else
        {
            res += (c[1] + 3) / 4;
            c[1] = 0;
        }
    }
    cout << res << '
';
}