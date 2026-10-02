#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n, m;
    cin >> n >> m ;
    for (int i=1;i<=m;i++) {
        if (n%10==0) {
            n/=10;
        }else  {
            n = n-1;
        }
    }
    cout << n<<endl;
 
}