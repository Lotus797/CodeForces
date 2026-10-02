#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<bool> visited(26, false);
    bool ok = true;
 
    for (int i = 0; i < n; i++) {
        // Əgər hərf dəyişibsə və yeni hərf daha əvvəl görünübsə:
        if (i > 0 && s[i] != s[i - 1]) {
            if (visited[s[i] - 'A']) {
                ok = false;
                break;
            }
        }
        visited[s[i] - 'A'] = true;
    }
 
    if (ok) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}