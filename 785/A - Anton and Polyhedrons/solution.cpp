#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    int sum = 0;
    cin>>n;
 
   while (n--) {
       string a;
       cin>>a;
       if (a=="Tetrahedron") {
           sum+=4;
       }else if (a=="Cube") {
           sum+=6;
       }else if (a=="Octahedron") {
           sum+=8;
       }else if (a=="Dodecahedron") {
           sum+=12;
       }else if (a=="Icosahedron") {
           sum+=20;
       }
   }
   cout<<sum;
 
 
}