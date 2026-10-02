#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios::sync_with_stdio(true);
    cin.tie(0);
 
    string s;
    cin >> s;
 
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
 
    for (char& c :s ) {
        if (c == '1') {
            n1++;
        }
        if (c == '2') {
            n2++;
        }
        if (c == '3') {
            n3++;
        }
    }
 
    int note = 0;
 
    for (int i = 0; i < n1; i++) {
        if (note) {
            cout << "+";
        }
        cout << 1;
        note = 1;
    }
    for (int i = 0; i < n2; i++) {
        if (note) {
            cout << "+";
        }
        cout << 2;
        note = 1;
    } for (int i = 0; i < n3; i++) {
        if (note) {
            cout << "+";
        }
        cout << 3;
        note = 1;
    }
 
 
}