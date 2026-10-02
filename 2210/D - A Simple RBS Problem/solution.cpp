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
 
int get_spine_depth(int n, const string& s) {
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + (s[i] == '(' ? 1 : -1);
    }
 
    // pref[i] == pref[l] olan növbəti mövqeyi tapmaq üçün precompute
    vector<int> next_same(n + 1, n + 1);
    vector<int> last_pos(n + 1, n + 1);
    for (int i = n; i >= 0; --i) {
        next_same[i] = last_pos[pref[i]];
        last_pos[pref[i]] = i;
    }
 
    int D = 0;
    int l = 0, r = n;
    while (l < r) {
        // Əgər cari mötərizə cütü sətirin bu hissəsində yeganə komponentdirsə
        // Bu o deməkdir ki, pref[l] qiyməti l və r arasında təkrar olunmur
        if (next_same[l] == r) {
            D++;
            l++;
            r--;
        } else {
            break;
        }
    }
    return D;
}
 
int count_leaves(int n, const string& s) {
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '(' && s[i + 1] == ')') {
            count++;
        }
    }
    return count;
}
 
void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
 
    if (count_leaves(n, s) == count_leaves(n, t) && get_spine_depth(n, s) == get_spine_depth(n, t)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}