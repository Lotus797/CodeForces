#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    cin.ignore();
 
 
    int m = 0;
    while (n--) {
        string s;
        getline(cin,  s);
        if (s == "++X"||s=="X++") {
            ++m;
        }else if (s == "X--"||s=="--X") {
            --m;
        }
    }
    cout << m;
}