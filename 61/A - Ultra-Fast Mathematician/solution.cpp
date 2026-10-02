#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        cout << (s[i] != t[i]);
    }
}