#include <iostream>
#include <string>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    long long total_inversions = 0;
    long long ones_so_far = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ones_so_far++;
        } else {
            total_inversions += ones_so_far;
        }
    }
 
    string fwin; // Variable to store the winner
 
    if (total_inversions % 2 != 0) {
        fwin = "Alice";
    } else {
        // If total inversions is even, check if there is a valid split point
        int total_ones = ones_so_far;
        int total_zeros = n - total_ones;
 
        int left_ones = 0;
        int left_zeros = 0;
        bool alice_can_win = false;
 
        // Check all possible split positions (including boundaries)
        for (int i = 0; i <= n; ++i) {
            int right_zeros = total_zeros - left_zeros;
            
            if (left_ones % 2 == 1 && right_zeros % 2 == 1) {
                alice_can_win = true;
                break;
            }
 
            if (i < n) {
                if (s[i] == '1') left_ones++;
                else left_zeros++;
            }
        }
 
        if (alice_can_win) {
            fwin = "Alice";
        } else {
            fwin = "Bob";
        }
    }
 
    cout << fwin << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}