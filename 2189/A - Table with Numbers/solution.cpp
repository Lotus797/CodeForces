#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, h, l;
    cin >> n >> h >> l;
 
    int a[100005]; 
    for(int i = 0; i < n; i++) cin >> a[i];
 
    int row_only = 0;
    int col_only = 0;   
    int both = 0;      
    for(int i = 0; i < n; i++) {
        if(a[i] <= h && a[i] <= l){
            both++;
        }
        else if(a[i] <= h){ 
            row_only++;
        }
        else if(a[i] <= l){
            col_only++;
        }
    }
 
    int max_pairs = 0;
    for(int i = 0; i <= both; i++) {
        int rows = row_only + i;
        int cols = col_only + (both - i);
        max_pairs = max(max_pairs, min(rows, cols));
    }
 
    cout << max_pairs << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
 
    return 0;
}