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
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> di;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        if (n % 2050 != 0) {
            cout << -1 << '\n';
            continue;
        }
        n /= 2050;
        ll ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        cout << ans << '\n';
    }
    return 0;
}