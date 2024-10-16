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


template <typename T> void ckmin(T &a, const T &b) { a = min(a, b); }
template <typename T> void ckmax(T &a, const T &b) { a = max(a, b); }


ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 9097;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;
const int maxN = 1e4;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }


void setIO(string s = "", bool c = 0) {
    if (c == 1) { //USACO mode
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
int d[maxN], p[maxN]; //distance, path
bool vis[maxN];
vi g[maxN];
void BFS(int s) {
    qi q;
    q.push(s);
    vis[s] = 1;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (!vis[u]) {
            cout << u << ' ';
            vis[u] = 1;
        }
        for (auto v : g[u]) {
            d[v] = d[u] + 1;
            p[v] = u;
            vis[v] = true;
            q.push(v);
        }
    }
}

void path(int u) {
    if (!vis[u]) cout << "NO PATH";
    else {
        vi path;
        for (int v = u; v != -1; v = p[v]) path.PB(v);
        REV(path);
        TRAV(path) cout << e << ' ';
    }

}


void solve() {
    
}


int32_t main() {
    setIO();
    FAST solve();
    return 0;
}