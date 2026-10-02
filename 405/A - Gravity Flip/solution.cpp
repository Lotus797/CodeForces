#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    int a[n];
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }
 
    sort(a, a+n);
    reverse(a+n, a);
    for (int i = 0; i < n ; ++i) {
        cout <<  a[i]<< " ";
    }
}