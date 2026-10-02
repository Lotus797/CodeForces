///////// Coder:Yankey /////////
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define gcd(a, b) __gcd(a, b)
#define ALL(x) x.begin(), x.end()
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define SZ(v) int((v).size())
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORR(i, a, b) for (int i = a; i <= b; i++)
#define veci vector<int>
#define vecs vector<string>
#define vecc vector<char>
#define vecb vector<bool>
#define deqi deque<int>
#define deqs deque<string>
#define st set<int>
#define mst multiset<int>
#define int long long
#define str string
using namespace std;
 
const int sz = 3e5 + 9;
const int LOG = 63;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
/* Yankey */
 
void _(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
 
    set<int> seen;
    vector<int> ans;
    
    for(int i = n-1; i >= 0; i--){
        if(!seen.count(a[i])){
            seen.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    
    reverse(ans.begin(), ans.end());
 
    cout << ans.size() << "
";
    for(int x : ans) cout << x << " ";
}
 
 
signed main()
{
    fastio;
 
    int t = 1;
    //cin >> t;
    while (t--)
    {
        _();
    }
}