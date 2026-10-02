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
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    int remove_min = a[n - 1] - a[1];
    int remove_max = a[n - 2] - a[0];
 
    cout << min(remove_min, remove_max) << endl;
 
}
 
signed main() {
    fastio;
 
    int t = 1;
    //cin >> t;
    while (t--) {
        _();
    }
}