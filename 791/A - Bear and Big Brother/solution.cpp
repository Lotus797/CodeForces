#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n ,m;
    cin >> n >> m;
 
    int f = 0;
    while (n<= m){
        n = n*3;
        m = m *2;
        f++;
    }
    cout << f;
}