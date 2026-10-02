#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s, res;
    cin >> s;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (i + 2 < (int)s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!res.empty() && res.back() != ' ')
            {
                res += " ";
            }
        }
        else
        {
            res += s[i];
        }
    }
    cout << res << '
';
}