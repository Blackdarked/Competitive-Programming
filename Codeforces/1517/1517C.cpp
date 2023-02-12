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
typedef vector<tuple<int, int, int>> viii;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> di;
#define cIO            \
    cin.tie(nullptr);  \
    cout.tie(nullptr); \
    ios_base::sync_with_stdio(false);

int main()
{
    cIO;
    int n;
    cin >> n;
    vi p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    vvi a(n, vi(n, -1));
    for (int i = 0; i < n; i++) {
        int x = i;
        int y = i;
        a[x][y] = p[i];
        for (int it = 1; it < p[i]; it++) {
            if (y > 0 && a[x][y - 1] == -1)
                --y;
            else
                ++x;
            assert(a[x][y] == -1);
            a[x][y] = p[i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 0)
                cout << " ";
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
