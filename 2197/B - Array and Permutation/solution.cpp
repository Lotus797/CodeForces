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
 
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> v(n);
        FOR(i, 0, n) {
            cin >> p[i];
        }
        FOR (i, 0, n) {
            cin >> v[i];
        }
        vector<int> h(n + 1);
        FOR(i, 0, n) {
            h[p[i]] = i;
 
        }
        bool ok = true;
        int l = -1,li = 0;
        while(li < n) {
            int vl = v[li];
            int j = li;
            while(j < n && v[j] == vl) {
                j++;
            }
            int cur = h[vl];
            if (cur < l) {
                ok = false;
                break;
            }
            l = cur;
            li = j;
        }
        if (ok) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}