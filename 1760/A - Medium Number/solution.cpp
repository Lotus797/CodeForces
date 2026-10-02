#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int a[3];
        for (int i = 0;i<3;++i) {
            cin >> a[i];
        }
 
        int max1 = *max_element(a,a+3);
        int min1 = *min_element(a,a+3);
        for (int i= 0;i<3;i++) {
            if (a[i]!=max1 && a[i]!=min1) {
                cout << a[i]<<endl;
            }
        }
    }
}