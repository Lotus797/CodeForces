#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
 
 
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        s[i] = tolower(s[i]);
    }
    int cnt = 0;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        cnt += (count(s.begin(), s.end(), c) > 0);
    }
    if (cnt == 26)
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