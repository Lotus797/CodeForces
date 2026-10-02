#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
    if (s.front() != '-')
    {
        cout << s << '
';
        return 0;
    }
    string s1 = s;
    s1.pop_back();
    string s2 = s;
    s2.pop_back();
    s2.pop_back();
    s2 += s.back();
    int num1 = stoll(s1);
    int num2 = stoll(s2);
    cout << max(num1, num2) << '
';
}