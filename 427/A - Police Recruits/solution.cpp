#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
   int n;
   cin >> n;
 
   int free = 0, under = 0;
   for (int i = 0;i<n;++i) {
      int x;
      cin >> x;
 
      if (x == -1) {
         if (free >0 ) {
            free--;
         }else {
            under++;
         }
      }else {
         free+=x;
      }
   }
 
   cout << under;
 
 
 
}