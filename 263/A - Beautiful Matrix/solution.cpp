#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
 
    int n;
 
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin >> n;
            if (n==1) {
                cout << abs(i-2)+abs(j-2);
            }
        }
    }
 
}