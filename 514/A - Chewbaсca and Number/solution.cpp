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
    str s;
    cin >> s;
    if (s[0] > '4' && s[0] != '9') {
        s[0] = ('9' - s[0] + '0');
    }
    for (int i = 1; i < (int) s.size(); ++i) {
        if (s[i] > '4') {
            s[i] = ('9' - s[i] + '0');
        }
    }
    cout << s << "
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