#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin >> n;
    double d = 0;
    double sum = 0;
    while (n--) {
        int t;
        cin >> t;
        sum+=t;
        d++;
    }
    cout << fixed << setprecision(12) << sum / d << endl;
}
 