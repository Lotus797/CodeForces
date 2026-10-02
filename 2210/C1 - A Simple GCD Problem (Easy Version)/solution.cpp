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
 
const int sz = 3e5 + 9;
const int LOG = 63;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int a[sz];
 
int n;
 
/* Yankey */
 
void _() {
    int n;
    cin >> n;
    int ans =0;
    veci a(n),b(n);
    FOR(i, 0, n) {
        cin >> a[i];
    }
    FOR(i, 0, n) {
        cin >> b[i];
    }
    FOR(i, 0, n) {
        int x;
        if (i == 0) {
            x = gcd(a[0], a[1]);
        }
        else if (i == n - 1) {
            x = gcd(a[n - 2], a[n - 1]);
        }
        else {
            int f1 = gcd(a[i - 1], a[i]);
            int s2 = gcd(a[i], a[i + 1]);
            x = (f1 / gcd(f1, s2)) * s2;
        }
        if (a[i] > x) {
            ans++;
        }
    }
    cout << ans << '
';
}
 
signed main() {
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--) {
        _();
    }
}
 
 
 