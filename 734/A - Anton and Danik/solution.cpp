#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin >> n;
 
   string s;
   cin >> s;
 
   int a_count = 0;
   int b_count = 0;
   for (int i = 0;i<s.size();++i) {
      if (s[i]=='A') {
         a_count++;
      }else if (s[i]=='D') {
         b_count++;
      }
   }
 
   if (a_count>b_count) {
      cout << "Anton";
   }else if (b_count > a_count) {
      cout <<"Danik";
   }else {
      cout << "Friendship";
   }
}