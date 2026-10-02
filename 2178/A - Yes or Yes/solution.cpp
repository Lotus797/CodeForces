#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0;  i < (int)s.size(); i++) {
            if (s[i] == 'Y' ) {
            c++;
 
        }
 
        }
        if (c <= 1) {
            cout <<"YES
";
        }else {
            cout <<"NO
";
        }
 
    }
}
 