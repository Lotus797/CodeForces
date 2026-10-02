#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
   int n,m;
   cin >> n >> m;
 
   int rem = 240-m;
   int count = 0;
   for (int i = 1;i<=n;i++) {
      if (i*5<=rem) {
         rem-=i*5;
         count++;
      }
   }
   cout << count;
 
}