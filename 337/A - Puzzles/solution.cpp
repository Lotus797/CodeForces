#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(nullptr);
 
   int k, n;
   cin >> k >> n;
   int a[n];
   for (int i = 0; i < n; ++i)
   {
      cin >> a[i];
   }
   sort(a, a + n);
   int res = 1e10;
   for (int i = k; i <= n; ++i)
   {
      int mn = a[i - k], mx = a[i - k];
      for (int j = i - k; j < i; ++j)
      {
         mn = min(mn, a[j]);
         mx = max(mx, a[j]);
      }
      res = min(res, mx - mn);
   }
   cout << res << '
';
}