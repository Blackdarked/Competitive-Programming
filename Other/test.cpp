#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define INF (int*)1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

const int N = 1e5;
vll p(N);
ll n, m;

ll ct(ll n, ll x) {
    return (n < x) ? 0 : n / x + ct(n / x, x);
}

// ll largestpow(ll n, ll p) {
//     int x = 0;
//     while(n) {
//         n /= p;
//         x += n;
//     }
//     return x;
// }

bool check(ll n) {
    if (n < 2) return false;
    for(ll i=2; i*i<=n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void prime() {
    cin >> n >> m;
    for (ll i=2; i<=m; ++i) {
        if (check(i) == true) p.EB(i);
    }
}

void solve() {
    
}

int32_t main() {
	FAST
	return 0;
}
//2 3 4 5 6 7 8 9 10
//2 + 2^2 + 2 + 2^3 + 2