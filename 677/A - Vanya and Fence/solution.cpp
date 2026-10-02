#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin >> n>>m;
    int sum = 0;
    while (n--) {
        int a;
        cin >> a;
        if (a>m) {
            sum+=2;
        }else if (a<=m) {
            sum++;
        }
    }
    cout << sum;
 
}