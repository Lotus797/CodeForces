#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n,m;
   cin >> n>>m;
   pair<int, int> s[m];
   for (int i = 0;i<m;++i) {
       cin >> s[i].first >> s[i].second;
   }
 
   sort(s,s+m);
   for (int i = 0;i<m;i++) {
       if (n>s[i].first) {
            n+=s[i].second;
       }else {
           cout  <<"NO";
           return 0;
       }
   }
    cout << "YES";
}