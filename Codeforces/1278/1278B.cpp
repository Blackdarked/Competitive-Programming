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
const long long N = 1e5;
int a[N];

bool operation(ll a, ll b) {
    ll sum = 1LL * a * (a + 1) / 2;
    if (sum < b) return false;
    return sum % 2 == b % 2;
}

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
        ll a, b, count = 1;
        cin >> a >> b;
        ll dif = abs(a-b);
        if (dif == 0) {
            cout << "0\n";
            continue;
        }
        while (!operation(count, dif)) ++count;
        cout << count << '\n';
    }
	return 0;
}