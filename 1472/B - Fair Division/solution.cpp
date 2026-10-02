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
    veci v(n);
    int c1 = 0;
    int c2 = 0;
    int sum = 0;
    FOR(i,0,n) {
        cin >> v[i];
        sum+=v[i];
        if (v[i]==2) {
            c2++;
        }else {
            c1++;
        }
    }
    if (sum%2!=0) {
        cout << "NO"<<"
";
        return;
    }
    if (c1==0&&c2%2!=0) {
        cout << "NO
";
        return;
    }
    cout << "YES
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