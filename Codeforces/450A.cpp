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

    int n, m, last;
    double t, max = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (ceil(t / m) >= max) {
            last = i;
            max = ceil(t / m);
        }
    }
    cout << last << '\n';
    return 0;
}