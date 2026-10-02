#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define YANKE_IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define gcd(a,b) __gcd(a,b)
#define all(x) x.begin(),x.end()
#define max(v) *max_element(v.begin(),v.end())
#define min(v) *min_element(v.begin(),v.end())
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
void dark() {
}
 
 
signed main() {
    YANKE_IOS
 
    int t = 1;
    cin >> t;
    int ans = 0;
    while (t--) {
        dark();
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c>=2) {
            ans++;
        }
    }
    cout << ans << endl;
}