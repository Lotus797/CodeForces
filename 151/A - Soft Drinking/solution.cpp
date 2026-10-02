#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n, k, l, c, d, p, nl, np;
        cin >> n>>k>>l>>c>>d>>p>>nl>>np;
 
 
    int fir = k*l/nl;
    int sec = c*d;
    int thi = p/np;
 
    int miin = min({fir,sec,thi});
    cout << miin/n;
}