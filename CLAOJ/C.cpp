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


ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 9097;
string s, t;


mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }


void setIO(string s = "", bool c = 0) {
    if (c == 1) { //USACO mode
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

string ans[2] = { "4:2:0", "4:2:2" };
void solve() {
    bool flag = 1;
    int w, h; cin >> w >> h;
    char a[h + 2][w + 2] = { '0' };
    rep(i, 1, h + 1) {
        rep(j, 1, w + 1) {
            cin >> a[i][j];
        }
    }

    rep(i, 1, h + 1) {
        rep(j, 1, w + 1) {
            if (a[i][j] != '?' and j & 1) continue;
            else {
                if (a[i][j] == '?') {
                    if (!(j & 1)) a[i][j] = a[i][j - 1];
                    else if (!(i & 1)) {
                        a[i][j] = a[i - 1][j];
                        flag = 0;
                    }
                    else {
                        a[i][j] = a[i - 2][j - 2];
                        flag = 0;
                    }
                }
                else a[i][j] = a[i][j - 1];
            }
        }
    }

    cout << ans[flag] << nl;
    rep(i, 1, h + 1) {
        rep(j, 1, w + 1) {
            cout << a[i][j];
        }
        cout << nl;
    }
}


int32_t main() {
    setIO();
    FAST solve();
    return 0;
}