#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int a2 = 0, b2 = 0, c2 = 0;
 
 
    while (n--) {
        int a,b,c;
        cin >> a>>b>>c;
        a2 += a;
        b2 += b;
        c2 +=c;
    }
    if (a2 == 0 && b2==0 && c2==0) {
        cout << "YES
";
    }else {
        cout << "NO
";
    }
 
}