#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")


using namespace std;
using namespace __gnu_pbds;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef pair<bool, int> pbi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef struct node {int value; struct node *next;}node;


#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define TRAV(v) for(auto &i : v)
#define ALLVEC(v) v.begin(), v.end()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define ins insert
#define INF 1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


void dbug() {cerr << "n";}
bool isPowerofTwo(ll x) {return x && (!(x & (x - 1)));}


template<class T> bool chkmin(T &x, const T &y) {return x > y ? x = y, 1 : 0;}
template<class T> bool chkmax(T &x, const T &y) {return x < y ? x = y, 1 : 0;}


// x & y locale
const int dx[] = {1,0,-1,0,1,1,-1,-1};
const int dy[] = {0,-1,0,1,1,-1,-1,1};


//mt19937
// auto random_address = [] { char *p = new char; delete p; return uint64_t(p); };
// const uint64_t SEED = chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1);
// mt19937_64 rng(SEED);
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());


#define N 1e5;

ll a[1000000], dp[100000], ans;
bool key[26];

void solve() {
    int n, k; cin >> n >> k;
    string str; cin >> str;

    rep(i, 0, k) {
        char c; cin >> c;
        key[c - 'a'] = 1; // 0 index
    }
    rep(i, 0, n) {
        if (key[str[i] - 'a']) a[i] = 1;
        else a[i] = 0;
    }
    dp[0] = 0;
    rep(i, 0, n) {
        if (a[i] == 0) {
            dp[i + 1] = 0;
        }
        else {
            dp[i + 1] = dp[i] + 1;
        }
        ans += dp[i + 1];
    }
    cout << ans;
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/bigax/Documents/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/Users/bigax/Documents/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}