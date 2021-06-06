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

    int k;
    cin >> k;
    if (k == 0) {
        return cout << 0, 0;
    }
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    sort(a, a + 12, greater<int>());
    int count = 0;
    for (int i = 0; i < 12; i++) {
        ++count;
        if (k - a[i] <= 0)
            return cout << count, 0;
        else
            k -= a[i];
    }
    if (k != 0)
        return cout << -1, 0;
}