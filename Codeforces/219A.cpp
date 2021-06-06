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
#define FOR(i, a, b) for (size_t i = a; i < b; i++)
const long long N = 1e5;
int a[N];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int k;
    string s;
    cin >> k >> s;

    int count[26] = {0};
    for (size_t i = 0; i < s.length(); ++i) {
        count[s[i] - 'a'] += 1;
    }

    string s1;
    size_t c = 0;
    for (; c < 26; ++c) {
        if (count[c] % k != 0) {
            break;
        }
        else {
            s1.append(count[c] / k, 'a' + c);
        }
    }
    if (c == 26) {
        while (k--) {
            cout << s1;
        }
        return cout << '\n', 0;
    }
    else {
        return cout << -1 << '\n', 0;
    }
}
