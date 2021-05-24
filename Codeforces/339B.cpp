#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
const long long N = 1e5;
int a[N];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    ll res = 0, cur = 1;
    for (int i = 0; i < m; i++) {
        if (a[i] == cur)
            continue;
        if (a[i] > cur)
            res += a[i] - cur;
        if (a[i] < cur)
            res += a[i] + (n - cur);
        cur = a[i];
    }
    cout << res;
    return 0;
}