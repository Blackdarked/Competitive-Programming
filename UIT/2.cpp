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
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
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

vector<int> input(int n) {
    vector<int> v(n + 1, -1);
    rep(i, 0, n) {
        do {
            cin >> v[i];
        } while (v[i] < 0);
    }
    return v;
}

void output(vector<int> v) {
    TRAV(v) { cout << e << ' '; }
}

int ins(vector<int>& v, int n, int k, int x) {
    if (k < 0 or k > n) return 0;

    rep(i, n + 1, k) {
        v[i] = v[i - 1];
    }
    return 1;
}

void ansb(vector<int>& v, int n, int k, int x) {
    if (ins(v, n, k, x)) {
        TRAV(v) {
            cout << e << ' ';
        }
        cout << nl << 1;
    }

    else cout << 0;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

bool check(ll a, ll b) { return (gcd(a, b) == 1); }

void ansc(vector<int> v, int n) {
    string ans;
    rep(i, 0, n) {
        rep(j, i + 1, n) {
            if (check(v[i], v[j])) {
                cout << "(" << v[i] << ", " << v[j] << ")";
                if (i == n - 2 and j == 1) cout << "\b\b";
                else cout << ", ";
            }
        }
    }
}

void solve() {
    // b)
    // int n, k, x; cin >> n;
    // vector<int> v = input(n);
    // cin >> k >> x;
    // ansb(v, n, k, x);
    // c)
    int n; cin >> n;
    vector<int> v = input(n);
    ansc(v, n);
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}