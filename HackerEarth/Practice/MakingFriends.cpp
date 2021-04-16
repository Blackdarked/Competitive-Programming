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

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll T, N, M;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        if (N % 2 == 0 && M <= N / 2 || M == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}