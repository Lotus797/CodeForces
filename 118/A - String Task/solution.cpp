#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    string s;
    cin >> s;
    for (char &c : s) {
        if (isupper(c)) {
            c = tolower(c);
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c=='y') {
 
        }else {
            cout << "."<<c;
        }
    }
}