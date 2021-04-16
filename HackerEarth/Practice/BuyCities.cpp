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

const int MAX = 1e4 + 5;
bool visited[MAX];

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    memset(visited, false, sizeof(visited));
    int T, E, X, Y, count = 0;
    cin >> T;
    assert(T >= 1 && T <= 100);
    while (T--) {
        cin >> E;
        assert(E >= 1 && E <= 1000);
        for (int i = 0; i < E; ++i) {
            cin >> X >> Y;
            assert(X >= 1 && X <= 10000);
            assert(Y >= 1 && Y <= 10000);
            visited[X] = true;
            visited[Y] = true;
        }
        int count = 0;
        for (int i = 0; i < MAX; ++i)
            if (visited[i]) {
                visited[i] = false;
                count++;
            }
        cout << count << "\n";
    }
    return 0;
}