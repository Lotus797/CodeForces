#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    string s, z;
    cin >> s >> z;
 
    string t(s.rbegin(), s.rend());
    if (z == t) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}