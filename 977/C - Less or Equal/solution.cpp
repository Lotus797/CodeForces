#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define gcd(a,b) __gcd(a,b)
#define all(x) x.begin(),x.end()
#define MAX(v) *max_element(v.begin(),v.end())
#define MIN(v) *min_element(v.begin(),v.end())
#define sz(v) int((v).size())
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define FORR(i,a,b) for (int i = a; i <= b; i++)
#define veci vector<int>
#define vecs vector<string>
#define vecc vector<char>
#define st set<int>
#define mst multiset<int>
#define int long long
#define str string
using namespace std;
 
const int MOD = 1e9 + 7;
 
/* Yankey */
void _() {
    int n,k;
    cin >> n >> k;
    veci v(n);
    FOR(i,0,n) {
        cin >> v[i];
    }
;
    int ans;
    sort(all(v));
    if (k == 0) {
        if (v[0] > 1) {
            ans = 1;
        }
        else {
            ans = -1;
        }
    }
    else if (k == n) {
        ans = v[n - 1];
    }
    else {
        if (v[k - 1] != v[k]) {
            ans = v[k - 1];
        } else {
            ans = -1;
        }
    }
    cout << ans;
}
 
 
signed main() {
    fastio;
 
    int t = 1;
    //cin >> t;
    while (t--) {
        _();
    }
}