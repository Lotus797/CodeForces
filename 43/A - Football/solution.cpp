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
#define PUSH(vec, val) vec.push_back(val)
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
 
REDSTONERR
 
PVPPP
 
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
    int n1 = 0;
    int n2 = 0;
    str s1 = " ";
    str s2;
 
    while(n--) {
        str s;
        cin >> s;
        if (s1==" "){
            s1 = s;
            n1= 1;
        }
        if (s==s1) {
            n1++;
            s1 = s;
        }else {
            n2++;
            s2 = s;
        }
    }
 
    if (n1>n2) {
        cout << s1 << '
';
    }else {
        cout << s2 << '
';
    }
}