#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(true);
    cin.tie(0);
 
    string s1, s2;
    cin >> s1 >> s2;
 
    for (int i = 0; i < s1.size(); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
 
 
        if (c1<c2) {
            cout << -1;
            return 0;
        }
        if (c1>c2) {
            cout << 1;
            return 0;
        }
    }
    cout <<0;
    return 0;
}