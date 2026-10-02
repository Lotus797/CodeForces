/////////"Coder:YankeY" VYPER_CODER////////
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = a; i <= b; i++)
#define RFO(i,a,b) for(int i = a; i >= b; --i)
#define ALL(x) (x).begin(), (x).end()
#define MAX(a) (*max_element(ALL(a)))
#define MIN(a) (*min_element(ALL(a)))
#define SZ(x) ((int)(x).size())
#define pb push_back
#define YANKE_IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define str string
#define getl getline
#define db double
#define N "
"
#define OK cout << "OK" << '
'
#define Ok cout << "Ok" << '
'
#define YES cout << "YES" << '
'
#define Yes cout << "Yes" << '
'
#define NO cout << "NO" << '
'
#define No cout << "No" << '
'
using namespace std;
/*
 
YANKEY
 
YANKEV9
 
VYPERRR
 
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
        int p[n];
        FOR(i,0,n) cin >> p[i];
        
        int suf[n];
        int pos[n];
        suf[n-1] = p[n-1];
        pos[n-1] = n-1;
 
        RFO(i, n-2, 0) {
            if(p[i] >= suf[i+1]) {
                suf[i] = p[i];
                pos[i] = i;
            } else {
                suf[i] = suf[i+1];
                pos[i] = pos[i+1];
            }
        }
 
        int l = -1, r = -1;
        FOR(i,0,n) {
            if(p[i] < suf[i]) {
                l = i;
                r = pos[i];
                break;
            }
        }
 
 
        if(l == -1) {
            FOR(i,0,n) cout << p[i] << " ";
            cout << "
";
        } else {
            int L = l, R = r;
            while(L < R) {
                swap(p[L], p[R]);
                L++;
                R--;
            }
 
            FOR(i,0,n) cout << p[i] << " ";
            cout << "
";
        }
    }
}