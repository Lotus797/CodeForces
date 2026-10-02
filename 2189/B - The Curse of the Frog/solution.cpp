#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n >> x;
 
        int res= 0;
        int max1 = -1e18;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            max1 = max(max1,b*a-c);
            res+= (b-1)*a;
        }
 
        if (res >=x)
        {
            cout << "0
";
            continue;
        }
 
        if (max1 <=0)
        {
            cout << "-1
";
            continue;
        }
 
        cout <<(x-res+max1 - 1) / max1<<endl;
 
    }
}