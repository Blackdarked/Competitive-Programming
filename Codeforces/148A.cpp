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
#define FOR(i, a, b) for (int i = a; i <= b; i+=a)

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> s;
    FOR(i, k, d) s.insert(i);
    FOR(i, l, d) s.insert(i);
    FOR(i, m, d) s.insert(i);
    FOR(i, n, d) s.insert(i);
    cout << s.size();
    return 0;
}