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
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
#define FOR(i, a, b) for (int i = a; i < b; ++i)
const long long N = 1e3;
int a[N];


int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    FOR(i, 0, m) {
        cin >> a[i];
    }
    sort(a, a + m);
    int mn = a[n - 1] - a[0];
    for (int i = 1; i <= m - n; ++i) {
        if (mn > a[i + n - 1] - a[i])
            mn = a[i + n - 1] - a[i];
    }
    return cout << abs(mn) << '\n', 0;
}