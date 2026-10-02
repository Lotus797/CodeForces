#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    string s;
    cin>> s;
    int m = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == s[i+1]) {
            m++;
        }
    }
    cout << m;
}