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
        if (n == 2) {
            cout << 2 << '
';
        }
        else if (n == 3) {
            cout << 3 << '
';
        }
        else if (n % 2 == 0) {
            cout << 0 << '
';
        }
        else {
            cout << 1 << '
';
        }
    }
}