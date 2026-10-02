#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int a,b,c;
    cin >> a >> b >> c;
 
    int t1 = a+b*c;
    int t2 = a*(b+c);
    int t3 = a*b*c;
    int t4 = (a+b)*c;
    int t5 = a+b+c;
 
    cout << max({t1,t2,t3,t4,t5}) << endl;
}