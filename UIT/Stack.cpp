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
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;


mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

void solve() {
    // cin >> s;
    // stack<char> st;
    // rep(i, 0, s.size()) {
    //     if (s[i] == '*') {
    //         cout << st.top(); st.pop();
    //     }
    //     else st.push(s[i]);
    // }
    // n = Rand(0, 1e9);
    // int cnt = 1;
    // cout << n << nl;
    // stack<string> st;
    // // while (n != 0) {
    // //     st.push(n % 2);
    // //     n /= 2;
    // // }
    // while (n != 0) {
    //     int i = n % 16;
    //     if (i >= 10) {
    //         if (i == 10) st.push("A");
    //         if (i == 11) st.push("B");
    //         if (i == 12) st.push("C");
    //         if (i == 13) st.push("D");
    //         if (i == 14) st.push("E");
    //         if (i == 15) st.push("F");
    //     }
    //     else st.push(to_string(i));
    //     n /= 16;
    // }
    // while (!st.empty()) {
    //     if (cnt % 5 == 0) {
    //         cout << ' ';
    //     }
    //     cout << st.top();
    //     ++cnt;
    //     st.pop();
    // }
    sti st;
    cin >> n;
    s = to_string(n);
    int t = 1;
    while (n != 0) {
        st.push(n % 10);
        n /= 10;
    }
    while (!st.empty()) {
        ans += st.top() * t;
        t *= 10;
        st.pop();
    }
    cout << ans;
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}