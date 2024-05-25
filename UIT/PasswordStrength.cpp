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
    string s; cin >> s;
    rep(i, 0, s.size()) {
        if (s[i] == '.' or s[i] == '/' or s[i] == '\\' or s[i] == ' ' or s[i] == ',') {
            cout << "KhongHopLe";
            return;
        }
    }
    int Num_Upper{ 0 }, Num_Numbers{ 0 }, Num_Symbols{ 0 }, Bonus_Combo{ 0 }, Bonus_FlatLower{ 0 }, Bonus_FlatNumber{ 0 };
    rep(i, 0, s.size()) {
        if (s[i] <= 97) Num_Upper++;
        if (s[i] >= 48 && s[i] <= 57) Num_Numbers++;
        if (s[i] == '!' or s[i] == '@' or s[i] == '#' or s[i] == '$' or s[i] == '%' or s[i] == '^' or s[i] == '&' or s[i] == '*' or s[i] == '?' or s[i] == '_' or s[i] == '~') Num_Symbols++;
    }

    if (Num_Symbols == 0 and Num_Upper == 0) Bonus_FlatNumber = -35;
    if (Num_Upper == 0) Bonus_FlatLower = -15;

    if (Num_Numbers > 0 and Num_Symbols > 0 and Num_Upper > 0) Bonus_Combo = 25;
    else if (Num_Numbers == 0 or Num_Symbols == 0 or Num_Upper == 0) Bonus_Combo = 15;
    else Bonus_Combo = 0;

    int score = 40 + ((s.size() - 8) * 3) + (Num_Upper * 4) + (Num_Numbers * 5) + (Num_Symbols * 5) + Bonus_Combo + Bonus_FlatLower + Bonus_FlatNumber;
    // cout << score << ' ' << Num_Numbers << ' ' << Num_Symbols << ' ' << Num_Upper << nl;
    if (score < 50) {
        cout << "Yeu";
    }
    if (score >= 50 and score < 75) {
        cout << "Vua";
    }
    if (score >= 75 and score < 100) {
        cout << "Manh";
    }
    if (score >= 100) {
        cout << "RatManh";
    }
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}