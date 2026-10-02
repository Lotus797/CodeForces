#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   cin >> t;
 
   int mx = 0 ;
   int sum  = 0;
   while (t--) {
      int n, m;
      cin >> n>> m;
 
      sum-=n;
      sum+=m;
 
      if (sum>mx) {
         mx = sum;
      }
   }
   cout << mx;
}