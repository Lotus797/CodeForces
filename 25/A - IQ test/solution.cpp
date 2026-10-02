#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    int evenCount = 0, oddCount = 0;
    int evenPos = -1, oddPos = -1;
 
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
 
        if (a % 2 == 0) {
            evenCount++;
            evenPos = i;
        } else {
            oddCount++;
            oddPos = i;
        }
    }
 
    if (evenCount == 1)
        cout << evenPos;
    else
        cout << oddPos;
 
    return 0;
}