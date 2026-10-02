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
    int n, x, a, odd = 0, even = 0;
    cin >> n >> x;
    while (n--) {
        cin >> a;
        if (a % 2) odd++; else even++;
    }
 
    bool ok = false;
    for (int i = 1; i <= odd && i <= x; i += 2) {
        if (x - i <= even) ok = true;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
 
 
signed main()
{
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        _();
    }
}