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
typedef vector<pll> vpll;
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


ll n, m, k, q, l, r, x, y, z, s, t;
const ll template_array_size = 1e6 + 9097;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
ll ans = 0;

const ll N = 1e3;

vpll edges[N];
bool vis[N];
ll pre[N];
priority_queue<pll, vpll, greater<pll>> pq;



void dijkstra(ll s) { //Path: void dijkstra(ll s, ll t)
    vll dis(n + 1, INF);
    vb vis(n + 1, false);
    dis[s] = 0;
    pre[s] = s;
    pq.push({0, s});
    while(!pq.empty()) {
        pll top = pq.top(); pq.pop();
        ll u = top.S, d = top.F;
        if (vis[u]) continue;
        vis[u] = 1;
        TRAV(edges[u]) {
            ll v = e.F, w = e.S;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
                pre[v] = u;
            }
        }
    }
    rep(i, 1, n + 1) cout << dis[i] << ' ';
    cout << nl;

    // cout << dis[t] << nl;
    // vll path;
    // while(true) {
    //     path.EB(t);
    //     if (s == t) break;
    //     t = pre[t]; 
    // }
    // REV(path); TRAV(path) cout << e << ' ';
}

void solve() {
    cin >> n >> m >> s;
    rep(i, 0, m) {
        ll u, v, w; cin >> u >> v >> w;
        edges[u].EB(v, w);
        edges[v].EB(u, w);
    }
    // bellman_ford(n);
    dijkstra(s);
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}