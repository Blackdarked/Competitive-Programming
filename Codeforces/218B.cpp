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
	sort(a, a+m);
	int mn = 0, num = a[0], k = 0;
	FOR(i, 0, n) {
		mn += num;
		--num;
		if (num == 0) num = a[++k];
	}
	sort(a, a+m, greater<int>());
	int mx = 0;
	while(n--) {
		mx += a[0];
		--a[0];
		FOR(i, 1, m) {
			if (a[i] <= a[i-1]) break;
			swap(a[i], a[i-1]);
		}
		
	}
	cout << mx << ' ' << mn << '\n';
	return 0;
}