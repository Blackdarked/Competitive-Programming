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
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
#define FOR(i, a, b) for (int i = a; i < b; ++i)
const long long N = 1e5;
int a[N];


int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
    bool odd[26] = {false};
    for (size_t i = 0; i < s.length(); ++i) {
        odd[s[i] - 'a'] = !odd[s[i] - 'a'];
    }
    int oddcount = count(odd, odd + sizeof(odd) / sizeof(odd[0]), true);
    return cout << (oddcount == 0 || (oddcount % 2) & 1 ? "First" : "Second"), 0;
}