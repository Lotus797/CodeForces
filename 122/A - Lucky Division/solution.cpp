#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        string s = to_string(i);
        bool fl = 1;
        for (char c : s)
        {
            if (c != '4' && c != '7')
            {
                fl = 0;
            }
        }
        if (fl)
        {
            if (n % i == 0)
            {
                cout << "YES
";
                return 0;
            }
        }
    }
    cout << "NO
";
}