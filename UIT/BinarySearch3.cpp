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
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

void gen() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "w", stdout);
#endif  
    int np = Rand(1, 1000), qp = Rand(1, 5000);
    cout << np << ' ' << qp;
    rep(i, 0, np) {
        cout << Rand(-1000, 1000) << nl;
    }
    cout << nl;
    rep(i, 0, qp) {
        cout << "type " << Rand(1, 2) << ' ' << Rand(-1000, 1000) << nl;
    }
}

void solve() {
    cin >> n >> q;
    vi v(n); TRAV(v) { cin >> e; }
    rep(i, 0, q) {
        bool f = 0;
        cin >> s >> x >> y;
        // t = s.substr(7, string::npos);
        // x = s[5], y = stoi(t);
        if (x == 1) {
            rep(i, 0, n) {
                if (y == v[i]) {
                    cout << ++i << nl;
                    f = 1;
                    break;
                }
            }
            if (f == 0) cout << -1 << nl;
        }
        else if (x == 2) {
            rep(i, n, -1) {
                if (y == v[i]) {
                    cout << ++i << nl;
                    f = 1;
                    break;
                }
            }
            if (f == 0) cout << -1 << nl;
        }
    }
}


int32_t main() {
    // gen();
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}