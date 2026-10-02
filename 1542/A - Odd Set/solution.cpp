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
    int n;
    cin >> n;
    int cnt = 0;
    int ans = 0;
    FOR(i,0,2*n) {
        int x;
        cin >> x;
 
        if (x%2==0) {
            ans++;
        }else {
            cnt++;
        }
    }
    if (ans==cnt) {
        cout << "Yes"<<"
";
    }else {
        cout << "No"<<"
";
    }
}
 
 
signed main() {
    YANKE_IOS
 
    int t = 1;
    cin >> t;
    while (t--) {
        FRAGGER();
    }
}