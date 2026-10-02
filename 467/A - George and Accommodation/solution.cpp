#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int sum = 0;
    while (n--) {
        int a,b;
        cin >> a>>b;
        if (b>=a+2) {
            sum++;
        }
    }
    cout << sum;
 
}