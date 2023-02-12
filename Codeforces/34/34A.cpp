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

    int n, a1;
    cin >> n >> a1;

    int prev(a1), reconnaissance(1e7), pos1, pos2;
    for (int i = 2; i <= n; ++i) {
        int a2;
        cin >> a2;
        int change = abs(a2 - prev);
        if (change < reconnaissance) {
            reconnaissance = change;
            pos1 = i - 1;
            pos2 = i;
        }
        prev = a2;
    }
    int change = abs(a1 - prev);
    if (change < reconnaissance) {
        pos1 = n;
        pos2 = 1;
    }
    cout << pos1 << ' ' << pos2 << '\n';
    return 0;
}