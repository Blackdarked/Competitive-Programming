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


int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, x, f = 0, z = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 5)
            ++f;
        else
            ++z;
    }
    x = f / 9;
    if (x == 0)
        z > 0 ? cout << 0 << '\n' : cout << -1 << '\n';
    else {
        if (z > 0) {
            for (int i = 1; i < 9 * x; i++)
                cout << 5;
            for (int i = 1; i <= z; i++)
                cout << 0;
        }
        else
            cout << -1;
        cout << '\n';
    }
    return 0;
}