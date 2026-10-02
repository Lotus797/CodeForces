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
 
    int n;
    cin >> n >> n;
    deque<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }
    cin >> n;
    deque<int> b(n);
    for (int &i : b)
    {
        cin >> i;
    }
    int cnt = 0;
    while(cnt <= 3628800 && !a.empty() && !b.empty())
    {
        if (a.front() < b.front())
        {
            b.push_back(a.front());
            a.pop_front();
            b.push_back(b.front());
            b.pop_front();
        }
        else
        {
            a.push_back(b.front());
            b.pop_front();
            a.push_back(a.front());
            a.pop_front();
        }
        cnt += 1;
    }
    if (cnt > 3628800)
    {
        cout << "-1
";
    }
    else
    {
        cout << cnt << ' ' << (a.empty() ? 2 : 1) << '
';
    }
}