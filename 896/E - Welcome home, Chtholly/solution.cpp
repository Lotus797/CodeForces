// cd /mnt/c/users/murad/onedrive/dokumente
/*   ,--------------------------------------------------------------.
  |============================,--""--.============================|
  |==========================,'   ::   `.==========================|
  |=========================/     ::     \=========================|
  |========================:      ::      :========================|
  |=======================:       ::       :=======================|
  |=======================|      .::.      |=======================|
  |=======================:    .:'  `:.    :=======================|
  |========================: .:'      `:. :========================|
  |=========================\            /=========================|
  |==========================`.        ,'==========================|
  |============================`--..--'========================dd==|
   `--------------------------------------------------------------'*/
   /*              ____----------- _____
\~~~~~~~~~~/~_--~~~------~~~~~     \
 `---`\  _-~      |                   \
   _-~  <_         |                     \[]
 / ___     ~~--[""] |      ________-------'_
> /~` \    |-.   `\~~.~~~~~                _ ~ - _
 ~|  ||\%  |       |    ~  ._                ~ _   ~ ._
   `_//|_%  \      |          ~  .              ~-_   /\
          `--__     |    _-____  /\               ~-_ \/.
               ~--_ /  ,/ -~-_ \ \/          _______---~/
                   ~~-/._<   \ \`~~~~~~~~~~~~~     ##--~/
                         \    ) |`------##---~~~~-~  ) )
                          ~-_/_/                  ~~ ~~
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define int long long
#define YES cout << "YES" << '
';
#define NO cout << "NO" << '
';
#define Yes cout << "Yes" << '
';
#define No cout << "No" << '
';
#define no cout << "no" << '
';
#define yes cout << "yes" << '
';
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define pf push_front
#define M_PI 3.14159265358979323846
#define vi vector<long long>
#define pii pair<long long, long long>
#define vii vector<pair<long long, long long>>
#define vvi vector<vector<long long>>
const long long kurdistan = 0;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long LINF = 4e18;
const long long LOG = 21;
const long long MAXN = 50000;
const long long MAXM = 100005;
const long long sz = 100000 + 9;
template <typename T>
void print(const vector<T> &v)
{
    for (auto &x : v)
    {
        cout << x << ' ';
    }
    cout << '
';
}
template <typename T>
void input(vector<T> &v)
{
    for (auto &x : v)
    {
        cin >> x;
    }
}
int ebob(int a, int b)
{
    int g = std::__gcd(a, b);
    return g;
}
int ekob(int a, int b)
{
    int g = std::__gcd(a, b);
    return (a / g) * b;
}
 
using namespace __gnu_pbds;
template <typename T>
using indexed_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
template <typename T>
using indexed_multiset = tree<
    pair<T, int>,
    null_type,
    less<pair<T, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
///--------------------TEMPLATE END-------------------------------------
 
void _()
{
    int n, q;
    cin >> n >> q;
    vi v(n + 1);
    for(int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    while(q--)
    {
        int t, l, r, x;
        cin >> t >> l >> r >> x;
        if(t == 1)
        {
            for(int i = l; i <= r; ++i)
            {
                if(v[i] > x)
                {
                    v[i] -= x;
                }
            }
        }
        else
        {
            int res = 0;
            for(int i = l; i <= r; ++i)
            {
                if(v[i] == x)
                {
                    ++res;
                }
            }
            cout << res << '
';
        }
    }
}
 
signed main()
{
    fastio 
    int t = 1;
    //cin >> t;
    while (t--)
    {
        _();
    }
}