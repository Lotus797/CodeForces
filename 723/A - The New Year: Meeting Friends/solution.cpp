#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int a,b,c;
    cin >> a>>b>>c;
 
    int maxv = max(a, max(b,c));
    int minv = min(a, min(b,c));
 
    cout << maxv-minv << endl;
 
}