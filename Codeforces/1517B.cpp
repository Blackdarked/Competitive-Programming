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
#define fIO                              \
    freopen("FILENAME.INP", "r", stdin); \
    freopen("FILENAME.OUT", "w", stdout);
int main()
{
    cIO
    int T;
    cin >> T;
    while (T--)
    {
        int h, w;
        cin >> h >> w;
        vvi a(h, vi(w));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> a[i][j];
            }
        }
        vvi b(h, vi(w, -1));
        viii all;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                all.emplace_back(a[i][j], i, j);
            }
        }
        sort(all.begin(), all.end());
        for (int id = 0; id < w; id++) {
            int i = get<1>(all[id]);
            b[i][id] = get<0>(all[id]);
        }
        for (int id = w; id < h * w; id++) {
            int i = get<1>(all[id]);
            for (int j = 0; j < w; j++) {
                if (b[i][j] == -1) {
                    b[i][j] = get<0>(all[id]);
                    break;
                }
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (j > 0)
                    cout << " ";
                cout << b[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}