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
}
 
 
signed main() {
    YANKE_IOS
 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    int L = -1, R = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            if (L == -1) L = i;
            R = i;
        }
    }
 
 
    if (L == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    
    reverse(a.begin() + L, a.begin() + R + 1);
    
    bool possible = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted_a[i]) {
            possible = false;
            break;
        }
    }
 
    if (possible) {
        cout << "yes" << endl;
        cout << L + 1 << " " << R + 1 << endl;
    } else {
        cout << "no" << endl;
    }
}
 