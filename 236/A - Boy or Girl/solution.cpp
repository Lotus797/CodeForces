#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
    int cnt = 0l;
    for (char ch = 'a'; ch <= 'z'; ++ch)
    {
        if (count(s.begin(), s.end(), ch) > 0)
        {
            ++cnt;
        }
    }
    if (cnt % 2 == 0)
    {
        cout << "CHAT WITH HER!
";
    }
    else
    {
        cout << "IGNORE HIM!
";
    }
}