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
 
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>> dq(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> dq[i].first;
        dq[i].second = i + 1;
    }
    while((int)dq.size() > 1)
    {
        if (dq.front().first - m <= 0)
        {
            dq.pop_front();
        }
        else
        {
            dq.front().first -= m;
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    cout << dq[0].second << '
';
}