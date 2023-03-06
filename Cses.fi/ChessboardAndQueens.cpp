#include<bits/stdc++.h>


using namespace std;


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
#define INF (ll)1e17
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define nl '\n'


template <typename T> void ckmin(T &a, const T &b) { a = min(a, b); }
template <typename T> void ckmax(T &a, const T &b) { a = max(a, b); }

string s[8];
bool b[15];

void solve() {
    rep(i, 0, 8) {
        cin >> s[i];
    }
    int bd[8], ans = 0;
    iota(bd, bd + 8, 0);
    do {
        bool check = 1;
        rep(i, 0, 8) {
            check &= (s[i][bd[i]] == '.'); //check if the coordination (x, y) is empty
        }
        memset(b, 0, 15);
        rep(i, 0, 8) {
            if (b[i+bd[i]]) check = 0; // check if there's at most 1 queen in each main diagonal
            b[i+bd[i]] = 1;
        }
        memset(b, 0, 15);
        rep(i, 0, 8) {
            if (b[i+7-bd[i]]) check = 0; //check if there's at most 1 queen in each antidiagonal
            b[i+7-bd[i]] = 1;
        }
        ans += check;
    } while (next_permutation(bd, bd + 8));
    cout << ans << nl;
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}