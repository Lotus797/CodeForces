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
bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    if (n % 2 == 0) {
        return(n == 2);
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
 
void FRAGGER()
{
    int m;
    cin >> m;
    str s;
    cin >> s;
    vector<int> ah3;
    vector<int> ah2;
    FOR (i, 0, m) {
        if (s[i] == '1') {
            ah3.push_back(i + 1);
        }
        else {
            ah2.push_back(i + 1);
        }
    }
    int a1 = (int) ah3.size();
    int a2 = (int) ah2.size();
    if (a1 % 2 == 0) {
        cout << a1 << endl;
        FOR (i,0 , a1) {
            cout << ah3[i];
            if (i < a1 - 1) {
                cout << ' ';
            }
        }
        cout << endl;
        return;
    }
    if (a2 % 2 != 0) {
        cout << a2 << endl;
        FOR (i, 0, a2) {
            cout << ah2[i];
            if (i < a2 - 1) {
                cout << ' ';
            }
        }
        cout << endl;
        return;
    }
    cout << -1 << endl;
}
 
 
signed main() {
    YANKE_IOS
 
    int t = 1;
    cin >> t;
    while (t--) {
        FRAGGER();
    }
}