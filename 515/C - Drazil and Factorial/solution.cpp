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
#define str string
using namespace std;
 
const int sz = 1e6 + 9;
const int LOG = 63; 
const int MOD = 1e9 + 7;
 
/* Yankey */
 
 
 
void _(){
    int n;
    cin >> n;
    str s;
    cin >> s;
    string res = "";
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '2') res += "2";
        else if (s[i] == '3') res += "3";
        else if (s[i] == '4') res += "322";
        else if (s[i] == '5') res += "5";
        else if (s[i] == '6') res += "53";
        else if (s[i] == '7') res += "7";
        else if (s[i] == '8') res += "7222";
        else if (s[i] == '9') res += "7332";
    }
    
    sort(res.rbegin(), res.rend());
    
    cout << res << endl;
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