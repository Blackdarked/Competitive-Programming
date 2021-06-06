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

int cmp(int a, int b) {
    return a < b ? b : a;
}

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, m, count = 0;
    cin >> n >> m;
    for (int a = 0; a <= n; ++a) {
        for (int b = 0; b <= cmp(n, m); ++b) {
            if (a * a + b == n && a + b * b == m) {
                ++count;
            }
        }
    }
    cout << count;
    return 0;
}