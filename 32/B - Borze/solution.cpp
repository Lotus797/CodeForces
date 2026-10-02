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
 
    str s;
    cin >> s;
 
    FOR(i,0,s.size()) {
        if (s[i]=='-'&& s[i+1]=='.') {
            cout << 1;
            i++;
        } else if (s[i]=='.') {
            cout << 0;
        }else if (s[i]=='-'&&s[i+1]=='-') {
            cout << 2;
            i++;
        }
    }
}