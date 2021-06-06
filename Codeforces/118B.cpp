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
#define FOR(i, a, b) for (int i = a; i < b; i++)
const long long N = 9;
char a[N][N];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = -n; i <= n; ++i) {
        int num = n - abs(i);
        for (int j = 0; j < abs(i); ++j) {
            cout << "  ";
        }
        for (int j = 0; j < num; ++j) {
            cout << j << ' ';
        }
        for (int j = num; j > 0; --j) {
            cout << j << ' ';
        }
        cout << 0 << '\n';
    }
        return 0;
}