#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m[n];
        int size = sizeof(m) / sizeof(m[0]);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            m[i] = x;
        }
 
        if (m[0]==0 && m[size-1]==0) {
            cout << "Bob
";
        }else {
            cout << "Alice
";
        }
    }
    return 0;
}