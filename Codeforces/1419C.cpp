#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define FAST         \
    cin.tie(nullptr);  \
    cout.tie(nullptr); \
    ios_base::sync_with_stdio(false);

void solve() {
    int n, x; cin >> n >> x;
    int ans = 0, tmp = 0;
    vi v(n);
    for(int &i : v) {
        cin >> i;
        if (i == x) ++tmp;
        ans += i;
    }
    if (tmp == n) cout << 0;
    else if (tmp >= 1) cout << 1;
    else if (ans == n * x) cout << 1;
    else cout << 2;
    cout << '\n';
}


int main() {
    FAST
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}