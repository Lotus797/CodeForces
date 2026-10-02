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
    int n,k;
    cin >> n >> k;
    if (n-(k-1)>0 && (n-(k-1))%2!=0) {
        cout << "YES"<<"
";
        FORR(i,1,k-1) {
            cout << "1 ";
        }
        cout << n-(k-1)<<"
";
    }
    else if (n-((k-1)*2)>0 && (n-((k-1)*2))%2==0) {
        cout << "YES"<<"
";
        FORR(i,1,k-1) {
            cout << "2 ";
        }
        cout << n-((k-1)*2)<<"
";
    }else {
        cout << "NO
";
    }
}
 
 
signed main() {
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--) {
        _();
    }
}