/////////"Coder:YankeY" VYPER_CODER////////
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
#include <bits/stdc++.h>
#include <pstl/algorithm_fwd.h>
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
 
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        sum1 += x;
    }
    for (int i = 1; i <= n - 1; ++i)
    {
        int x;
        cin >> x;
        sum2 += x;
    }
    for (int i = 1; i <= n - 2; ++i)
    {
        int x;
        cin >> x;
        sum3 += x;
    }
    cout << sum1 - sum2 << '
' << sum2 - sum3 << '
';
}