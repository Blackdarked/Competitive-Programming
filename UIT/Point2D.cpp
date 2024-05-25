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
typedef pair<ll, ll> pll;
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
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define TRAV(v) for(auto &e : v)
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


template <typename T> void ckmin(T& a, const T& b) { a = min(a, b); }
template <typename T> void ckmax(T& a, const T& b) { a = max(a, b); }


ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 9097;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;


mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
ll Rand(ll l, ll r) { return l + rd() % (r - l); }

struct Point {
    ll x, y;
};

ll partition(vector<Point>& v, ll l, ll h) {
    Point pivot = v[h];
    ll i = l - 1;
    rep(j, l, h) {
        if ((v[j].x < pivot.x) or (v[j].x == pivot.x and v[j].y > pivot.y)) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[h]);
    return (i + 1);
}


void qs(vector<Point>& v, ll l, ll h) {
    if (l < h) {
        ll p = partition(v, l, h);
        qs(v, l, p - 1);
        qs(v, p + 1, h);
    }
}

void solve() {
    ll n; cin >> n; vector<Point> v(n);
    rep(i, 0, n) {
        cin >> v[i].x >> v[i].y;
    }

    // Debug
    // rep(i, 0, n) {
    //     cout << v[i].x << ' ' << v[i].y << nl;
    // }

    qs(v, 0, n - 1);
    rep(i, 0, n) {
        cout << v[i].x << ' ' << v[i].y << nl;
    }
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST
        // ofstream inp("I.inp");
        // ll n = Rand(1, 1000000);
        // vector<Point> v(n);
        // rep(i, 0, n) {
        //     v[i].x = Rand(-1000000000, 1000000000);
        //     v[i].y = Rand(-1000000000, 1000000000);
        // }
        solve();
    return 0;
}