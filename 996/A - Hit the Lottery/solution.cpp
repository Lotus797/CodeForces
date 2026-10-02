#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n;
    cin >> n;
 
    int count  = 0;
    while (n > 0) {
        if (n>=100) {
            n-=100;
            count++;
        }else if (n>=20) {
            n-=20;
            count++;
        }else if (n>=10) {
            n-=10;
            count++;
        }else if (n>=5) {
            n-=5;
            count++;
        }else if (n>=1) {
            n-=1;
            count++;
        }
    }
    cout << count << endl;
 
}
 