#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    if (n%2==0) {
        cout << n/2;
    }else if (n%2==1) {
        cout << -(n/2+1);
    }
}