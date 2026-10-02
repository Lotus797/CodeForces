#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[101], pos[101];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
 
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            if ((pos[i] - pos[i-1]) % 2 == 0) {
                ok = false;
                break;
            }
        }
 
        if (ok){
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}