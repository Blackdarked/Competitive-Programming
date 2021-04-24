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

int main() {
    cIO;
    int h, w, k;
    cin >> h >> w >> k;
    vvi hor(h, vi(w - 1));
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w - 1; j++)
            cin >> hor[i][j];
    vvi ver(h - 1, vi(w));
    for (int i = 0; i < h - 1; i++)
        for (int j = 0; j < w; j++)
            cin >> ver[i][j];
    vvi ans(h, vi(w, 0));
    if (k % 2 == 1)
        ans.assign(h, vi(w, -1));
    else {
        vvi new_ans(h, vi(w, 0));
        for (int it = 0; it < k / 2; it++) {
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    new_ans[i][j] = (int)1e9;
                    if (i > 0)
                        new_ans[i][j] = min(new_ans[i][j], ans[i - 1][j] + 2 * ver[i - 1][j]);
                    if (j > 0)
                        new_ans[i][j] = min(new_ans[i][j], ans[i][j - 1] + 2 * hor[i][j - 1]);
                    if (i < h - 1)
                        new_ans[i][j] = min(new_ans[i][j], ans[i + 1][j] + 2 * ver[i][j]);
                    if (j < w - 1)
                        new_ans[i][j] = min(new_ans[i][j], ans[i][j + 1] + 2 * hor[i][j]);
                }
            }
        }
        swap(ans, new_ans);
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++){
            if (j > 0)
                cout << " ";
            cout << ans[i][j];
        }
        cout << '\n';
    }
    return 0;
}