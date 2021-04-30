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
#define cIO         \
    cin.tie(nullptr);  \
    cout.tie(nullptr); \
    ios_base::sync_with_stdio(false);
     
int main() {
    cIO;
    int n;
    cin >> n;
    vi a(n, 0), b(n, 0), ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int res = 0;
    for (int i = 0; i <= 1000; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) 
            if (i < a[j] || i > b[j])
                ok = false;
        if (ok)
            res++;
    }
    cout << res;
    return 0;
}