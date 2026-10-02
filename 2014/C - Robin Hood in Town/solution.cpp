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
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n <= 2)
    {
        cout << -1 << '
';
        return;
    }
 
    auto check = [&](int mid) -> bool
    {
        int cnt = 0;
        // a[i] < (sum + mid) / (n * 2)
        // a[i] * n * 2 < (sum + mid)
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] * n * 2 < sum + mid)
            {
                cnt++;
            }
        }
        return cnt > n / 2;
    };
 
    int l = 0, r = 1e12, mid, best = -1;
    while(l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid))
        {
            best = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << best << '
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