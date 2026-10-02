#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int s[n];
 
        for(int i=0;i<n;i++) cin >> s[i];
 
        int mx1 = -1;
        int mx2 = -1;
        for(int i=0;i<n;i++){
            if(s[i] > mx1){
                mx2 = mx1;
                mx1 = s[i];
            }
            else if(s[i] > mx2){
                mx2 = s[i];
            }
        }
 
        for(int i=0;i<n;i++){
            if(s[i] == mx1) {
                cout << s[i] - mx2 << " ";
            }
            else {
                cout << s[i] - mx1 << " ";
            }
        }
        cout << "
";
    }
}