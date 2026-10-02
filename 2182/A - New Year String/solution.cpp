#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        bool has2025 = false;
        bool has2026 = false;
 
        for (int i = 0; i + 3 < n; i++) {
 
            if (s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5')
                has2025 = true;
 
 
            if (s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='6')
                has2026 = true;
        }
 
        if (!has2025 || has2026) {
            cout << 0 << '
';
        }
        else {
            cout << 1 << "
";
        }
    }
 
}