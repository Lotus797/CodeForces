/////////"Coder:YankeY" VYPER_CODER////////
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
#include <bits/stdc++.h>
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
using namespace std;
 
/*
 
YANKEY
 
YANKEV9
 
VYPERRR
 
FRAGER
 
HACKERR
 
FSOCIETY
 
ANONYMUS
 
DARK HACKER
 
DARK
 
DARKSIDE
 
WELCOME TO THE DARKSIDE!
 
 
*/
 
 
signed main() {
    YANKE_IOS
 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> vec(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> vec[i];
        }
        bool ok = true;
        for (int i = 1; i <= n; ++i) {
            int a = i;
            int x = vec[i];
            while(a % 2 == 0) {
                a /= 2;
            }
            while(x % 2 == 0) {
                x /= 2;
            }
            if (a != x) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '
';
    }
 
}