#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
    string t = "hello$";
    int idx = 0;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == t[idx])
        {
            idx += 1;
        }
    }
    if (t[idx] == '$')
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
}