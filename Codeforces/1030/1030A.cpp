#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<tuple<int, int, int>> viii;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> di;


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
#define INF 1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


void solve() {
    int n; cin >> n;
    rep(i, 0, n) {
        int t; cin >> t;
        if (t == 1) {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
    return;
}


int main() {
    FAST
    solve();
    return 0;
}