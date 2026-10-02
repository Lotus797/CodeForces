#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n,k;
    cin >> n>>k;
 
    int o = (n+1)/2;
 
    if (k<=o) {
        cout << 2*k-1;
    }else {
        cout << 2*(k-o);
    }
}
 