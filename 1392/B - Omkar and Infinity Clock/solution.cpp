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
    int mx = MAX(v);
    FOR(i,0,n) {
        v[i]=mx-v[i];
    }
 
    if (k%2==0) {
        int mx2 = MAX(v);
        FOR(i,0,n) {
            v[i]= mx2-v[i];
        }
    }
 
    FOR(i,0,n) {
        cout << v[i]<<" ";
    }
    cout << "
";
}
 
 
signed main() {
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--) {
        _();
    }
}