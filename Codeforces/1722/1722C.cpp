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


void solve() {
    int n; cin >> n;
    unordered_map<string, int> m;
    string a[3][n]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            m[a[i][j]]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (m[a[i][j]] == 1) sum += 3;
            else if (m[a[i][j]] == 2) sum += 1; 
        }
        cout << sum << ' ';
    }
    cout << '\n';
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST
    int t; cin >> t;
    while(t--) solve();
    return 0;
}