#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n, m,t;
    cin >> n;
    cin >> m;
    cin >> t;
 
    string s= n+m;
 
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
 
    if (s==t) {
        cout << "YES";
    }else {
        cout << "NO";
    }
 
}