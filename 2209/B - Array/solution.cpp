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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    for (int i = 0; i < n; i++) {
        vector<pair<int, int> > events;
        int base_count = 0;
 
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int L = (a[i] + a[j]) / 2 + 1;
                events.push_back({L, 1});
            } else if (a[i] > a[j]) {
                int R = (a[i] + a[j] + 1) / 2 - 1;
                base_count++;
                events.push_back({R + 1, -1});
            }
        }
 
        sort(events.begin(), events.end());
 
        int max_j = base_count;
        int current_j = base_count;
        for (auto &ev: events) {
            current_j += ev.second;
            max_j = max(max_j, current_j);
        }
 
        cout << max_j << (i == n - 1 ? "" : " ");
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