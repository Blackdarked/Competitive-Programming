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
#define FOR(i, a, b) for (size_t i = a; i < b; ++i)
const long long N = 1e5;
int a[N];


int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    size_t s, n;
    cin >> s >> n;
    vpi dragons(n);
    pi tmp;
    FOR(i, 0, n) {
        cin >> tmp.first >> tmp.second;
        dragons.push_back(tmp);
    }
    sort(dragons.begin(), dragons.end());
    FOR(i, 0, dragons.size()) {
        if (s <= dragons[i].first)
            return cout << "NO", 0;
        s += dragons[i].second;
    }
    return cout << "YES", 0;
}