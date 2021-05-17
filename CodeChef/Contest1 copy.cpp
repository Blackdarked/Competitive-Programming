#include<bits/stdc++.h>
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

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    ll t, n, x, k;
    cin >> t;
    while (t--) {
        cin >> n >> x >> k;
        int s = (n + 1) % k;
        (x % k == 0 || x % k == s) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}