#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        int count = 0;
        for (int i = 0;i<s.size();i++) {
            if (s[i]!='0') {
               count++;
            }
        }
        cout << count<<endl;
 
        for (int i = 0;i<s.size();++i) {
            if (s[i]!='0') {
                int num= s[i]-'0';
                for (int j = 0;j < s.size()-i-1;++j) {
                    num*=10;
                }
                cout << num<<" ";
            }
        }
        cout <<endl;
    }
}