#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n;
    cin >> n;
 
    int a[n];
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int mx = *max_element(a, a + n);
    int mn = *min_element(a, a + n);
 
    int idx_max = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == mx) {
            idx_max = i;
            break;
        }
    }
    int idx_min = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == mn) {
            idx_min = i;
            break;
        }
    }
 
    int swaps = idx_max + (n - 1 - idx_min);
    if(idx_max > idx_min) {
        swaps--;
    }
    cout << swaps;
}