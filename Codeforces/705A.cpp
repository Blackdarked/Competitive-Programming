#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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


#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define INF 1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

const string d[] = {"I hate that", "I love that", "I hate it", "I love it"};

void solve() {
    int n; cin >> n;
    string ans;
    bool chk = false; // false = "I love" || None ;; true = "I hate"
    for(int i=n; i>=1; --i) {
        if (i == 1) break;
        else if (chk == false) {
            ans += d[0];
            chk = true;
        }
        else {
            ans += d[1];
            chk = false;
        }
        ans += " ";
    }
    (chk == false) ? ans += d[2] : ans += d[3];
    cout << ans << '\n';
}


int main() {
    FAST solve();
    //int T; cin >> T;
    //while (T--) {
    //    solve();
    //}
    return 0;
}