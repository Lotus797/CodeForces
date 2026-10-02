#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
class dsu {
 public:
  vector<int> p;
  int n;
 
  dsu(int _n) : n(_n) {
    p.resize(n);
    iota(p.begin(), p.end(), 0);
  }
 
  inline int get(int x) {
    return (x == p[x] ? x : (p[x] = get(p[x])));
  }
 
  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if (x != y) {
      p[x] = y;
      return true;
    }
    return false;
  }
};
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if (n == 5) {
    cout << "01110" << '
';
    cout << "11011" << '
';
    cout << "10001" << '
';
    cout << "11011" << '
';
    cout << "01110" << '
';
    return 0;
  }
  vector<string> s(n, string(n, '0'));
 
  vector<int> low(2 * n, 2 * n);
  vector<int> high(2 * n, -1);
 
  const int M = 30;
  for (int i = M; i <= n - M; i++) {
    for (int j = M; j <= n - M; j++) {
      int diff = i - j + n;
      if (diff % 9 % 2 == 1) {
        low[diff] = min(low[diff], i);
        high[diff] = max(high[diff], i);
        s[i][j] = '1';
      }
    }
  }
  for (int diff = 0; diff < 2 * n - 5; diff++) {
    if (high[diff] != -1 && high[diff + 5] != -1) {
      int me = high[diff] - low[diff];
      int them = high[diff + 5] - low[diff + 5];
      if (them - me == 5) {
        for (int it = 0; it < 3; it++) {
          --low[diff];
          int i = low[diff];
          int j = i - diff + n;
          s[i][j] = '1';
        }
        for (int it = 0; it < 3; it++) {
          ++high[diff];
          int i = high[diff];
          int j = i - diff + n;
          s[i][j] = '1';
        }
      }
      if (me - them == 5) {
        for (int it = 0; it < 3; it++) {
          --low[diff + 5];
          int i = low[diff + 5];
          int j = i - (diff + 5) + n;
          s[i][j] = '1';
        }
        for (int it = 0; it < 3; it++) {
          ++high[diff + 5];
          int i = high[diff + 5];
          int j = i - (diff + 5) + n;
          s[i][j] = '1';
        }
      }
      // debug(low[diff], high[diff], me, low[diff + 5], high[diff + 5], them);
    }
  }
 
  {
    int row = M - 3;
    for (int j = 0; j < n - 2; j++) {
      if (s[row][j] == '1' && s[row][j + 2] == '1') {
        s[row - 3][j - 2] = '1';
        s[row - 3][j + 4] = '1';
        s[row - 5][j + 1] = '1';
      }
    }
  }
  {
    int col = n - M + 3;
    for (int i = 0; i < n - 7; i++) {
      if (s[i][col] == '1' && s[i + 7][col] == '1') {
        s[i + 2][col + 3] = '1';
        s[i + 5][col + 3] = '1';
        s[i + 2][col + 5] = '1';
        s[i + 4][col + 6] = '1';
        s[i - 1][col + 7] = '1';
        s[i + 2][col + 9] = '1';
      }
    }
  }
  {
    int col = M - 3;
    for (int i = 0; i < n - 7; i++) {
      if (s[i][col] == '1' && s[i + 7][col] == '1') {
        s[i + 2][col - 3] = '1';
        s[i + 5][col - 3] = '1';
        s[i + 2][col - 5] = '1';
        s[i + 4][col - 6] = '1';
        s[i - 1][col - 7] = '1';
        s[i + 2][col - 9] = '1';
      }
    }
  }
  {
    int row = n - M + 3;
    for (int j = 0; j < n - 2; j++) {
      if (s[row][j] == '1' && s[row][j + 2] == '1') {
        s[row + 3][j - 2] = '1';
        s[row + 3][j + 4] = '1';
        s[row + 5][j + 1] = '1';
      }
    }
  }
 
  for (int rot = 0; rot < 3; rot++) {
    debug("!!!!!!!!!!!!!!");
    debug("ROT", rot);
    int cc = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i][j] == '1') {
          cc += 1;
        }
      }
    }
    double e = 2.718281828;
    int need = int(floor(n * n / e));
    debug(cc, need);
 
    vector<vector<int>> deg(n, vector<int>(n, 0));
    dsu d(n * n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i][j] == '1') {
          for (int di = -3; di <= 3; di++) {
            for (int dj = -3; dj <= 3; dj++) {
              if (di * di + dj * dj == 13) {
                int ni = i + di;
                int nj = j + dj;
                if (ni >= 0 && nj >= 0 && ni < n && nj < n) {
                  if (s[ni][nj] == '1') {
                    deg[i][j] += 1;
                    d.unite(i * n + j, ni * n + nj);
                  }
                }
              }
            }
          }
          if (deg[i][j] > 2) {
            debug(i, j, deg[i][j]);
            assert(false);
          }
        }
      }
    }
    vector<vector<int>> at(n * n);
    for (int i = 0; i < n * n; i++) {
      at[d.get(i)].push_back(i);
    }
    map<int, int> mp;
    vector<vector<int>> chains;
    for (int i = 0; i < n * n; i++) {
      if (s[i / n][i % n] == '1') {
        int cnt = int(at[i].size());
        if (cnt == 0) {
          continue;
        }
        int sum = 0;
        for (int x : at[i]) {
          sum += deg[x / n][x % n];
        }
        if (sum != 2 * cnt - 2) {
          debug(cnt, sum);
          if (rot < 2) {
            assert(false);
          } else {
            assert(sum == 2 * cnt);
          }
        }
        if ((n == 1001 && cnt < 100000) || (n == 101 && cnt < 400)) {
          assert(rot == 0);
          for (int x : at[i]) {
            s[x / n][x % n] = '0';
          }
        } else {
          if (rot == 1) {
            vector<int> ones;
            for (int x : at[i]) {
              if (deg[x / n][x % n] == 1) {
                ones.push_back(x);
              }
            }
            assert(ones.size() == 2);
            chains.push_back(ones);
          }
        }
        mp[cnt] += 1;
      } else {
        assert(at[i].size() == 1);
      }
    }
    for (auto& [x, y] : mp) {
      debug(x, y);
    }
    if (rot == 1) {
      debug(chains);
      vector<vector<int>> fake_deg(n, vector<int>(n, 0));
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (s[i][j] == '0') {
            for (int di = -3; di <= 3; di++) {
              for (int dj = -3; dj <= 3; dj++) {
                if (di * di + dj * dj == 13) {
                  int ni = i + di;
                  int nj = j + dj;
                  if (ni >= 0 && nj >= 0 && ni < n && nj < n) {
                    if (s[ni][nj] == '1') {
                      fake_deg[i][j] += 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      int flag = 1;
      for (int it = 0; it < 2; it++) {
        int rs = chains[0][it] / n;
        int cs = chains[0][it] % n;
        int rf = chains[1][it ^ flag] / n;
        int cf = chains[1][it ^ flag] % n;
        for (int di = -3; di <= 3; di++) {
          for (int dj = -3; dj <= 3; dj++) {
            if (di * di + dj * dj == 13) {
              int ni = rs + di;
              int nj = cs + dj;
              if (ni >= 0 && nj >= 0 && ni < n && nj < n) {
                if (s[ni][nj] == '0') {
                  fake_deg[ni][nj] -= 1;
                }
              }
              ni = rf + di;
              nj = cf + dj;
              if (ni >= 0 && nj >= 0 && ni < n && nj < n) {
                if (s[ni][nj] == '0') {
                  fake_deg[ni][nj] -= 1;
                }
              }
            }
          }
        }
        vector was(n, vector<bool>(n, false));
        vector pr(n, vector<pair<int, int>>(n));
        vector<pair<int, int>> que;
        que.emplace_back(rs, cs);
        was[rs][cs] = true;
        for (int qit = 0; qit < int(que.size()); qit++) {
          for (int di = -3; di <= 3; di++) {
            for (int dj = -3; dj <= 3; dj++) {
              if (di * di + dj * dj == 13) {
                int ni = que[qit].first + di;
                int nj = que[qit].second + dj;
                if (ni >= 0 && nj >= 0 && ni < n && nj < n) {
                  if (((s[ni][nj] == '0' && fake_deg[ni][nj] == 0) || (ni == rf && nj == cf)) && !was[ni][nj]) {
                    que.emplace_back(ni, nj);
                    was[ni][nj] = true;
                    pr[ni][nj] = que[qit];
                  }
                }
              }
            }
          }
        }
        // s[rs][cs] = 'x';
        // s[rf][cf] = 'y';
        for (int i = 0; i < n; i++) {
          // debug(s[i]);
        }
        vector<string> fake_s(n);
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            assert(fake_deg[i][j] >= 0 && fake_deg[i][j] <= 9);
            fake_s[i] += char('0' + fake_deg[i][j]);
          }
        }
        fake_s[rs][cs] = 'x';
        fake_s[rf][cf] = 'y';
        for (int i = 0; i < n; i++) {
          // debug(fake_s[i]);
        }
        assert(was[rf][cf]);
        int rat = rf;
        int cat = cf;
        debug(rs, cs, rf, cf);
        while (rat != rs || cat != cs) {
          debug(rat, cat);
          s[rat][cat] = '1';
          auto pp = pr[rat][cat];
          rat = pp.first;
          cat = pp.second;
        }
      }
    }
    // vector<string> ends(n, string(n, '0'));
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < n; j++) {
    //     if (deg[i][j] == 1) {
    //       ends[i][j] = '1';
    //     }
    //   }
    // }
  }
 
  for (int i = 0; i < n; i++) {
    cout << s[i] << '
';
  }
 
  return 0;
}