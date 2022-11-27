#include <bits/stdc++.h>
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
typedef stack<int> si;
typedef deque<int> di;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        partition(a.begin(), a.end(), [&](const int u) {
            return u % 2;
        });
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}