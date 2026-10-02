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
    while (t--) {
        int n;
        cin >> n;
        vector <int> play(n + 1);
        vector<int> vec(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> play[i];
        }
        for (int i = 2; i < n; i++) {
            vec[i] = (play[i - 1] + play[i + 1]  - 2 * play[i]) / 2;
        }
        int sm = 0;
        for (int i = 2; i < n; i++) {
            sm += vec[i] * (i - 1);
        }
        vec[n] = (play[1] - sm) / (n - 1);
        int sm2 = 0;
        for (int i = 2; i <= n; i++) {
            sm2 += vec[i];
            vec[1] = play[2] - play[1] + sm2;
        }
        for (int i = 1; i <= n; i++) {
            cout << vec[i];
            if (i < n) {
                cout << ' ';
            }
        }
        cout << '
';
    }
}