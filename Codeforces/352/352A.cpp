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


void solve() {
    int n; cin >> n;
    int cnt0 = 0, cnt5 = 0;
    rep(i, 0, n) {
        int tmp; cin >> tmp;
        if (tmp == 0) cnt0++;
        else cnt5++;
    }
    if (cnt0 == 0) cout << -1;
    else if (cnt5 < 9) cout << 0;
    else {
        cnt5 -= cnt5 % 9;
        rep(i, 0, cnt5) cout << 5;
        rep(i, 0, cnt0) cout << 0;
    }
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}