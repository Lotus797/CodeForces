#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    string s;
    getline(cin, s);
 
    int up = 0;
    int lo = 0;
 
    for (char &c:s) {
        if (islower(c)) {
            lo++;
        } else if (isupper(c)) {
            up++;
        }
 
 
    }
    for (char &z : s) {
        if (up>lo) {
            z = toupper(z);
        }else if (lo>=up) {
            z = tolower(z);
        }
    }
    cout << s << endl;
 
}