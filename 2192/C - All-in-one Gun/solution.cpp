/////////"Coder:YankeY" VYPER_CODER////////
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
#include <bits/stdc++.h>
#define gcd(a,b) __gcd(a,b)
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = a; i <= b; i++)
#define RFO(i,a,b) for(int i = a; i >= b; --i)
#define ALL(x) (x).begin(), (x).end()
#define MAX(a) (*max_element(ALL(a)))
#define MIN(a) (*min_element(ALL(a)))
#define SZ(x) ((int)(x).size())
#define PUSH(vec, val) vec.push_back(val)
#define YANKE_IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define str string
#define getl getline
#define db double
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"NO"<<endl
using namespace std;
 
/*
 
YANKEY
 
YANKEV9
 
VYPERRR
 
FRAGGERRRRR
 
HACKERR
 
FSOCIETY
 
ANONYMUS
 
DARK HACKER
 
DARK
 
DARKSIDE
 
WELCOME TO THE DARKSIDE!
 
 
*/
 
void FRAGGER() {
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> v(n);
    FOR(i, 0, n){
        cin >> v[i];
    }
    int nas = 1e18;
    int tot = 0;
    for (int x : v){
        tot += x;
    }
    int tam = max(0ll, (h - 1) / tot);
    int rem = h - tam * tot;
    vector<int> suf(n + 1, 0);
    RFO(i, n - 1, 0){
        suf[i] = max(v[i], suf[i + 1]);
    }
    int sm = 0;
    int mi = 1e18;
    FOR(i, 0, n){
        sm += v[i];
        if (sm >= rem){
            nas = min(nas, tam * (n + k) + (i + 1));
        }
        if (i + 1 < n){
            int bst = sm - mi + suf[i + 1];
            if (bst >= rem){
                nas = min(nas, tam * (n + k) + (i + 1));
            }
            int bst2 = sm - v[i] + suf[i + 1];
            if (bst2 >= rem){
                nas = min(nas, tam * (n + k) + (i + 1));
            }
        }
        mi = min(mi, v[i]);
    }
 
    cout << nas << '
';
}
 
signed main() {
    YANKE_IOS
 
    int t = 1;
    cin >> t;
    while (t--) {
        FRAGGER();
    }
}