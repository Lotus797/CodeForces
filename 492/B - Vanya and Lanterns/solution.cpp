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
/* Yankey */
void _() {
    int n;
    double x;
    cin >> n >> x;
    double a[n];
    FOR(i,0,n) {
        cin >> a[i];
    }
    sort(a,a+n);
    double res = max(a[0] ,x- a[ n - 1 ] );
    FOR(i,1,n) {
        res = max(res,(a[i]-a[i-1])/2);
    }
    cout << fixed << setprecision(8)<<res<<"
";
}
 
 
signed main() {
    fastio;
 
    int t = 1;
    //cin >> t;
    while (t--) {
        _();
    }
}