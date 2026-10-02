#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        int res1 = 0, res2 = 0;
 
 
        int aw = a, bw = b;
        int size = 1;
        bool white_turn = true;
        while (true) {
            if (white_turn) {
                if (aw < size) break;
                aw -= size;
            } else {
                if (bw < size) break;
                bw -= size;
            }
            res1++;
            size *= 2;
            white_turn = !white_turn;
        }
 
 
        int ad = a, bd = b;
        size = 1;
        white_turn = false;
        while (true) {
            if (white_turn) {
                if (ad < size) break;
                ad -= size;
            } else {
                if (bd < size) break;
                bd -= size;
            }
            res2++;
            size *= 2;
            white_turn = !white_turn;
        }
 
        cout << max(res1, res2) << endl;
    }
    return 0;
}