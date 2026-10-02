#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    string s;
    cin >> s;
 
    int count = 0;
    for (int i = 0;i<s.size();++i) {
        if (isupper(s[i])) {
            count++;
        }
    }
    if (count==s.size()) {
        for (int i = 0;i<s.size();++i) {
            cout << char(tolower(s[i]));
        }
    }else if (count==s.size()-1 && islower(s[0])) {
        cout << char(toupper(s[0]));
        for (int i = 1;i<s.size();++i) {
            cout << char(tolower(s[i]));
        }
    }else {
        cout << s;
    }
 
 
 
}