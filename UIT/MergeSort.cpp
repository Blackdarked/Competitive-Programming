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

void print(const vll& a, int l, int r) {
    rep(i, 0, a.size()) {
        if (i == l) cout << "[ ";
        cout << a[i] << ' ';
        if (i == r) cout << "] ";
    }
    cout << nl;
}

void merge(vll& arr, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    vector<ll> a(n1), b(n2);
    rep(i, 0, n1) a[i] = arr[l + i];
    rep(i, 0, n2) b[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < a.size() and j < b.size()) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        }
        else {
            arr[k++] = b[j++];
        }
    }

    while (i < a.size()) {
        arr[k++] = a[i++];
    }

    while (j < b.size()) {
        arr[k++] = b[j++];
    }
}

void MergeSort(vll& a, int l, int r) {
    if (l < r) {
        int m = (l + r) >> 1;
        MergeSort(a, l, m);
        MergeSort(a, m + 1, r);
        merge(a, l, m, r);
        print(a, l, r);
    }
}


void solve() {
    int n; cin >> n; vll c(n);
    TRAV(c) { cin >> e; }
    MergeSort(c, 0, n - 1);
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}