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
    int n, a, b, cntTot = 0, cntInt = 0; cin >> n >> a >> b;
    int Tot = a + b;
    string s; cin >> s;
    rep(i, 0, n) {
        if (s[i] == 'a') {
            if (cntTot < Tot) {
                cout << "Yes";
                ++cntTot;
            }
            else cout << "No";
        }
        else if (s[i] == 'b') {
            if (cntTot < Tot and cntInt < b) {
                cout << "Yes";
                ++cntTot; ++cntInt;
            }
            else cout << "No";
        }
        else cout << "No";
        cout << nl;
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